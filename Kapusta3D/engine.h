#pragma once
#include <iostream>
#include "graph.h"

const int _2D = 0;
const int _3D = 1; 

class Engine {
public:
    Graph graph = Graph();
    Engine() {}
    Engine(int mode) {
        graph = Graph(mode);
    }
};