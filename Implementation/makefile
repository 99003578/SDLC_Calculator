# Name of the project
PROJECT_NAME = SDLC_Calculator

# Output directory
BUILD = build

# All source code files
SRC = main.c\
src/average.c\
src/basic_operations.c\
src/bin_to_dec.c\
src/dec_to_bin.c\
src/exponential.c\
src/factorial.c\
src/interest.c\
src/logarthmic.c\
src/power.c\
src/trignometry.c\

# All test source files
TEST_SRC = src/average.c\
src/basic_operations.c\
src/bin_to_dec.c\
src/dec_to_bin.c\
src/exponential.c\
src/factorial.c\
src/interest.c\
src/logarthmic.c\
src/power.c\
src/trignometry.c\
Test/test_calculator.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Inlcudes
#INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out