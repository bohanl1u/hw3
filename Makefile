all: test_treemap

test_treemap: test_treemap.o
	g++ -Wall -Werror -std=c++11 -o test_treemap test_treemap.o -pthread -lgtest

test_treemap.o: test_treemap.cc treemap.h
	g++ -Wall -Werror -std=c++11 -c test_treemap.cc

clean:
	rm -f test_treemap test_treemap.o