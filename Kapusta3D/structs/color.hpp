struct color{
    int r, g, b;
    color() {}
    color(int r, int g, int b) {
        this->r = r;
        this->g = g;
        this->b = b;
    }
    static color black() {return color(0, 0, 0);}
    static color red() {return color(255, 0, 0);}
    static color green() {return color(0, 255, 0);}
    static color blue() {return color(0, 0, 255);}
    static color yellow() {return color(255, 255, 0);}
    static color violet() {return color(255, 0, 255);}
    static color tur() {return color(0, 255, 255);}
    static color white() {return color(255, 255, 255);}
};