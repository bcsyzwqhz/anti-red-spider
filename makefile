CC = g++
RES = windres
FLAGS = -Wall -std=c++20 -fexec-charset=GBK -static
TARGET = anti-red-spider
STOPPER = stopper
$(TARGET): main.cpp
	$(RES) icons.rc icon.o
	$(CC) $(FLAGS) main.cpp icon.o -o $(TARGET)
	$(CC) $(FLAGS) stopper.cpp icon.o -o $(STOPPER)

clean:
	$(RM) anti-red-spider
	$(RM) stopper
	$(RM) icon.o
