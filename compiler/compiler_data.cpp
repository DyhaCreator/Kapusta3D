#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
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

std::vector<std::string> execDirs(std::string folderName) {
    std::string cmd = "dir " + folderName + " -l > out";
    char* command = cmd.data();
    system(command);
    std::ifstream in("out");
    std::vector<std::string>ans = {};
    std::vector<std::string>dirs = {};
    getline(in, cmd);
    std::vector<std::string>answerFromDir = {};
    while (getline(in, cmd)) {
        answerFromDir.push_back(cmd);
    }
    for (int i = 0; i < answerFromDir.size(); i++) {
        if (answerFromDir[i][0] == 'd') {
            std::stringstream ss(answerFromDir[i]);
            std::string a;
            ss >> a >> a >> a >> a >> a >> a >> a >> a >> a;
            std::vector<std::string>dirsDop = execDirs(folderName + '/' + a);
            for (auto x : dirsDop)
                dirs.push_back(x);
        } else {
            std::stringstream ss(answerFromDir[i]);
            std::string a;
            ss >> a >> a >> a >> a >> a >> a >> a >> a >> a;
            ans.push_back(folderName + '/' + a);
        }
    }
    for (int i = 0; i < dirs.size(); i++) {
        ans.push_back(dirs[i]);
    }
    return ans;
}

std::vector<std::string> getPaths() {
    std::vector<std::string>paths = execDirs("assets");
    return paths;
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
    out << "struct data{" << std::endl;
    out << "    struct File{\n";
    out << "        std::string path;\n";
    out << "        std::vector<uint8_t>data = {};\n";
    out << "        File(){}\n";
    out << "    };\n";
    out << "    const std::string Name = " << '"' << name << '"' << ";\n" ;
    out << "    const int Width = " << Width<< ";\n";
    out << "    const int Height = " << Height << ";\n";
    out << "    const int FrameRate = " << FrameRate << ";\n";
    out << "    std::vector<File>files = {};\n";
    std::vector<std::string>list = getPaths();
    system("rm out");
    out << "    File a;\n";
    out << "    data() {\n";
    for (int j = 0; j < list.size(); j++) {
        std::cout << list[j] << std::endl;
        out << "        a = File();\n";
        out << "        a.path = " << '"' << list[j] << '"' << ";\n";
        std::ifstream file(list[j], std::ios::binary);
        std::vector<unsigned char>data(std::istreambuf_iterator<char>(file), {});
        out << "        a.data = {";
        for (int i = 0; i < data.size(); i++) {
            out << int(data[i]) << ",";
        }
        out << "};\n";
    }
    out << "    }\n";
    out << "};\n";
    return 0;
}