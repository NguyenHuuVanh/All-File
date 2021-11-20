#include <iostream>
using namespace std;

class phanso
{
private:
    int tu, mau;

public:
    phanso()
    {
        this->tu = mau = 0;
    }
    ~phanso()
    {
        this->tu = mau = 0;
    }

    void taophanso()
    {
        cout << "Nhap tu so: ";
        cin >> this->tu;
        cout << "Nhap mau so: ";
        cin >> this->mau;
    }

    void inphanso()
    {
        cout << "Phan so da nhap la " << this->tu << "/" << this->mau;
    }

    phanso operator+(phanso b)
    {
        phanso c;
        c.tu = this->tu * b.mau + this->mau * b.tu;
        c.mau = this->mau * b.mau;
        return c;
    }
};

int main()
{
    phanso a, b, c, ps;
    cout << "--------in phan so--------" << endl;
    ps.taophanso();
    ps.inphanso();
    cout << "\n----------tao phan so---------" << endl;
    a.taophanso();
    b.taophanso();
    c = a + b;
    c.inphanso();
    cout << "---------";
}