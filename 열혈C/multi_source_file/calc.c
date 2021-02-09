#include "calc.h"

void    add(CALC_DATA *data)
{
    data->oper = '+';
    data->result = data->operand1 + data->operand2;

}
void    sub(CALC_DATA *data)
{
    data->oper = '-';
    data->result = data->operand1 - data->operand2;
}