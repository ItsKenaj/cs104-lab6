CXX = g++
CXXFLAGS = -Wall

OBJS = main.o mathfuncs.o randfuncs.o
TARGET = calculator

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
