#include <SFML/Graphics.hpp>

struct Graph {
    int mode = 0;
    bool isOpen = true;
    int Width = 1080;
    int Height = 720;
    int FrameRate = 250;
    sf::Event ev;
    sf::RenderWindow window = sf::RenderWindow(sf::VideoMode(Width, Height), "Window");

    Graph() {
        this->window.setFramerateLimit(FrameRate);
    }

    Graph(int mode) {
        this->window.setFramerateLimit(FrameRate);
        this->mode = mode;
    }

    void update(){
        this->isOpen = this->window.isOpen();
        while(this->window.pollEvent(this->ev)){
            switch(this->ev.type){
            case sf::Event::Closed:
                this->window.close();
                break;
            }
        }
    }

    void render(){
        this->window.clear(sf::Color(50,50,50));

        this->window.display();
    }
};