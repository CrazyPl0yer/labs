#include <iostream>
#include "Crazy.h"
using namespace std;

struct console_calculator()
{

};

int main()
{
    Calculator<int> calc;
    calc.operand1=7;
    calc.operand2=5;
    calc.sub();
    cout << calc.get_result() << endl;
    return 0;

}
