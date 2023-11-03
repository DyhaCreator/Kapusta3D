#pragma once
#include <SFML/Graphics.hpp>

class Graph {
public:
    bool isOpen = true;
    const int Width = 1080;
    const int Height = 720;
    const int FrameRate = 250;
    const int BOIDS_SIZE = 25;
    sf::Event ev;
    sf::RenderWindow window = sf::RenderWindow(sf::VideoMode(1080,720), "Test Gen");

    void render(){
        this->window.clear(sf::Color(50,50,50));

        this->window.display();
    }
};