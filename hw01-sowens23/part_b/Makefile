run: part_b
	./part_b

part_b: part_b.o Box.o Box.h FilledBox.o FilledBox.h HollowBox.o HollowBox.h
	g++ -std=c++17 -o part_b part_b.o Box.o FilledBox.o HollowBox.o

part_b.o: part_b.cpp Box.h FilledBox.h HollowBox.h
	g++ -std=c++17 -c part_b.cpp

Box.o: Box.cpp Box.h
	g++ -std=c++17 -c Box.cpp

FilledBox.o: FilledBox.cpp FilledBox.h
	g++ -std=c++17 -c FilledBox.cpp

HollowBox.o: HollowBox.cpp HollowBox.h
	g++ -std=c++17 -c HollowBox.cpp

clean:
	rm -f *.o

cleanest: clean
	rm part_b
	
.PHONY: clean cleanest run
