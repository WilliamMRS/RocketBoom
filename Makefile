main.o: main.cpp
	g++ -c main.cpp
	g++ main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system
	g++ main.o -o sfml-app -L./sfml/lib -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm main.o
	rm sfml-app
