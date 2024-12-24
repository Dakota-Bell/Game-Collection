#Dakota Bell, 12/21/2024

PROG=app
PORT=8090
SRCS=main.cpp games.h games.cpp gameCollection.cpp

OBJS=${SRCS:S/cpp$/o/g}

CXXFLAGS=-Wall -std=c++17
CXXFLAGS+=-I/usr/local/include -I${.CURDIR}/model -I${.CURDIR}/view
LDFLAGS=-L/usr/local/lib
LDFLAGS+=-lwthttp -lwt

.PHONY: all clean start stop

all: ${PROG}

${PROG}: ${OBJS}
	${CXX} ${CXXFLAGS} -o $@ ${OBJS} ${LDFLAGS}

# model
games.o: model/games.cpp model/games.h
gameCollection.o: model/gameCollection.h model/gameCollection.cpp

# views


# utilities
clean:
	@rm -f ${PROG} ${OBJS} *.core

start: ${PROG}
	./${PROG} --docroot ../ --http-address 0.0.0.0 --http-port ${PORT} &

stop:
	@pkill ${PROG}