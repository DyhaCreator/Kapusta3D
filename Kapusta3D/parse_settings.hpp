std::string Name(std::string name_file){
    std::string name = "window";
    std::ifstream in(name_file);
    if (in.is_open()) {
        std::string file = "";
        std::string str = "";
        while (in >> str) {
            file += str;
        }
        name = str;
        std::cout << name << std::endl;
    } else {
        std::cout << "err" << std::endl;
    }
    return name;
}