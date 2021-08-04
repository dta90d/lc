
name = ft_is_negative
ft_putchar = ex00/ft_putchar
ft_is_negative = ft_is_negative

ft_is_negative : main.o $(ft_is_negative).o $(ft_putchar).o
	cc -O -o $(name) main.o $(ft_is_negative).o $(ft_putchar).o

main.o : main.c $(ft_is_negative).h
	cc -c main.c

clean:
	rm *.o; rm $(name)
