output: main.o file-process.o form.o
	g++ main.o file-process.o form.o -o ex

main.o: main.cpp
	g++ -c main.cpp

file-process.o: file-process.cpp file-process.h
	g++ -c file-process.cpp

form.o: form.cpp form.h
	g++ -c form.cpp

clear: main.o file-process.o form.o
	rm main.o file-process.o form.o