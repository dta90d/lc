#include "ex00/ft_putchar.h"

void ft_is_negative( int n )
{
    char status;

    if ( n < 0 )
    {
        status = 'N';
    }
    else
    {
        status = 'P';
    }

    ft_putchar( status );
}
