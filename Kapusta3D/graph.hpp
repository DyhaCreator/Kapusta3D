#include <SFML/Graphics.hpp>

class Graph {
public:
    bool isOpen = true;
    sf::Event ev;
    sf::RenderWindow window = sf::RenderWindow(sf::VideoMode(Width, Height), name);

    Graph() {
        this->window.setFramerateLimit(FrameRate);
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

    void drawTriangle(Triangle triangle) {

    }
};