CXX=g++
INCLUDE_FLAGS=-Iinclude
DEBUG_FLAGS=
CXXFLAGS=-g -D_FORTIFY_SOURCE=2 -O2 -std=c++17 -Wall
OBJ_DIR=obj

# Check if the compiler supports C++17
CXX17_SUPPORTED := $(shell $(CXX) -std=c++17 -dM -E - < /dev/null 2>/dev/null 1>&2 && echo 1 || echo 0)

ifeq ($(CXX17_SUPPORTED),1)
    CXXFLAGS += -DSUPPORTS_CPP17
endif

OBJ = $(OBJ_DIR)/ATM.o \
	  $(OBJ_DIR)/Bank.o \
	  $(OBJ_DIR)/BaseDisplay.o \
	  $(OBJ_DIR)/decide.o \
	  $(OBJ_DIR)/dbutil.o \
	  $(OBJ_DIR)/BD-PB-NORETURN.o \
	  $(OBJ_DIR)/CODSTA-MCPP-01-3.o \
	  $(OBJ_DIR)/CODSTA-MCPP-11_a_cpp11-4.o \
	  $(OBJ_DIR)/CODSTA-MCPP-17_c-3.o \
	  $(OBJ_DIR)/CODSTA-MCPP-103.o \
	  $(OBJ_DIR)/CODSTA-MCPP-31.o \
	  $(OBJ_DIR)/CODSTA-MCPP-50.o \
	  $(OBJ_DIR)/CODSTA-MCPP-04.o \
	  $(OBJ_DIR)/CODSTA-MCPP-42.o \
	  $(OBJ_DIR)/CODSTA-MCPP-48.o \
	  $(OBJ_DIR)/CODSTA-MCPP-57.o \
	  $(OBJ_DIR)/CODSTA-MCPP-45.o \
	  $(OBJ_DIR)/Account.o

.PHONY = clean all
	
all : $(OBJ_DIR) $(OBJ) main

$(OBJ_DIR) :
	mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o : %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE_FLAGS) -o $@ -c $^ 
	echo "[$@ - $^]"

$(OBJ_DIR)/%.o: misc/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE_FLAGS) -o $@ -c $^ 

$(OBJ_DIR)/%.o: misc/aaa/%.cpp
	$(CXX) -std=c++17 $(CXXFLAGS) $(INCLUDE_FLAGS) -o $@ -c $^ 

$(OBJ_DIR)/%.o: misc/bbb/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE_FLAGS) -o $@ -c $^ 

$(OBJ_DIR)/%.o: misc/bbb/ccc/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE_FLAGS) -o $@ -c $^ 

main: main.cpp $(OBJ)
	$(CXX) $(CXXFLAGS) $(INCLUDE_FLAGS) -o $@ $^ 

clean:
	rm -rf $(OBJ_DIR) main *.o

show:
	@echo "CC is $(CC)"
	@echo "CXX is $(CXX)"
	@echo CXX17_SUPPORTED=$(CXX17_SUPPORTED)
