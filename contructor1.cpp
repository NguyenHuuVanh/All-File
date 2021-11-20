#include <iostream>
using namespace std;

class HCN
{
private:
    int d, r;

public:
    HCN(float dx, float dr = 0)
    {
        d = dx;
        r = dr;
    }
    void in()
    {
        cout << this->d << this->r;
    }
};
int main()
{
    // HCN h1;
    HCN h2(0, 5);
    HCN h3(25, 9);
    // h1.in();
    h2.in();
    h3.in();
}