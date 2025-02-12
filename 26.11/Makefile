all: safeadd safesubtract safemultiply safedivide

safeadd: safeadd.c safeint.c util.c
	gcc safeadd.c safeint.c util.c -o safeadd

safesubtract: safesubtract.c safeint.c util.c
	gcc safesubtract.c safeint.c util.c -o safesubtract

safemultiply: safemultiply.c safeint.c util.c
	gcc safemultiply.c safeint.c util.c -o safemultiply

safedivide: safedivide.c safeint.c util.c
	gcc safedivide.c safeint.c util.c -o safedivide

clean:
	rm -f safeadd safesubtract safemultiply safedivide
