#include <iostream>

using namespace std;
template<typename T>
T sum(T a,T b)
{
    return a+b;
}
template<typename T>
bool less(T a,T b)
{
    return a<b;
}
int main()
{
    int a=888;
    int arr[3]{2,3,4};
    arr[3]=111;
    auto my_sum1=sum<int>;
    auto my_sum2=sum<double>;
    auto result=my_sum1(4.4,6.0);
    cout << &arr[3] << endl;
    cout << a << endl;
    return 0;
}
