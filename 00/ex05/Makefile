
name = ft_print_comb
ft_putchar = ex00/ft_putchar
ft_print_comb = ft_print_comb

ft_print_comb : main.o $(ft_print_comb).o $(ft_putchar).o
	cc -O -o $(name) main.o $(ft_print_comb).o $(ft_putchar).o

main.o : main.c $(ft_print_comb).h
	cc -c main.c

clean:
	rm *.o; rm $(name)
