CXX=g++
INCLUDE_FLAGS=-Iinclude
DEBUG_FLAGS=
CFLAGS=-g
OBJ_DIR=obj

OBJ = $(OBJ_DIR)/ATM.o \
	  $(OBJ_DIR)/Bank.o \
	  $(OBJ_DIR)/BaseDisplay.o \
	  $(OBJ_DIR)/decide.o \
	  $(OBJ_DIR)/Account.o

.PHONY = clean all
	
all : $(OBJ_DIR) $(OBJ) main

$(OBJ_DIR) :
	mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o : %.cpp
	$(CXX) $(CFLAGS) $(INCLUDE_FLAGS) -o $@ -c $^ 

main: main.cpp $(OBJ)
	$(CXX) $(CFLAGS) $(INCLUDE_FLAGS) -o $@ $^ 

clean:
	rm -rf $(OBJ_DIR) main *.o *.bdf

show:
	@echo "CC is $(CC)"
	@echo "CXX is $(CXX)"
