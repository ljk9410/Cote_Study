#include "calc.h"
#include "print.h"

int     main()
{
    CALC_DATA data1;
    CALC_DATA data2;

    data1.operand1 = 10;
    data1.operand2 = 20;
    data2.operand1 = 40;
    data2.operand2 = 15;

    add(&data1);
    print(&data1);
    sub(&data2);
    print(&data2);

    return (0);
}