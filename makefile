CC=g++
CPPC=g++
LD=g++
RM=rm
CFLAGS=-Wall -c
CPPFLAGS=$(CFLAGS)
LDFLAGS= 
CSRC=new_urcu.c \
		citrus.c 
CPPSRC=helloworld.cpp
PROG=hello
OBJS= $(CSRC:.c=.o)  $(CPPSRC:.cpp=.o) 

.PHONY: all
all: $(PROG)


$(PROG): $(OBJS)
	$(LD) $(LDFLAGS) $^ -o $@ 

%.o: %.c 
	$(CC) $(CFLAGS) $< -o $@

%.o: %.cpp 
	$(CPPC) $(CPPFLAGS) $< -o $@

.PHONY: clean
clean:
	$(RM) $(OBJS) $(PROG)
	
