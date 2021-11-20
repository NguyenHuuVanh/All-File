#include <iostream>
using namespace std;

class HCN
{
private:
    float length, width;

public:
    HCN()
    {
        length = width = 0;
    }
    ~HCN()
    {
        length = width = 0;
    }
    void get()
    {
        cout << "length:";
        cin >> length;
        cout << "width:";
        cin >> width;
    }
    void got()
    {
        cout << "Length = " << this->length << endl;
        cout << "width = " << this->width << endl;
    }
    float perimeter()
    {
        return (length + width) * 2;
    }
    float area()
    {
        return (length * width);
    }
};

int main()
{
    // HCN h[5];
    HCN *p;
    p = new HCN[5];
    int tmp;
    float maxperimeter = p[1].perimeter(), maxarea = p[1].area();
    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter length and width of rectangle " << i << endl;
        p[i].get();
    }
    for (int i = 0; i <= 5; i++)
    {
        cout << "Print length and width" << endl;
        p[i].got();
    }
    for (int i = 1; i <= 5; i++)
    {
        if (p[i].perimeter() > maxperimeter)
        {
            maxperimeter = p[i].perimeter();
        }
        if (p[i].area() > maxarea)
        {
            maxarea = p[i].area();
            tmp = i;
        }
    }
    cout << "Rectangle " << tmp << endl;
    cout << "Max perimeter of ractangle is " << maxperimeter << endl;
    cout << "Max area of ractangle is " << maxarea;
}