ABC.exe: main.o big3.o fact.o pal.o
<TAB>gcc -o ABC.exe main.o big3.o fact.o pal.o

main.o: main.c
<TAB>gcc -c main.c

big3.o: big3.c
<TAB>gcc -c big3.c

fact.o: fact.c
<TAB>gcc -c fact.c

pal.o: pal.c
<TAB>gcc -c pal.c

clean:
<TAB>rm -f *.o ABC.exe
