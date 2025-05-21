CXX = g++
CXXFLAGS = -std=c++17 -Wall -O2 -fPIC
LDFLAGS = -lssl -lcrypto

SRCS = Block.cpp Blockchain.cpp User.cpp utils.cpp interface.cpp
OBJS = $(SRCS:.cpp=.o)

TARGET = libsocialchain.so

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -shared -o $(TARGET) $(OBJS) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

