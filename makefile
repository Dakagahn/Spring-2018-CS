all: lab7 
lab7:	main.cpp Electronics.cpp
	g++ main.cpp Electronics.cpp -std=c++11 -o lab7
