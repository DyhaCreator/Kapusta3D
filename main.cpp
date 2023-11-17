// this is example of your program
#include <iostream>
#include "Kapusta3D/engine.hpp"
using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    Engine eng = Engine();
    while (eng.graph.isOpen) {
        eng.update();
    }
    return 0;
}