test: test.o libzio.a
	ld -m elf_i386 -o test test.o -L. -lzio

run: test
	./test

test.o: test.zcode test.funcmacro macro.inc
	nasm -f elf32 -P"macro.inc" -P"test.funcmacro" -o test.o test.zcode

libzio.a: zio.c
	gcc -m32 -fno-stack-protector -c -o zio.o zio.c
	ar -crv libzio.a zio.o

clean:
	rm test.o test zio.o libzio.a