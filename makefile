audioprocessor: main.cpp mono8.o mono16.o stereo8.o stereo16.o Limiter.o Echo.o NoiseGate.o analyzeWav.o User.o
	g++ -std=c++11 main.cpp mono8.o mono16.o stereo8.o stereo16.o Limiter.o Echo.o NoiseGate.o analyzeWav.o User.o -o audioprocessor
	
mono8.o: mono8.cpp mono8.h waveHeader.h
	g++ -c -std=c++11 mono8.cpp
	
mono16.o: mono16.cpp mono16.h waveHeader.h
	g++ -c -std=c++11 mono16.cpp
	
stereo8.o: stereo8.cpp stereo8.h waveHeader.h
	g++ -c -std=c++11 stereo8.cpp
	
stereo16.o: stereo16.cpp stereo16.h waveHeader.h
	g++ -c -std=c++11 stereo16.cpp
	
Limiter.o: Limiter.cpp Limiter.h
	g++ -c -std=c++11 Limiter.cpp
	
Echo.o: Echo.cpp Echo.h
	g++ -c -std=c++11 Echo.cpp
	
NoiseGate.o: NoiseGate.cpp NoiseGate.h
	g++ -c -std=c++11 NoiseGate.cpp
	
analyzeWav.o: analyzeWav.cpp analyzeWav.h waveHeader.h
	g++ -c -std=c++11 analyzeWav.cpp
	
test: main.cpp User.o
	g++ -std=c++11 -o test main.cpp User.o
	
User.o: User.cpp User.h
	g++ -c -std=c++11 User.cpp

clean:
	rm *.o audioprocessor test
