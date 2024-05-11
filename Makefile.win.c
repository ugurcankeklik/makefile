# Project: 8_puzzle
# Makefile created by Dev-C++ 5.11

CPP      = g++.exe
CC       = gcc.exe
WINDRES  = windres.exe
OBJ      = GRAPH_SEARCH_MAP/GRAPH_SEARCH.o GRAPH_SEARCH_MAP/HashTable.o GRAPH_SEARCH_MAP/SpecificToProblem.o GRAPH_SEARCH_MAP/Standart_Search.o
LINKOBJ  = GRAPH_SEARCH_MAP/GRAPH_SEARCH.o GRAPH_SEARCH_MAP/HashTable.o GRAPH_SEARCH_MAP/SpecificToProblem.o GRAPH_SEARCH_MAP/Standart_Search.o
LIBS     = -L"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib" -L"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc
INCS     = -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include"
CXXINCS  = -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include/c++"
BIN      = 8_puzzle.exe
CXXFLAGS = $(CXXINCS) 
CFLAGS   = $(INCS) 
RM       = rm.exe -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CC) $(LINKOBJ) -o $(BIN) $(LIBS)

GRAPH_SEARCH_MAP/GRAPH_SEARCH.o: GRAPH_SEARCH_MAP/GRAPH_SEARCH.c
	$(CC) -c GRAPH_SEARCH_MAP/GRAPH_SEARCH.c -o GRAPH_SEARCH_MAP/GRAPH_SEARCH.o $(CFLAGS)

GRAPH_SEARCH_MAP/HashTable.o: GRAPH_SEARCH_MAP/HashTable.c
	$(CC) -c GRAPH_SEARCH_MAP/HashTable.c -o GRAPH_SEARCH_MAP/HashTable.o $(CFLAGS)

GRAPH_SEARCH_MAP/SpecificToProblem.o: GRAPH_SEARCH_MAP/SpecificToProblem.c
	$(CC) -c GRAPH_SEARCH_MAP/SpecificToProblem.c -o GRAPH_SEARCH_MAP/SpecificToProblem.o $(CFLAGS)

GRAPH_SEARCH_MAP/Standart_Search.o: GRAPH_SEARCH_MAP/Standart_Search.c
	$(CC) -c GRAPH_SEARCH_MAP/Standart_Search.c -o GRAPH_SEARCH_MAP/Standart_Search.o $(CFLAGS)
