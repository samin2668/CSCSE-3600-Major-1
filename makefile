bitwisemenu: major1.o
	gcc -Wall major1.o rotate.o parity.o endian.o clz.o -o bitwisemenu

major1.o: major1.c major1.h rotate.o parity.o endian.o clz.o
	gcc -c -Wall major1.c

endian.o: endian.c
	gcc -c -Wall endian.c

clz.o: clz.c
	gcc -c -Wall clz.c

rotate.o: rotate.c
	gcc -c -Wall rotate.c

parity.o: parity.c
	gcc -c -Wall parity.c

clean:
	rm *.o bitwisemenu
