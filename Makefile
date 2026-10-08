minimat: main.o myveclab.o myvectarray.o myvectop.o
	gcc -o minimat main.o myveclab.o myvectarray.o myvectop.o

main.o: main.c myvectlab.h
	gcc -c main.c

myveclab.o: myveclab.c myvectlab.h myvect.h myvectop.h myvectarray.h
	gcc -c myveclab.c

myvectarray.o: myvectarray.c myvectarray.h myvect.h
	gcc -c myvectarray.c

myvectop.o: myvectop.c myvectop.h myvect.h
	gcc -c myvectop.c

clean:
	rm -f *.o minimat
