PROG:=hello

.PHONY: all
all: 
	g++ -c -Wall -DEXTERNAL_RCU citrus.c -o citrus.o
	g++ -c -Wall -DEXTERNAL_RCU helloworld.cpp -o helloworld.o
	g++ -o $(PROG) helloworld.o citrus.o -lurcu

.PHONY: all
new:
	g++ -c -Wall citrus.c -o citrus.o
	g++ -c -Wall helloworld.cpp -o helloworld.o
	g++ -c -Wall new_urcu.c -o new_urcu.o
	g++ -o $(PROG) helloworld.o citrus.o new_urcu.o


.PHONY: clean
clean:
	$(RM) *.o $(PROG)
	
