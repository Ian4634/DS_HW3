main: variable.o link.o main.o
	gcc -I ./include ./lib/variable.o ./lib/link.o main.o -o main.exe
variable.o: ./lib/variable.c
	gcc -I ./include ./lib/variable.c -c -o ./lib/variable.o
link.o: ./lib/link.c
	gcc -I ./include ./lib/link.c -c -o ./lib/link.o
main.o: main.c
	gcc -I ./include main.c -c -o main.o
