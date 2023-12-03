// this is example of your program
#include <iostream>
#include "Kapusta3D/engine.hpp"
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    Engine eng = Engine();
    while (eng.isStarted) {
        eng.update();
        graph.drawPixel(int2(0, 0), color(255, 0, 0));
        graph.display();
    }
    return 0;
}