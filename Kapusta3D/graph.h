#include <SFML/Graphics.hpp>

class Graph {
public:
    bool isOpen = true;
    int Width = 1080;
    int Height = 720;
    const int FrameRate = 250;
    const int BOIDS_SIZE = 25;
    sf::Event ev;
    sf::RenderWindow window = sf::RenderWindow(sf::VideoMode(Width, Height), "Test Gen");

    Graph() {
        this->window.setFramerateLimit(FrameRate);
    }

    void render(){
        this->window.clear(sf::Color(50,50,50));

        this->window.display();
    }
};