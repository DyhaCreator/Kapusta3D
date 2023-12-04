struct Image{
    int Width = 0;
    int Height = 0;
    std::vector<color>img();
    Image() {}
    void loadImage(std::string path) {
        int index = __DataExplorer__.getFileIndex(path);
    }
};