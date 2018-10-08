#include <iostream>
#define a 4
#define sum(b,c) b+c
using namespace std;
void print_array(int* first, int size_)
{
    for(int i=0; i<size_; ++i)
    {
        cout << *(first+i);
    }
}
void _print_array(int* first, int* last)
{
    for(; first<last; ++first)
    {
        cout << *first;
    }
}
int accumulate_(int* first,int* last)
{
    int result=0;
    for(; first!=last; ++first)
    {
        result+= *first;

    }
    return result;
}
int main()
{
    int arr[5] {1,2,3,5,6};
    int p=accumulate_(arr,arr+5);
    cout << p;
    return 0;
}
