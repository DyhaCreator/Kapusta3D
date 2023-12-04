struct Img{
    std::string path;
    std::vector<uint8_t>data = {};
    Img(){}
};
struct data{
    const std::string Name = "MyApp";
    const int Width = 920;
    const int Height = 600;
    const int FrameRate = 2500;
    std::vector<Img>images = {};
    data() {
        Img a = Img();
        a.path = "assets/test.png";
    }
};
