#Warnings all for code globally
CXX=g++
CFLAGS=-Wall -g

.PHONY: clean all

all: main games gameCollection

main: main.cpp
	${CXX} ${CFLAGS} -o $@ main.cpp

games: model/games.cpp
	${CXX} ${CFLAGS} -o $@ model/games.h
gameCollection:  model/gameCollection.cpp
	${CXX} ${CFLAGS} -o $@ model/gameCollection.h

clean: 
	@rm -f main *.core *.cpp~
