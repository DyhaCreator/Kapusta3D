struct Text{
    static int LEFT() {return 0;}
    static int CENTER() {return 1;}
    static int RIGHT() {return 2;}
    int centred = 0;
    std::string label = "Text";
    std::string font = "fonts/font.otf";
    int size = 20;
    int2 pos = int2(10, 10);
    color col = color(255, 255, 255);
    Text() {}
    Text& setLabel(std::string label) {
        this->label = label;
        return *this;
    }
    Text& setFont(std::string font) {
        this->font = font;
        return *this;
    }
    Text& setSize(int size) {
        this->size = size;
        return *this;
    }
    Text& setPosition(int2 pos) {
        this->pos = pos;
        return *this;
    }
    Text& setColor(color col) {
        this->col = col;
        return *this;
    }
    Text& setCentred(int centred) {
        this->centred = centred;
        return *this;
    }
    void show() {
        if (centred == LEFT()) {
            graph.drawText(font, label, size, pos, col);
        } else if (centred == RIGHT()) {
            graph.drawText(font, label, size, int2(pos.x - size / 1.5 * label.size(), pos.y), col);
        } else if (centred == CENTER()) {
            graph.drawText(font, label, size, int2(pos.x - size / 1.5 * label.size() / 2, pos.y), col);
        }
    }
};