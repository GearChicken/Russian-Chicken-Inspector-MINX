INCDIR = -I/usr/include/freetype2 -I/usr/include/MINX
CPPFLAGS += -g -Wall -W $(INCDIR) -std=c++11
LFLAGS = -lMINX -lGL -lfreetype -lglfw -lX11 -lXxf86vm -lpthread -lXrandr -lXi -lsfml-audio
CXX = g++
SOURCES = $(wildcard ./src/*.cpp)
OBJECTS = $(patsubst ./src/%.cpp,./src/%.o,$(wildcard ./src/*.cpp))
TARGET = TestMINXProject

all: $(OBJECTS)
	test -d "./bin/" || mkdir -p "./bin/"
	$(CXX) $(CPPFLAGS) $(OBJECTS) $(LFLAGS) -o ./bin/$(TARGET)
clean:
    rm -rf ./src/*.o