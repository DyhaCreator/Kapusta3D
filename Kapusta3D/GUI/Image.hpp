struct Image{
    int Width = 0;
    int Height = 0;
    std::vector<color>img = {};
    Image() {}
    void loadImage(std::string path) {
        int index = __DataExplorer__.getFileIndex(path);
        uint8_t dataArr[__DATA__.files[index].data.size()] = {0};
        for (int i = 0; i < __DATA__.files[index].data.size(); i++) {
            dataArr[i] = __DATA__.files[index].data[i];
        }
        const void* d = dataArr;
        std::vector<color>a = graph.getImageFromFile(d, index);
        color b = a[0];
        this->Width = b.r;
        this->Height = b.g;
        for (int i = 1; i < a.size(); i++) {
            this->img.push_back(a[i]);
        }
    }
};