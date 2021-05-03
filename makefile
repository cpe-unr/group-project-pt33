audioprocessor: main.cpp Wav.o Limiter.o Echo.o NoiseGate.o
	g++ -std=c++11 main.cpp Limiter.o Echo.o NoiseGate.o Wav.o -o audioprocessor

Wav.o: Wav.cpp Wav.h
	g++ -c -std=c++11 Wav.cpp
	
Limiter.o: Limiter.cpp Limiter.h
	g++ -c -std=c++11 Limiter.cpp
	
Echo.o: Echo.cpp Echo.h
	g++ -c -std=c++11 Echo.cpp
	
NoiseGate.o: NoiseGate.cpp NoiseGate.h
	g++ -c -std=c++11 NoiseGate.cpp
	
test: main.cpp User.o
	g++ -std=c++11 -o test main.cpp User.o
	
User.o: User.h User.cpp
	g++ -c -std=c++11 User.cpp

clean:
	rm *.o audioprocessor
