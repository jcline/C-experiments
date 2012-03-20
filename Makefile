CC        = gcc
CFLAGS    = -pedantic -Wall $(DEBUGFLAG)
OPTFLAG		= -O2
DEBUGFLAG	= -g
LINKER		= gcc

SRC = \
  obj_test.c \
	poly_test_parent.c \
	poly_test_a_child.c \
	poly_test_b_child.c \
	tester.c


OBJS = $(SRC:.c=.o)

tester: $(OBJS) 
	$(LINKER) $(OBJS) -o $@

clean:
	rm $(OBJS) tester
