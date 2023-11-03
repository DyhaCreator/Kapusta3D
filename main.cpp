// this is example of your program
#include <iostream>
#include "graph.h"
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    Graph gr = Graph();
    while(gr.isOpen){
        //gr.update();
        gr.render();
    }
    return 0;
}
