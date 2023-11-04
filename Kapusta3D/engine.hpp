#pragma once
//includes
#include <iostream>
#include <vector>
//engine modules
#include "structs/int2.hpp"
#include "structs/int3.hpp"
#include "structs/float2.hpp"
#include "structs/float3.hpp"
#include "structs/edge.hpp"
#include "structs/triangle.hpp"
#include "structs/model.hpp"
#include "graph.hpp"
#include "gameObj.hpp"

const int _2D = 0;
const int _3D = 1;

class Engine {
public:
    Graph graph = Graph();
    Engine() {}
};