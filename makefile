CC = g++
RES = windres
FLAGS = -Wall -std=c++23 -Ofast -fexec-charset=GBK -static
TARGET = anti-red-spider
STOPPER = stopper
TEST = test
TARG = targ
$(TARGET): main.cpp
	$(RES) icons.rc icon.o
	$(CC) $(FLAGS) main.cpp icon.o -o $(TARGET)
	$(CC) $(FLAGS) stopper.cpp icon.o -o $(STOPPER)
#	$(CC) $(FLAGS) test.cpp icon.o -o $(TEST)
#	$(CC) $(FLAGS) targ.cpp icon.o -o $(TARG)

clean:
	$(RM) anti-red-spider
	$(RM) stopper
	$(RM) icon.o
#	$(RM) test
#	$(RM) targ
