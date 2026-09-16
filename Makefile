all:
	g++ ./*.cpp -o main
run: all
	./main
clear: 
	rm main
