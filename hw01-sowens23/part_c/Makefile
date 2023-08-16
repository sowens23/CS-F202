run: part_c
	./part_c

part_c: part_c.o Box.o Box.h HollowBox.o HollowBox.h
	g++ -std=c++17 -o part_c part_c.o Box.o HollowBox.o

part_c.o: part_c.cpp Box.h HollowBox.h
	g++ -std=c++17 -c part_c.cpp

Box.o: Box.cpp Box.h
	g++ -std=c++17 -c Box.cpp

HollowBox.o: HollowBox.cpp HollowBox.h
	g++ -std=c++17 -c HollowBox.cpp

clean:
	rm -f *.o

cleanest: clean
	rm part_c
	
.PHONY: clean cleanest run
