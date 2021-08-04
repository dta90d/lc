
name = ft_print_numbers
ft_putchar = ex00/ft_putchar
ft_print_numbers = ft_print_numbers

ft_print_numbers : main.o $(ft_print_numbers).o $(ft_putchar).o
	cc -O -o $(name) main.o $(ft_print_numbers).o $(ft_putchar).o

main.o : main.c $(ft_print_numbers).h
	cc -c main.c

clean:
	rm *.o; rm $(name)
