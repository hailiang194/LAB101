output: main.o get-list-word.o game.o game-process.o scence.o
	g++ main.o get-list-word.o game.o game-process.o scence.o -o ex

main.o: main.cpp
	g++ -c main.cpp

get-list-word.o: get-list-word.h get-list-word.cpp
	g++ -c get-list-word.cpp

game.o: game.h game.cpp
	g++ -c game.cpp

game-process.o: game-process.h game-process.cpp
	g++ -c game-process.cpp

scence.o: scence.h scence.cpp
	g++ -c scence.cpp

clean: main.o get-list-word.o game.o game-process.o scence.o
	rm main.o get-list-word.o game.o game-process.o scence.o