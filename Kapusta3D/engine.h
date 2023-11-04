#pragma once
//includes
#include <iostream>
//engine modules
#include "graph.h"
#include "gameObj.h"

const int _2D = 0;
const int _3D = 1; 

class Engine {
public:
    Graph graph = Graph();
    Engine() {}
};