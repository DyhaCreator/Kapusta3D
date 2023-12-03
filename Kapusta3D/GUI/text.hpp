struct Text{
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
    Text& setSize(int2 pos) {
        this->pos = pos;
        return *this;
    }
    Text& setSize(color col) {
        this->col = col;
        return *this;
    }
    void show() {
        graph.drawText(font, label, size, pos, col);
    }
};