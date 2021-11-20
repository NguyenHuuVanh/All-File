#include <iostream>
using namespace std;

class phanso
{
private:
    int tu, mau;

public:
    phanso()
    {
        this->tu = 0;
        this->mau = 0;
    };
    phanso(int T, int M)
    {
        T = tu;
        M = mau;
    }
    void nhap()
    {
        cout << "Nhap tu :";
        cin >> this->tu;
        cout << "Nhap mau :";
        cin >> this->mau;
    }

    void in()
    {
        cout << tu << "/" << mau << endl;
    }
};
int main()
{
    phanso ps;
    ps.in();
    phanso ps1(25, 9);
    ps1.in();
}