.SUFFIXES: .cpp .c .o

C=g++
CFLAGS=-g
LDFLAGS=-L/usr/lib -lSDL2

OBJ_DIR=obj
SRC_DIR=src
ENG_DIR=$(SRC_DIR)/engine
SCREEN_DIR=$(SRC_DIR)/screens
GO_DIR=$(SRC_DIR)/game_objects

ENG_FILES := $(wildcard $(ENG_DIR)/*.cpp)
SCREEN_FILES := $(wildcard $(SCREEN_DIR)/*.cpp)
GO_FILES := $(wildcard $(GO_DIR)/*.cpp)

MAIN_OBJ=$(OBJ_DIR)/main.o
ENG_OBJS=$(patsubst $(ENG_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(ENG_FILES))
SCREEN_OBJS := $(patsubst $(SCREEN_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SCREEN_FILES))
GO_OBJS := $(patsubst $(GO_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(GO_FILES))
OBJS=$(MAIN_OBJ) $(ENG_OBJS) $(SCREEN_OBJS) $(GO_OBJS)
OUT=main

all: main_game

clean:
	rm -rf obj/*.o $(OUT)

main_game: $(OBJS)
	$(C) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(OUT) $(CFLAGS) $(LDFLAGS)

$(OBJ_DIR):
	mkdir -p $@

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(C) $(CFLAGS) -c -o $@ $<

######################
# Engine Rule
######################

$(OBJ_DIR)/%.o: $(ENG_DIR)/%.cpp 
	$(C) $(CFLAGS) -c -o $@ $<

######################
# Screen Objects Rule
######################

$(OBJ_DIR)/%.o: $(SCREEN_DIR)/%.cpp
	$(C) $(CFLAGS) -c -o $@ $<

######################
# Game Objects Rule
######################

$(OBJ_DIR)/%.o: $(GO_DIR)/%.cpp
	$(C) $(CFLAGS) -c -o $@ $<
