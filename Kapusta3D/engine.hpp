#pragma once
//includes
#include <iostream>
//engine modules
#include "structs/int2.hpp"
#include "graph.hpp"
#include "gameObj.hpp"

const int _2D = 0;
const int _3D = 1; 

class Engine {
public:
    Graph graph = Graph();
    Engine() {}
};