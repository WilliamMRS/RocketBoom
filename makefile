main.o: main.cpp
	g++ -c main.cpp
	g++ main.o -o RocketBoom -lsfml-graphics -lsfml-window -lsfml-system
	g++ main.o -o RocketBoom -L./sfml/lib -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm main.o
	rm RocketBoom
