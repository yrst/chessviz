DIR_BIN = ./bin
DIR_BUILD = ./build
DIR_SRC = ./src
all: $(DIR_BIN)/main

.PHONY: clean 

$(DIR_BIN)/main: $(DIR_BUILD)/main.o $(DIR_BUILD)/chess.o $(DIR_BUILD)/print.o
	g++ -Wall -o $(DIR_BIN)/main $(DIR_BUILD)/main.o $(DIR_BUILD)/chess.o $(DIR_BUILD)/print.o
$(DIR_BUILD)/main.o: $(DIR_SRC)/main.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/main.o -c $(DIR_SRC)/main.cpp 
$(DIR_BUILD)/chess.o: $(DIR_SRC)/chess.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/chess.o -c $(DIR_SRC)/chess.cpp    
$(DIR_BUILD)/print.o: $(DIR_SRC)/print.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/print.o -c $(DIR_SRC)/print.cpp
test:
	$(DIR_BIN)/main

clean:
	rm $(DIR_BIN)/main

format:
	clang-format -i $(DIR_SRC)/*.h
	clang-format -i $(DIR_SRC)/*.cpp
