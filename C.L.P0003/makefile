output:	main.o interface.o slot-machine.o player.o
	g++ main.o interface.o slot-machine.o player.o -o ex

main.o: main.cpp
	g++ -c main.cpp

interface.o: interface.cpp interface.h
	g++ -c interface.cpp

slot-machine.o: slot-machine.cpp slot-machine.h
	g++ -c slot-machine.cpp

player.o: player.cpp player.h
	g++ -c player.cpp

clear: main.o interface.o slot-machine.o player.o
	rm main.o
	rm interface.o
	rm slot-machine.o
	rm player.o