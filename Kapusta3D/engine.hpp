#pragma once
//includes
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "errors.hpp"

//settings
#include "parse_settings.hpp"
std::string name_of_file_settings = "data.data";
std::string name = Name(name_of_file_settings);
int Width = fidn_width(name_of_file_settings);
int Height = 500;
int FrameRate = 30;

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
    void update() {
        graph.update();
        graph.render();
    }
};