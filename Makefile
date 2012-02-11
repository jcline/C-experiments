CC        = gcc
CFLAGS    = -pedantic -Wall
OPTFLAG		= -O2
DEBUGFLAG	= -g
LINKER		= gcc

SRC = \
  obj_test.c \
	tester.c


OBJS = $(SRC:.c=.o)

tester: $(OBJS) 
	$(LINKER) $(OBJS) -o $@

clean:
	rm $(OBJS) tester
