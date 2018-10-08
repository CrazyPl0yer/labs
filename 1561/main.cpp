#include <iostream>
#include <cmath>
using namespace std;
double task_1(double x,double e)
{
    double y;
    y=pow(pow(cos(e),x)+std::log((pow(1+x,2)),10)+sqrt(pow(e,cos(x))+pow(sin(x),2),2)*3.14*sqrt(1/x,2)x+pow(cos(pow(x,2),2)),sin(x));
    return y;
}
double task_2(double x,double e)
{
    double y;
    y=(1/sqrt(x,2)+pow(cos(e),e)+pow(cos(x),2))/(sqrt(pow(std::log(1+x),2)+sqrt(pow(e,cos(e))+pow(sin(x),2)*3.14,3)));
    return y;
}
double task_3(double x,double e)
{
    double y;
    y=((pow(sin(x),2))*3.14+pow((std::log(x),10),2))/((pow(sin(x),2))*3.14+sin(x)+pow(std::log(x,10),2)+pow(x,2)+pow(e,cos(x)));
    return y;
}
int main()
{
    double a=task_1(5);
    cout << a << endl;
    return 0;
}
