#include "ex00/ft_putchar.h"

void ft_print_reverse_alphabet()
{
    for ( int i = 122; i > 96; i-- )
    {
        ft_putchar( i );
    }
}
