
name = ft_putnbr

ft_putchar = ex00/ft_putchar
digit_to_char = ex05/digit_to_char

ft_putnbr = ft_putnbr

ft_putnbr : main.o $(ft_putnbr).o $(ft_putchar).o $(digit_to_char).o
	cc -O -o $(name) main.o $(ft_putnbr).o $(ft_putchar).o $(digit_to_char).o

main.o : main.c $(ft_putnbr).h
	cc -c main.c

clean:
	rm *.o; rm $(name)
