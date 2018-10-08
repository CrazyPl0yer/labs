#include <iostream>

using namespace std;
int pow(int number,int power)
{
    int result=1;
    for(int i=0; i<power; ++i)
        result *=number;
    return result;
}
int main()
{
    cout << pow(2,3) << endl;
    return 0;
}
