gcd_app: main.o libgcd_iterative.so
	g++ -o gcd_app main.o -L. -lgcd_iterative -Wl,-rpath,.

main.o: main.cpp
	g++ -c main.cpp

libgcd_iterative.so: gcd_iterative.o
	g++ -shared -o libgcd_iterative.so gcd_iterative.o

gcd_iterative.o: gcd_iterative.cpp
	g++ -c -fPIC gcd_iterative.cpp

clean:
	rm -f *.o *.so gcd_app
