#include "../includes/calc.h"
#include "../includes/print.h"

int     main()
{
    CALC_DATA data;

    data.num1 = 40;
    data.num2 = 20;

    add(&data);
    print(&data);
    sub(&data);
    print(&data);
    mul(&data);
    print(&data);
    div(&data);
    print(&data);

    return (0);
}