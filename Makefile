BIN= bin
CFLAGS= -g -Wall

all: $(BIN)/sh-wc $(BIN)/sh-cat

$(BIN)/sh-wc: sh-wc.c
	gcc $(CFLAGS) -o $@ $^
$(BIN)/sh-cat: sh-cat.c
	gcc $(CFLAGS) -o $@ $^

install:
	cp $(BIN)/* /home/jiemw/bin/

clean:
	rm -f $(BIN)/*
