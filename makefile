OUTPUT = main
COMPILER = g++

MAIN = ./main.cpp

UNKNOWNRORI_SRC = ./src/unknownrori.cpp
SORTING_SRC = ./src/sorting/bubble.cpp ./src/sorting/insertion.cpp

UNKNOWNRORI_LIBS = ./unknownrori.o
SORTING_LIBS = ./sorting.o

all: run

run: MAIN
	./main

UNKNOWNRORI_LIBS:
	$(COMPILER) $(UNKNOWNRORI_SRC) -shared -o $(UNKNOWNRORI_LIBS)

SORTING_LIBS: UNKNOWNRORI_LIBS
	$(COMPILER) $(SORTING_SRC) $(UNKNOWNRORI_LIBS) -shared -o $(SORTING_LIBS)

MAIN: SORTING_LIBS UNKNOWNRORI_LIBS
	$(COMPILER) $(MAIN) $(SORTING_LIBS) $(UNKNOWNRORI_LIBS) -o $(OUTPUT)
