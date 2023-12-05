#include <SFML/Graphics.hpp>

class Graph {
public:
    bool isOpen = true;
    sf::Event ev;
    sf::RenderWindow window = sf::RenderWindow(sf::VideoMode(Width, Height), name);

    Graph() {
        this->window.setFramerateLimit(FrameRate);
    }
    ////////// Base Function //////////
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
    void display() {
        this->window.display();
    }
    void background(color c) {
        this->window.clear(sf::Color(c.r, c.g, c.b));
    }
        
    int MouseX() {
        return sf::Mouse::getPosition(this->window).x;
    }
    int MouseY() {
        return sf::Mouse::getPosition(this->window).y;
    }
    bool MousePressed() {
        return sf::Mouse::isButtonPressed(sf::Mouse::Left);
    }

    std::vector<color> getImageFromFile(const void* d, int index) {
        std::vector<color>ans = {};
        sf::Image img;
        img.loadFromMemory(d, __DATA__.files[index].data.size());
        int Width = img.getSize().x;
        int Height = img.getSize().y;
        ans.push_back(color(Width, Height, 0));
        for (int y = 0; y < Height; y++) {
            for (int x = 0; x < Width; x++) {
                sf::Color c = img.getPixel(x, y);
                ans.push_back(color(c.r, c.g, c.b));
            }
        }
        return ans;
    }

    void drawPixel(int2 pos, color c) {
        sf::Vertex vertex(sf::Vector2f(pos.x, pos.y), sf::Color(c.r, c.g, c.b));
        this->window.draw(&vertex, 1, sf::Points);
    }

    void drawRect(int position_x, int position_y, int size_x, int size_y, color c) {
        sf::RectangleShape rectangle(sf::Vector2f(10, 50));
        rectangle.setPosition(sf::Vector2f(position_x, position_y));
        rectangle.setSize(sf::Vector2f(size_x, size_y));
        rectangle.setFillColor(sf::Color(c.r, c.g, c.b));
        this->window.draw(rectangle);
    }

    void drawText(std::string Sfont, std::string Slabel, int Isize, int2 I2pos, color Ccol) {
        sf::Font font;
        font.loadFromFile(Sfont);
        sf::Text text;
        text.setFont(font);
        text.setString(Slabel);
        text.setCharacterSize(Isize);
        text.setFillColor(sf::Color(Ccol.r, Ccol.g, Ccol.b));
        text.setPosition(I2pos.x, I2pos.y);
        this->window.draw(text);
    }

    void drawTriangle(Triangle triangle) {

    }

    ////////// Secondary Function //////////
    void drawRect(int position_x, int position_y, int size_x, int size_y) {
        drawRect(position_x, position_y, size_x, size_y, fillColor);
    }
    void drawRect(int2 pos, int2 size) {
        drawRect(pos.x, pos.y, size.x, size.y, fillColor);
    }
    void drawRect(int2 pos, int2 size, color c) {
        drawRect(pos.x, pos.y, size.x, size.y, c);
    }
};