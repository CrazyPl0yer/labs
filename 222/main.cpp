#include <iostream>

using namespace std;

int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
bool less(int a,int b)
{
    return a<b;
}
using BinaryOperation=int(*)(int,int);


int main()
{
    int a = 4;
    auto p = &a;
    int* p1 = &a;
    (*p) * (*p);
    BinaryOperation mul=[](int a,int b) {return a*b;};
    BinaryOperation operations[4]{sum,sub,mul,[](int a,int b) {return a/b;}};
    cout << operations[3](50,24) << endl;
    return 0;
}
