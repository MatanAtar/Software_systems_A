CC=gcc
AR=ar
FLAGS= -Wall -g 
OBJECTS_LOOPS=advancedClassificationLoop.o basicClassification.o
OBJECTS_RECURSION=advancedClassificationRecursion.o basicClassification.o
OBJECTS_MAIN=main.o

all: loops recursives recursived loopd mains maindloop maindrec

loops: libclassloops.a
libclassloops.a: $(OBJECTS_LOOPS)
	$(AR) -rcs libclassloops.a $(OBJECTS_LOOPS)

recursives: libclassrec.a
libclassrec.a: $(OBJECTS_RECURSION)
	$(AR) -rcs libclassrec.a $(OBJECTS_RECURSION)

recursived: libclassrec.so
libclassrec.so: $(OBJECTS_RECURSION)
	$(CC) -shared -o libclassrec.so $(OBJECTS_RECURSION)

loopd: libclassloops.so
libclassloops.so: $(OBJECTS_LOOPS)
	$(CC) -shared -o libclassloops.so $(OBJECTS_LOOPS)

mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) ./libclassrec.a -lm

maindloop: $(OBJECTS_MAIN) libclassloops.so
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so -lm

maindrec: $(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so -lm

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c 

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c 

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so loops recursives recursived loopd mains maindloop maindrec