std::string Name(std::string name_file){
    std::string name = "window";
    std::ifstream in(name_file);
    if (in.is_open()) {
        std::string file = "";
        std::string str = "";
        while (in >> str) {
            file += str;
        }
        name = str.substr(str.find("NameWindow") + 13);
        name = name.substr(0, name.find('"'));
    } else {
        std::cout << "err" << std::endl;
    }
    return name;
}

int fidn_width(std::string name_file) {
    int Width = 500;

    return Width;
}