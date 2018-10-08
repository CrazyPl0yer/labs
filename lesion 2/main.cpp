#include <iostream>

using namespace std;
int quest1(int i,int first,int last)
{
    first=i%10;
    last=i/100000;
    int result=first*last;

}
bool quest2(int i)
{
    if(i%7)
    {
        return true;
    }
    return false;
}

int main()
{
    auto a=quest1(715655,0,0);
    cout << a << endl;
    return 0;
    int b=quest2(999);
    cout << b;
    return 0;
}
