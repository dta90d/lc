#include "ex00/ft_putchar.h"
#include "ex05/digit_to_char.h"

static int _number_of_digits( int n ) // NOTE: Only works with positive numbers.
{
    if ( n < 10 )
    {
        return 1;
    }
    else
    {
        return _number_of_digits( n / 10 ) + 1;
    }
}

static int _pow( int n, int exp ) // NOTE: Only works with positive exponent.
{
    if ( exp == 0 )
    {
        return 1;
    }
    else
    {
        return n * _pow( n, exp - 1 );
    }
}

void ft_putnbr( int nb )
{
    if ( nb < 0 )
    {
        ft_putchar( '-' );
        nb *= -1;
    }

    for ( int i = _number_of_digits( nb ) - 1; i >= 0; i-- )
    {
        ft_putchar( digit_to_char( nb / ( _pow( 10, i ) ) ) );
        nb %= _pow( 10, i );
    }
}
