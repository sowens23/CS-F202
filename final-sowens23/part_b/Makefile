Prog = main
Dep1 = Starship

run: $(Prog)
	./$(Prog)

$(Prog): $(Prog).o $(Dep1).o
	g++ -std=c++17 -o $(Prog) $(Prog).o $(Dep1).o

$(Prog).o: $(Prog).cpp $(Dep1).h
	g++ -std=c++17 -c $(Prog).cpp

$(Dep1).o: $(Dep1).cpp $(Dep1).h
	g++ -std=c++17 -c $(Dep1).cpp

clean:
	rm -f *.o

cleanest: clean
	rm $(Prog)
	
.PHONY: clean cleanest run
