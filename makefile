CC = g++
FLAGS = -Wall -std=c++20
TARGET = anti-red-spider
STOPPER = stopper
$(TARGET): main.cpp
	$(CC) $(FLAGS) main.cpp -o $(TARGET)
	$(CC) $(FLAGS) stopper.cpp -o $(STOPPER)

clean:
	$(RM) anti-red-spider
	$(RM) stopper
