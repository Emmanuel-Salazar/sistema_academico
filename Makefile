all:
	g++ ./*.cpp ./*.h -o main
run: all
	./main
clear: 
	rm main
