
all: prepare program run

prepare:
	mkdir -p Bin

program: program.c
	gcc program.c -o Bin\program.exe

vectors: Source\vectors.c
	gcc -c Source\vectors.c -o Bin\vectors.o

run: Bin\program.exe
	.\Bin\program.exe

clean:
	rm -r Bin
