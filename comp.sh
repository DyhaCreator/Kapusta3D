echo "create data compiler..."
g++ -c compiler/compiler_data.cpp -I /SFML/include
g++ compiler_data.o -o compiler/compiler -L /SFML/lib -lsfml-graphics -lsfml-window -lsfml-system
rm compiler_data.o
echo "compile data..."
./compiler/compiler
echo "create App..."
mkdir Release 2> /dev/null
g++ -c main.cpp -I /SFML/include
g++ main.o -o Release/App -L /SFML/lib -lsfml-graphics -lsfml-window -lsfml-system
rm main.o
#rm ./Kapusta3D/data.hpp
echo "Export fonts..."
cp -r ./Kapusta3D/fonts ./Release
echo "start>"
cd Release
./App