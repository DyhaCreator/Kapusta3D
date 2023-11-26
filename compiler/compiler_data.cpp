#include <iostream>
#include <fstream>
#include <string>
#include "parse_settings.hpp"

int main() {
    std::ofstream out("./Kapusta3D/data.hpp");
    std::string name_of_file = "./Kapusta3D/data.data";
    // parsing data
    std::string name = Name(name_of_file);
    int Width = find_width(name_of_file);
    int Height = find_height(name_of_file);
    int FrameRate = find_frameRate(name_of_file);
    out << "struct data{" << std::endl;
    out << "    const std::string Name = " << '"' << name << '"' << ";" << std::endl;
    out << "    const int Width = " << Width<< ";" << std::endl;
    out << "    const int Height = " << Height << ";" << std::endl;
    out << "    const int FrameRate = " << FrameRate << ";" << std::endl;
    out << "};" << std::endl;
    return 0;
}