echo "compile data..."
g++ compiler/compiler_data.cpp -o compiler/compiler
./compiler/compiler
echo "create App..."
mkdir Release 2> /dev/null
g++ -c main.cpp -I /SFML/include
g++ main.o -o Release/App -L /SFML/lib -lsfml-graphics -lsfml-window -lsfml-system
echo "create data compiler..."
rm main.o
echo "start>"
cd Release
./App