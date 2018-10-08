#include <iostream>
#include <typeinfo>
using namespace std;

using UnaryOperation = int (*)(int);
int f(int a)
{
    cout << "hello world ";
    return 4;
}
int main()
{
    auto a=4.2;
    UnaryOperation f1 = f;
    auto f2 = f(4654);
    f1(5);
    cout << typeid(f2).name() << endl;
    return 0;
}
