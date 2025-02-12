all: strlength.exe strconcat.exe strcompare.exe

mystrings.o: mystrings.c mystrings.h
	gcc -c mystrings.c -o mystrings.o

strlength.exe: strlength.c mystrings.o
	gcc strlength.c mystrings.o -o strlength.exe

strconcat.exe: strconcat.c mystrings.o
	gcc strconcat.c mystrings.o -o strconcat.exe

strcompare.exe: strcompare.c mystrings.o
	gcc strcompare.c mystrings.o -o strcompare.exe

clean:
	del -f *.o *.exe
