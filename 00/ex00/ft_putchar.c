#include <unistd.h>

void ft_putchar( char c )
{
    write( 1, &c, 1 );
}

int main( int argv[] )
{
    ft_putchar( 'a' );
    ft_putchar( 'b' );
    ft_putchar( 'c' );

    return 0;
}
