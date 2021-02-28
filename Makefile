LIB = -L./sfml_win/lib -lsfml-graphics -lsfml-window -lsfml-system
INC = -I./sfml/include
PATH = C:\Users\William\Documents\GitHub\RocketBoom

main.o: main.cpp
	g++ -Wall $(LIB) ${INC} -c main.cpp vector3.cpp
	g++ -Wall $(LIB) ${INC} main.o -o RocketBoom


#g++ -Wall -L./sfml_win/lib -lsfml-graphics -lsfml-window -lsfml-system -I./sfml/include -c main.cpp vector3.cpp
#g++ -Wall -L./sfml_win/lib -lsfml-graphics -lsfml-window -lsfml-system -I./sfml/include main.o vector3.o -o RocketBoom

clean:
	rm main.o
	#rm RocketBoom
	rm vector3.o