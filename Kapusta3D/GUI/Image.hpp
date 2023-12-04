struct Image{
    int Width = 0;
    int Height = 0;
    std::vector<color>img();
    Image() {}
    void loadImage(std::string path) {
        int index = __DataExplorer__.getFileIndex(path);
        std::vector<uint8_t>data = __DATA__.files[index].data;
        std::string name = "image" + path.substr(path.size() - 4);
        std::ofstream out(name);
        for (int i = 0; i < data.size(); i++) {
            out << char(data[i]);
        }
    }
};