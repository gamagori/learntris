boardFuncs.o: boardFuncs.h boardFuncs.cpp
	g++ -c boardFuncs.cpp
learntris: learntris.cpp learntris.h boardFuncs.o
	g++ -c learntris.cpp
	g++ -o learntris learntris.o boardFuncs.o