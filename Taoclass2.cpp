#include <iostream>
using namespace std;

class hcn
{
private:
    float d, r;

public:
    hcn()
    {
        d = r = 0;
    }
    ~hcn()
    {
        d = r = 0;
    }
    void nhap()
    {
        cout << "Nhap chieu dai:" << endl;
        cin >> this->d;
        cout << "Nhap chieu rong: " << endl;
        cin >> this->r;
    }
    void xuat()
    {
        cout << "chieu dai la " << this->d << endl;
        cout << "Chieu rong la" << this->r;
    }
    float chuvi(float d, float r)
    {
        return (d + r) * 2;
    }
    float dientich(float d, float r)
    {
        return (d * r);
    }
    void xuatN()
    {
        cout << "Chu vi la " << chuvi(d, r) << endl;
        cout << "Dien tich la " << dientich(d, r) << endl;
    }
};

int main()
{
    hcn obj;
    obj.nhap();
    obj.xuat();
    obj.chuvi(0, 0);
    obj.dientich(0, 0);
    obj.xuatN();
}