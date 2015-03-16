TARGET = MenuCooking.exe

CC=bcc32

SRC= \
    MenuCooking.cpp\
	Menu.cpp

OBJ=$(SRC:.cpp=.obj)

$(TARGET) : $(OBJ)
	$(CC) $(OBJ)

clean : $(OBJ)
	del $(OBJ) *.tds $(TARGET)
