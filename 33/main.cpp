#include <iostream>

using namespace std;

void prt_triangle()
{
        for(int i=10; i>0; --i)
    {
        for(int j=0; j<i; ++j)
        {
            cout << '*';
        }
        cout << '\n';
    }
}
int main()
{
    prt_triangle();
    return 0;
}
