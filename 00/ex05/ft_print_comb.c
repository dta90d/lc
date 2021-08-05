#include "ex00/ft_putchar.h"
#include "digit_to_char.h"

static int is_unique( char a, char b, char c )
{
    int is_unique = 1;
    
    if ( a == b || a == c || b == c )
    {
        is_unique = 0;
    }

    return is_unique;
}

static int calc( char a, char b, char c )
{
    return ( a + b + c ) * ( a + b ) * ( a + c ) * ( b + c );
}

static int is_new_comb( char a, char b, char c, int* buff )
{
    int status = 0;

    int index = calc( a, b, c );

    if ( buff[ index ] != 1 )
    {
        buff[ index ] = 1;
        status = 1;
    }

    return status;
}

void ft_print_comb()
{
    int buff[ calc( 9, 9, 9 ) ]; // С запасом.
    int c = 0;

    for ( char i = 0; i < 10; i++ )
    {
        for ( char j = 0; j < 10; j++ )
        {
            for ( char k = 0; k < 10; k++ )
            {
                if ( is_unique( i, j, k ) && is_new_comb( i, j, k, buff ) )
                {
                    if ( c != 0 )
                    {
                        ft_putchar( ',' );
                        ft_putchar( ' ' );
                    }

                    ft_putchar( digit_to_char( i ) );
                    ft_putchar( digit_to_char( j ) );
                    ft_putchar( digit_to_char( k ) );

                    c++;
                }
            }
        }
    }
}
