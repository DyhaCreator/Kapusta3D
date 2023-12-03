class Button{
private:
    void isClk() {}
    color def = color(200, 200, 200), hover = color(220, 220, 220), pressed = color(255, 255, 255);
public:
    int2 pos = int2(10, 10);
    int2 size = int2(200, 100);
    Text label = Text();
    bool isPointed = false;
    bool isClick = false;
    void (*isClicked) ();
    Button() {
        label.setPosition(pos);
    }
    Button(int2 pos) {
        this->pos = pos;
    }
    Button(int2 pos, int2 size) {
        this->pos = pos;
        this->size = size;
    }
    Button(int x, int y) {
        this->pos.x = x;
        this->pos.y = y;
    }
    Button(int x, int y, int sx, int sy) {
        this->pos = int2(x, y);
        this->size = int2(sx, sy);
    }
    Button(void (*func)()) {
        this->isClicked = func;
    }
    Button(void (*func)(), int2 pos) {
        this->pos = pos;
        this->isClicked = func;
    }
    Button(void (*func)(), int2 pos, int2 size) {
        this->pos = pos;
        this->size = size;
        this->isClicked = func;
        label.setPosition(int2(pos.x + size.x / 2, pos.y + size.y / 2))
             .setCentredX(Text::CENTER())
             .setCentredY(Text::CENTER())
             .setColor(color::black());
    }
    Button(void (*func)(), int x, int y) {
        this->pos.x = x;
        this->pos.y = y;
        this->isClicked = func;
    }
    Button(void (*func)(), int x, int y, int sx, int sy) {
        this->pos = int2(x, y);
        this->size = int2(sx, sy);
        this->isClicked = func;
    }
    Button& setPosition(int2 pos) {
        this->pos = pos;
        return *this;
    }
    Button& setPosition(int x, int y) {
        this->pos = int2(x, y);
        return *this;
    }
    Button& setSize(int2 size) {
        this->size = size;
        return *this;
    }
    Button& setSize(int x, int y) {
        this->size = int2(x, y);
        return *this;
    }
    Button& setDefColor(color c) {
        this->def = c;
        return *this;
    }
    Button& setHoverColor(color c) {
        this->hover = c;
        return *this;
    }
    Button& setPressedColor(color c) {
        this->pressed = c;
        return *this;
    }
    Button& setColors(color def, color hover, color pressed) {
        this->def = def;
        this->hover = hover;
        this->pressed = pressed;
        return *this;
    }
    void show() {
        if (MouseX > this->pos.x && MouseX < this->pos.x + this->size.x &&
            MouseY > this->pos.y && MouseY < this->pos.y + this->size.y) {
            if (MousePressed) {
                graph.drawRect(pos, size, pressed);
            } else {
                graph.drawRect(pos, size, hover);
            }
        } else {
            graph.drawRect(pos, size, def);
        }
        label.show();
        update();
    }
private:
    bool prevState = false;
    void update() {
        if (MouseX > this->pos.x && MouseX < this->pos.x + this->size.x &&
            MouseY > this->pos.y && MouseY < this->pos.y + this->size.y) {
            isPointed = true;
            if (MousePressed) {
                isClick = true;
                if (prevState == false) {
                    prevState = true;
                    isClicked();
                }
            } else {
                prevState = false;
                isClick = false;
            }
        } else {
            isPointed = false;
            isClick = false;
            prevState = false;
        }
    }
};