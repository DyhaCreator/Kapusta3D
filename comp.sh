mkdir Release 2> /dev/null
g++ -c main.cpp -I /SFML/include
g++ main.o -o Release/App -L /SFML/lib -lsfml-graphics -lsfml-window -lsfml-system
g++ compiler/compiler_data.cpp -o compiler/compiler
rm main.o
./compiler/compiler
./Release/App