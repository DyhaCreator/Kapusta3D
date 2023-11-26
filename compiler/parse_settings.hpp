std::string Name(std::string name_file){
    std::string name = "window";
    std::ifstream in(name_file);
    if (in.is_open()) {
        std::string file = "";
        std::string str = "";
        while (in >> str) {
            file += str;
        }
        name = file.substr(file.find("NameWindow") + 13);
        name = name.substr(0, name.find('"'));
    } else {
        std::cout << "err" << std::endl;
    }
    return name;
}

int find_width(std::string name_file) {
    std::string W = "500";
    std::ifstream in(name_file);
    if (in.is_open()) {
        std::string file = "";
        std::string str = "";
        while (in >> str) {
            file += str;
        }
        W = file.substr(file.find("Width") + 7);
        W = W.substr(0, W.find(','));
    } else {
        std::cout << "err" << std::endl;
    }
    int Width = stoi(W);
    return Width;
}

int find_height(std::string name_file) {
    std::string W = "500";
    std::ifstream in(name_file);
    if (in.is_open()) {
        std::string file = "";
        std::string str = "";
        while (in >> str) {
            file += str;
        }
        W = file.substr(file.find("Height") + 8);
        W = W.substr(0, W.find(','));
    } else {
        std::cout << "err" << std::endl;
    }
    int Height = stoi(W);
    return Height;
}

int find_frameRate(std::string name_file) {
    std::string W = "500";
    std::ifstream in(name_file);
    if (in.is_open()) {
        std::string file = "";
        std::string str = "";
        while (in >> str) {
            file += str;
        }
        W = file.substr(file.find("FrameRate") + 11);
        W = W.substr(0, W.find(','));
    } else {
        std::cout << "err" << std::endl;
    }
    int FrameRate = stoi(W);
    return FrameRate;
}