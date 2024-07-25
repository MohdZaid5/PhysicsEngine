
all: prepare program run

prepare:
	mkdir -p Bin

program: program.c
	gcc program.c -o Bin\program.exe

run: Bin\program.exe
	.\Bin\program.exe

clean:
	rm -r Bin
