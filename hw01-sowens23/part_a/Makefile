run: part_a
	./part_a

part_a: part_a.o Box.o Box.h FilledBox.o FilledBox.h HollowBox.o HollowBox.h FancyBox.o FancyBox.h
	g++ -std=c++17 -o part_a part_a.o Box.o FilledBox.o HollowBox.o FancyBox.o

part_a.o: part_a.cpp Box.h FilledBox.h HollowBox.h FancyBox.h
	g++ -std=c++17 -c part_a.cpp

Box.o: Box.cpp Box.h
	g++ -std=c++17 -c Box.cpp

FilledBox.o: FilledBox.cpp FilledBox.h
	g++ -std=c++17 -c FilledBox.cpp

HollowBox.o: HollowBox.cpp HollowBox.h
	g++ -std=c++17 -c HollowBox.cpp

FancyBox.o: FancyBox.cpp FancyBox.h
	g++ -std=c++17 -c FancyBox.cpp

clean:
	rm -f *.o

cleanest: clean
	rm part_a
	
.PHONY: clean cleanest run
