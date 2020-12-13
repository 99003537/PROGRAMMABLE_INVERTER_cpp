all: run doc test clean 
#all provides sequence of command
SRC = main.cpp test/test_invertercpp.cpp src/delay.cpp  src/error_cal.cpp  src/sequence.cpp  src/set_iload.cpp  src/dutycycle.cpp unity/unity.c class/myclass.cpp

#TEST_SRC=main.c test/test_invertercpp.c src/delay.c  src/error_cal.c  src/sequence.c  src/set_iload.c  src/Dutycycle.c unity/unity.c unity/unity.h unity/unity_internals


BUILD=build

TEST_OUTPUT=$(BUILD)/Test_$(PROJECT_NAME).exe

$(BUILD):
	mkdir build

INC = -Iunity -Iheader -Iclass


PROJECT_NAME= INVERTER.exe


TEST_OUTPUT= $(BUILD)/Test_$(PROJECT_NAME).exe



$(PROJECT_NAME): $(SRC)
	g++ $(SRC) $(INC) -o $(PROJECT_NAME)


run: $(PROJECT_NAME)
	$(PROJECT_NAME)


doc: 
	make -C documentation


test: $(BUILD)
	g++ $(SRC) $(INC) -o $(TEST_OUTPUT) 

	./$(TEST_OUTPUT)
	
	
clean:
	rm -rf $(PROJECT_NAME) documentation/html
