// this is example of your program
#include <iostream>
#include "Kapusta3D/engine.hpp"
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    Engine eng = Engine();

    Button b1 = Button(int2(20, 20), int2(200, 100));
    while (eng.isStarted) {
        eng.update();
        b1.show();
        graph.display();
    }
    return 0;
}