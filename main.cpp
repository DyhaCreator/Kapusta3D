// this is example of your program
#include <iostream>
#include "Kapusta3D/engine.hpp"
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    Engine eng = Engine();
    Text number = Text();
    std::vector<Image>images = {};
    while (eng.isStarted) {
        number.setLabel(to_string(images.size()));
        Image img = Image();
        img.loadImage("assets/64.png");
        img.setPosition(rand() / 3000000, rand() / 4000000);
        images.push_back(img);
        eng.update();
        for (auto x : images)
            x.show();
        number.show();
        graph.display();
    }
    return 0;
}