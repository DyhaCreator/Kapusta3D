// this is example of your program
#include <iostream>
#include "Kapusta3D/engine.hpp"
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    Engine eng = Engine();
    Text number = Text();
    std::vector<Image>images = {};
    Image img = Image();
    img.loadImage("assets/512.png");
    int n = 0;
    while (eng.isStarted) {
        eng.update();
        for (int y = 0; y < 600; y++) {
            for (int x = 0; x < 920; x++) {
                if (x + y > n) break;
                graph.screen.push_back(point(int2(x, y), color(255, 0, 0)));
            }
            if (y > n) break;
        }
        n++;
        /*number.setLabel(to_string(n++));
        images.push_back(img);
        img.setPosition(rand() / 3000000, rand() / 4000000);
        img.show();
        for (auto x : images)
            x.show();
        number.show();*/
        graph.display();
    }
    return 0;
}