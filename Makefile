DIR_BIN = ./bin
DIR_BUILD = ./build
DIR_SRC = ./src
DIR_TEST = ./build/test
DIR_T = ./test

.PHONY: clean all test run

all: $(DIR_BIN)/main $(DIR_BIN)/testing test

$(DIR_BIN)/main: $(DIR_BUILD)/main.o $(DIR_BUILD)/move.o $(DIR_BUILD)/print.o
	g++ -Wall -o $(DIR_BIN)/main $(DIR_BUILD)/main.o $(DIR_BUILD)/move.o $(DIR_BUILD)/print.o
$(DIR_BUILD)/main.o: $(DIR_SRC)/main.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/main.o -c $(DIR_SRC)/main.cpp 
$(DIR_BUILD)/move.o: $(DIR_SRC)/move.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/move.o -c $(DIR_SRC)/move.cpp    
$(DIR_BUILD)/print.o: $(DIR_SRC)/print.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/print.o -c $(DIR_SRC)/print.cpp


$(DIR_BIN)/testing: $(DIR_TEST)/main.o $(DIR_TEST)/chess1.o $(DIR_BUILD)/move.o
	g++ -o $(DIR_BIN)/testing $(DIR_TEST)/main.o $(DIR_BUILD)/move.o $(DIR_TEST)/chess1.o
$(DIR_TEST)/main.o: $(DIR_T)/main.cpp
	g++ -o $(DIR_TEST)/main.o -c $(DIR_T)/main.cpp 
$(DIR_TEST)/chess1.o: $(DIR_T)/chess1.cpp
	g++ -o $(DIR_TEST)/chess1.o -c $(DIR_T)/chess1.cpp    
$(DIR_BUILD)/chess1.o: $(DIR_SRC)/chess1.cpp
	g++ -o $(DIR_BUILD)/chess1.o -c $(DIR_SRC)/chess1.cpp

run: all
	$(DIR_BIN)/main
test:
	$(DIR_BIN)/testing 1> /dev/null

clean:
	rm -f $(DIR_BIN)/main
	rm -f $(DIR_BIN)/testing
	rm -f $(DIR_BUILD)/*.o
	rm -f $(DIR_TEST)/*.o
format:
	clang-format -i $(DIR_SRC)/*.h
	clang-format -i $(DIR_SRC)/*.cpp    
	clang-format -i $(DIR_T)/*.cpp    
	clang-format -i thirdparty/*.h
