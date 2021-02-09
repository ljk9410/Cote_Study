#include "../includes/calc.h"

void    add(CALC_DATA *data)
{
    data->oper = '+';
    data->result = data->num1 + data->num2;
}

void    sub(CALC_DATA *data)
{
    data->oper = '-';
    data->result = data->num1 - data->num2;
}

void    mul(CALC_DATA *data)
{
    data->oper = '*';
    data->result = data->num1 * data->num2;
}

void    div(CALC_DATA *data)
{
    data->oper = '/';
    data->result = data->num1 / data->num2;
}