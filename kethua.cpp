#include <bits/stdc++.h>
using namespace std;

class parent
{
public:
    int id_p;
};

class child : public parent
{
public:
    int id_c;
};

int main()
{
    child objc;
    objc.id_c = 25;
    objc.id_p = 9;
    cout << "ID parent is " << objc.id_p << endl;
    cout << "ID child is " << objc.id_c << endl;
}