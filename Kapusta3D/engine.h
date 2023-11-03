#pragma once
#include <iostream>
#include "graph.h"

class Engine {
public:
    Graph gr = Graph();
    int GameCycle(){
        while(gr.isOpen){
            //gr.update();
            gr.render();
        }
        return 0;
    }
};