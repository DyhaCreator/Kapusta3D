// this is example of your program
#include <iostream>
#include "Kapusta3D/engine.hpp"
using namespace std;

void b1IsClicked() {
    std::cout << "b1" << std::endl;
}

int main() {
    cout << "Hello, World!" << endl;
    Engine eng = Engine();

    Button b1 = Button(&b1IsClicked, int2(20, 20), int2(200, 100));
    while (eng.isStarted) {
        eng.update();
        b1.show();
        graph.display();
    }
    return 0;
}