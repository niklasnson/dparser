
all: dparser

dparser: src/main.cpp src/buffer.cpp src/fileio.cpp
		g++ -std=c++1z -o dparser src/main.cpp src/buffer.cpp src/fileio.cpp 

clean: 
		rm -f dparser