#pragma once
//includes
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "errors.hpp"

//settings
#include "data.hpp"
data d = data();
std::string name = d.Name;
int Width = d.Width;
int Height = d.Height;
int FrameRate = d.FrameRate;

//engine modules
#include "structs/color.hpp"
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
    void update() {
        graph.update();
        graph.background(color(50, 50, 50));
        graph.display();
    }
};