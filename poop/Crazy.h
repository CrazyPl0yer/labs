#ifndef CRAZY_H_INCLUDED
#define CRAZY_H_INCLUDED
template<typename T>
struct Calculator

{
    T operand1;
    T operand2;
    void add()
    {
        operand1=operand1+operand2;
    }
    void mull()
    {
        operand1=operand1*operand2;
    }
    void sub()
    {
        operand1=operand1-operand2;
    }
    void div()
    {
        operand1=operand1/operand2;
    }
    T get_result()
    {
        return operand1;
    }
};
#endif // CRAZY_H_INCLUDED
