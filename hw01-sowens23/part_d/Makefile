run: part_d
	./part_d

part_d: part_d.o FilledBox.o FilledBox.h 
	g++ -std=c++17 -o part_d part_d.o FilledBox.o

part_d.o: part_d.cpp FilledBox.h
	g++ -std=c++17 -c part_d.cpp

FilledBox.o: FilledBox.cpp FilledBox.h
	g++ -std=c++17 -c FilledBox.cpp

clean:
	rm -f *.o

cleanest: clean
	rm part_d
	
.PHONY: clean cleanest run
