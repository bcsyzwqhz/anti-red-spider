CC = g++
CCFLAGS := -Wall -std=c++20
TARGET = anti-red-spider

$(TARGET): main.cpp
	$(CC) -Wall -std=c++20 main.cpp -o $(TARGET)

clean:
	$(RM) anti-red-spider
