CC   = cc
OBJS = main.o build_tree.o backend.o 
TEST_OBJS = powTwo.o powTwoTest.o

CFLAGS = -O3 -g3 -Wall -Wextra -Werror=format-security -Werror=implicit-function-declaration \
         -Wshadow -Wpointer-arith -Wcast-align -Wstrict-prototypes -Wwrite-strings

all: compile powTwoTest

%.o: %.c
	${CC} $(CFLAGS) -c -o $@ $<

compile: $(OBJS) $(TEST_OBJS)
	${CC} -o compile $@ $^

run: compile
	./compile

test: $(TEST_OBJS)
    ${CC} -o powTwoTest $(TEST_OBJS)
    ./powTwoTest

clean:
	rm -f *.o compile powTwoTest

backend.o: backend.c
build_tree.o: build_tree.c build_tree.h
main.o: main.c 

powTwo.o: powTwo.c powTwo.h
powTwoTest.o: powTwoTest.c powTwoTest.h powTwo.h