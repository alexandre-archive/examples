# CPP compiler
CC=g++
FLAGS=-std=c++11 -Wall -Wextra -Werror

all: join

join:
	$(CC) $(FLAGS) string_join.cpp -o join

clean:
	rm -rf *o *out join