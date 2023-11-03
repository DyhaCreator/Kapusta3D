// this is example of your program
#include <iostream>
#include "Kapusta3D/engine.h"
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    Engine eng = Engine();
    while (eng.graph.isOpen) {
        eng.graph.update();
        eng.graph.render();
    }
    return 0;
}
