struct Sprite{
    std::string path;
    int Width = 0;
    int Height = 0;
    std::vector<color>img = std::vector<color>(Width * Height);
    Sprite() {}
};