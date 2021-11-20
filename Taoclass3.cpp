#include <iostream>
using namespace std;

class HCN
{
private:
    float length, width;

public:
    void input();
    void output();
    float perimeter();
    float area();
    void oput();
};

void HCN ::input()
{
    cout << "Lenth :" << endl;
    cin >> length;
    cout << "width :" << endl;
    cin >> width;
}

void HCN ::output()
{
    cout << "Length = " << length << endl;
    cout << "width = " << width << endl;
}

float HCN ::perimeter()
{
    return (length + width) * 2;
}

float HCN ::area()
{
    return (length * width);
}
void HCN ::oput()
{
    cout << "Perimeter of rectangle is " << perimeter() << endl;
    cout << "area of rectangle is " << area() << endl;
}

int main()
{
    HCN obj;
    obj.input();
    obj.output();
    obj.perimeter();
    obj.oput();
    cout << endl;
}
