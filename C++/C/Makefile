# Define the compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Werror

# Linker flags
LDFLAGS = -lm  # Add any additional libraries here

# Default target is to compile a specific C file passed as the FILE parameter
TARGET = $(basename $(FILE))

# Compile the provided FILE
compile:
	$(CC) $(CFLAGS) -o $(TARGET) $(FILE) $(LDFLAGS)

# Run the compiled program
run: compile
	./$(TARGET)

# Clean up the compiled files
clean:
	rm -f $(TARGET)

