#pragma once
//includes
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "errors.hpp"
#include "structs/color.hpp"

//settings
#include "data.hpp"
data __DATA__ = data();
#include "data_explorer.hpp"
DataExplorer __DataExplorer__ = DataExplorer();
std::string name = __DATA__.Name;
int Width = __DATA__.Width;
int Height = __DATA__.Height;
int FrameRate = __DATA__.FrameRate;
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
#include "GUI/text.hpp"
#include "GUI/button.hpp"
#include "GUI/Image.hpp"

/// Colors ///
color __RED__ = color(255, 0, 0);
color __GREEN__ = color(0, 255, 0);
color __BLUE__ = color(0, 0, 255);
color __BLACK__ = color(0, 0, 0);
color __WHITE__ = color(255, 255, 255);

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