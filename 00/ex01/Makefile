
name = ft_print_alphabet
ft_putchar = ex00/ft_putchar
ft_print_alphabet = ft_print_alphabet

ft_print_alphabet : main.o $(ft_print_alphabet).o $(ft_putchar).o
	cc -O -o $(name) main.o $(ft_print_alphabet).o $(ft_putchar).o

main.o : main.c $(ft_print_alphabet).h
	cc -c main.c

clean:
	rm *.o; rm $(name)
