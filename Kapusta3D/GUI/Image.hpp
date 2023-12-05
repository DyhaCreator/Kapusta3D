struct Image{
    int2 pos = int2(0, 0);
    int Width = 0;
    int Height = 0;
    std::vector<color>img = {};
    Image() {}
    Image& setPosition(int2 pos) {
        this->pos = pos;
        return *this;
    }
    Image& setPosition(int x, int y) {
        this->pos = int2(x, y);
        return *this;
    }
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
    color getPixel(int2 position) {
        return img[position.y * Width + position.x];
    }
    color getPixel(int x, int y) {
        return img[y * Width + x];
    }
    void show() {
        for (int y = 0; y < Height; y++) {
            for (int x = 0; x < Width; x++) {
                graph.drawPixel(int2(x + pos.x, y + pos.y), this->img[y * Width + x]);
            }
        }
    }
};