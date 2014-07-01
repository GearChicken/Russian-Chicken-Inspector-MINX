INCDIR = -I/usr/include/freetype2 -I/usr/include/MINX
CPPFLAGS += -g -Wall -W $(INCDIR) -std=c++11
LFLAGS = -lMINX -lGL -lfreetype -lglfw -lX11 -lXxf86vm -lpthread -lXrandr -lXi
CXX = g++
SOURCES = $(wildcard ./src/*.cpp) $(wildcard ./src/Creatures/*.cpp) $(wildcard ./src/Graphics/*.cpp) $(wildcard ./src/Levels/*.cpp) $(wildcard ./src/MenuSystem/*.cpp) $(wildcard ./src/Physics/*.cpp)
OBJECTS = $(patsubst ./src/%.cpp,./src/%.o,$(wildcard ./src/*.cpp)) $(patsubst ./src/Creatures/%.cpp,./src/Creatures/%.o,$(wildcard ./src/Creatures/*.cpp)) $(patsubst ./src/Graphics/%.cpp,./src/Graphics/%.o,$(wildcard ./src/Graphics/*.cpp)) $(patsubst ./src/Levels/%.cpp,./src/Levels/%.o,$(wildcard ./src/Levels/*.cpp)) $(patsubst ./src/MenuSystem/%.cpp,./src/MenuSystem/%.o,$(wildcard ./src/MenuSystem/*.cpp)) $(patsubst ./src/Physics/%.cpp,./src/Physics/%.o,$(wildcard ./src/Physics/*.cpp))
TARGET = russian-chicken-inspector

all: $(OBJECTS)
	test -d "./bin/" || mkdir -p "./bin/"
	$(CXX) $(CPPFLAGS) $(OBJECTS) $(LFLAGS) -o ./bin/$(TARGET)

clean:
	rm src/*.o || true
	rm src/Creatures/*.o || true
	rm src/Graphics/*.o || true
	rm src/Levels/*.o || true
	rm src/MenuSystem/*.o || true
	rm src/Physics/*.o || true
