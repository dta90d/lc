
name = ft_putchar
ft_putchar = ft_putchar

ft_putchar : main.o $(ft_putchar).o
	cc -O -o $(name) main.o $(ft_putchar).o

main.o : main.c $(ft_putchar).h
	cc -c main.c

clean:
	rm *.o; rm $(name)
