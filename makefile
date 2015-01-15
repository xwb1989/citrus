CC=g++
CPPC=g++
LD=g++
LIB = -lurcu
RM=rm
CFLAGS=-Wall -c -DEXTERNAL_RCU
CPPFLAGS=$(CFLAGS)
LDFLAGS= 
CSRC=citrus.c 
CPPSRC=helloworld.cpp
PROG=hello
OBJS= $(CSRC:.c=.o)  $(CPPSRC:.cpp=.o) 

.PHONY: all
all: $(PROG)


$(PROG): $(OBJS)
	$(LD) $(LDFLAGS) $^ -o $@ $(LIB)

%.o: %.c 
	$(CC) $(CFLAGS) $< -o $@

%.o: %.cpp 
	$(CPPC) $(CPPFLAGS) $< -o $@

.PHONY: clean
clean:
	$(RM) $(OBJS) $(PROG)
	
