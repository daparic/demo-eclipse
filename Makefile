CC=g++
INCLUDE_FLAGS=-Iinclude
DEBUG_FLAGS=
CFLAGS=-g
OBJ_DIR=obj

OBJ = $(OBJ_DIR)/ATM.o \
	  $(OBJ_DIR)/Bank.o \
	  $(OBJ_DIR)/BaseDisplay.o \
	  $(OBJ_DIR)/Account.o

.PHONY = clean all
	
all : $(OBJ_DIR) $(OBJ) main

$(OBJ_DIR) :
	mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o : %.cxx
	$(CC) $(CFLAGS) $(INCLUDE_FLAGS) -o $@ -c $^ 

main: main.cpp
	$(CC) $(CFLAGS) $(INCLUDE_FLAGS) -o $@ $^ 

clean:
	rm -rf $(OBJ_DIR)
