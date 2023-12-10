CC = g++
FLAGS = -Wall -std=c++20 -Ofast -fexec-charset=GBK -l pthread
TARGET = anti-red-spider
STOPPER = stopper
$(TARGET): main.cpp
	$(CC) $(FLAGS) main.cpp -o $(TARGET)
	$(CC) $(FLAGS) stopper.cpp -o $(STOPPER)

clean:
	$(RM) anti-red-spider
	$(RM) stopper
