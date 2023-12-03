struct Text{
    static int LEFT() {return 0;}
    static int CENTER() {return 1;}
    static int RIGHT() {return 2;}
    static int UP() {return 0;}
    static int DOWN() {return 2;}
    int centredX = 0;
    int centredY = 0;
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
    Text& setCentredX(int centred) {
        this->centredX = centred;
        return *this;
    }
    Text& setCentredY(int centred) {
        this->centredY = centred;
        return *this;
    }
    void show() {
        if (centredX == LEFT()) {
            if (centredY == UP()) {
                graph.drawText(font, label, size, pos, col);
            } else if (centredY == CENTER()) {
                graph.drawText(font, label, size, int2(pos.x, pos.y - size / 2), col);
            } else if (centredY == DOWN()) {
                graph.drawText(font, label, size, int2(pos.x, pos.y - size), col);
            }
        } else if (centredX == RIGHT()) {
            if (centredY == UP()) {
                graph.drawText(font, label, size, int2(pos.x - size / 1.5 * label.size()), col);
            } else if (centredY == CENTER()) {
                graph.drawText(font, label, size, int2(pos.x - size / 1.5 * label.size(), pos.y - size / 2), col);
            } else if (centredY == DOWN()) {
                graph.drawText(font, label, size, int2(pos.x - size / 1.5 * label.size(), pos.y - size), col);
            }
        } else if (centredX == CENTER()) {
            if (centredY == UP()) {
                graph.drawText(font, label, size, int2(pos.x - size / 1.5 * label.size() / 2, pos.y), col);
            } else if (centredY == CENTER()) {
                graph.drawText(font, label, size, int2(pos.x - size / 1.5 * label.size() / 2, pos.y - size / 1.4), col);
            } else if (centredY == DOWN()) {
                graph.drawText(font, label, size, int2(pos.x - size / 1.5 * label.size() / 2, pos.y - size), col);
            }
        }
    }
};