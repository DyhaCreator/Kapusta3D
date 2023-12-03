struct Img{
    std::string path;
    std::vector<color>img = std::vector<color>();
    Img(){}
};
struct data{
    const std::string Name = "MyApp";
    const int Width = 920;
    const int Height = 600;
    const int FrameRate = 2500;
    const std::vector<Img>images = {};
    data() {
        Img a = Img();
        a.path = "./test.jpg";
    }
};
