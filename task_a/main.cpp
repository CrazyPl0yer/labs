#include <iostream>
#include <cmath>

int get_sum_ppowers_5(double first,double last)
{
    double temp=0;
    for(;first<last; ++first)
    {
        temp=(temp+std::pow(5,first));
        std::cout << pow(5,first) << std::endl;
        std::cout << temp <<std::endl;

    }
    return temp;
}

int main()
{
    int result=get_sum_ppowers_5(1,5);
    std::cout << result;
    return 0;
}
