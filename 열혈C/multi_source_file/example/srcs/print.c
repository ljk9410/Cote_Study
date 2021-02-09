#include "../includes/print.h"

void    print(CALC_DATA *data)
{
    printf("%d %c %d = %d\n",
        data->num1,
        data->oper,
        data->num2,
        data->result
    );
}