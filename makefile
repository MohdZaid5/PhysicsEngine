
all: prepare program run

prepare:
	mkdir -p Bin
	mkdir -p Build

program: program.c
	gcc program.c Bin\vectors.o -o Build\program.exe -IInclude -ISource

vectors: Source\vectors.c
	gcc -c Source\vectors.c -o Bin\vectors.o

run: Bin\program.exe
	.\Bin\program.exe

clean:
	rm -r Bin
	rm -r Build
