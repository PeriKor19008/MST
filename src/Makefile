MST: main.o graph_matrix.o
	g++ -o MST main.o graph_matrix.o

main.o : main.cpp
	g++ -c main.cpp

graph_matrix.o : graph_matrix.cpp
	g++ -c graph_matrix.cpp

run:
	./MST

clean:
	rm -f graph_matrix.o && rm -f main.o && rm -f MST