#include <iostream>
#include <fstream>
#include <string>
#include "parse_settings.hpp"
#include <SFML/Graphics.hpp>

struct color{
    int r, g, b;
    color() {}
    color(int r, int g, int b) {
        this->r = r;
        this->g = g;
        this->b = b;
    }
};

std::vector<std::string> getPaths() {
    std::vector<std::string>a = std::vector<std::string>();
    
}

int main() {
    sf::RenderWindow window(sf::VideoMode(200, 200), "Test");
    std::ofstream out("./Kapusta3D/data.hpp");
    std::string name_of_file = "./Kapusta3D/data.data";
    // parsing data
    std::string name = Name(name_of_file);
    int Width = find_width(name_of_file);
    int Height = find_height(name_of_file);
    int FrameRate = find_frameRate(name_of_file);
    out << "struct Img{\n";
    out << "    std::string path;\n";
    out << "    std::vector<color>img = std::vector<color>();\n";
    out << "    Img(){}\n";
    out << "};\n";
    out << "struct data{" << std::endl;
    out << "    const std::string Name = " << '"' << name << '"' << ";\n" ;
    out << "    const int Width = " << Width<< ";\n";
    out << "    const int Height = " << Height << ";\n";
    out << "    const int FrameRate = " << FrameRate << ";\n";
    out << "    const std::vector<Img>images = {};\n";
    out << "    data() {\n";
    out << "        Img a = Img();\n";
    out << "        a.path = " << '"' << "./test.jpg" << '"' << ";\n";
    sf::Image img;
    img.loadFromFile("assets/test.jpg");
    int width = img.getSize().x;
    int height = img.getSize().y;
    std::vector<color>a = std::vector<color>();
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            sf::Color sfc = img.getPixel(x, y);
            color c = color(int(sfc.r), int(sfc.g), int(sfc.b));
            a.push_back(c);
        }
    }
    out << "    }\n";
    out << "};\n";
    return 0;
}