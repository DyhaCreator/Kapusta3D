#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream out("./Release/data.data");
    std::ifstream in("./Kapusta3D/data.data");
    std::string input = "";
    std::string a = "";
    while (in >> a) {
        input += a;
    }
    std::cout << input << std::endl;
    return 0;
}