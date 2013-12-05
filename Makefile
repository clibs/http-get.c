
CC ?= cc
SRC = $(wildcard src/*.c)
TESTS = $(patsubst %.c,%,$(wildcard test/*.c))
CFLAGS = -std=c99 -Wall -Isrc
LDFLAGS = -lcurl

clean:
	$(foreach e,$(TESTS:%.c=%),rm -f ./$(basename $(e));)

$(TESTS): $(SRC)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(?) $(@).c -o $(@) $(LDFLAGS)

test: clean $(TESTS)
	$(foreach e,$(TESTS:%.c=%),./$(basename $(e));)

.PHONY: test $(TEST) clean
