mkdir Reliase 2> /dev/null
g++ -c main.cpp -I /SFML/include
g++ main.o -o Reliase/sfml-app -L /SFML/lib -lsfml-graphics -lsfml-window -lsfml-system
g++ compiler/compiler_data.cpp -o compiler/compiler
rm main.o
./compiler/compiler
./Reliase/sfml-app