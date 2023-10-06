CC = gcc
CFLAGS = -Wall
TARGET = hello_world
SOURCE = hello_world.cc

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE)

clean:
	rm -f $(TARGET)

.PHONY: all clean

