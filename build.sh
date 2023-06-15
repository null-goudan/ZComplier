mkdir -p release
flex sources/scanner.l
bison -vdty sources/parser.y
gcc -o release/zcc-frontend lex.yy.c y.tab.c
rm -f y.* lex.*
gcc -m32 -fno-stack-protector -c -o zio.o sources/zio.c
ar -crv release/libzio.a zio.o > /dev/null
rm -f zio.o
cp sources/macro.inc sources/pysim.py sources/zcc sources/pysimulate release/
chmod u+x release/zcc release/pysimulate
export PATH=$PATH:$PWD/release
echo "export PATH=\$PATH:$PWD/release" >> ~/.bashrc