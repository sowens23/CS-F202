run: game
	./game

game: game.o data.o data.h
	g++ -std=c++17 -o game game.o data.o

game.o: game.cpp data.h
	g++ -std=c++17 -c game.cpp

data.o: data.cpp data.h
	g++ -std=c++17 -c data.cpp

clean:
	rm -f *.o

cleanest: clean
	rm game 

.PHONY: clean cleanest run
