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
#include "structs/color.hpp"
color fillColor = color(255, 255, 255);

//engine modules
#include "structs/int2.hpp"
#include "structs/int3.hpp"
#include "structs/float2.hpp"
#include "structs/float3.hpp"
#include "structs/edge.hpp"
#include "structs/triangle.hpp"
#include "structs/model.hpp"
#include "graph.hpp"
Graph graph = Graph();
int2 MousePos;
int MouseX, MouseY;
bool MousePressed = false;
#include "gameObj.hpp"
#include "GUI/button.hpp"

class Engine {
public:
    bool isStarted = true;
    Engine() {}
    void update() {
        // Update vars
        isStarted = graph.isOpen;
        MouseX = graph.MouseX();
        MouseY = graph.MouseY();
        MousePos = int2(MouseX, MouseY);
        MousePressed = graph.MousePressed();
        // Funcs
        graph.update();
        graph.background(color(50, 50, 50));
    }
    void fill(color c) {
        fillColor = c;
    }
};