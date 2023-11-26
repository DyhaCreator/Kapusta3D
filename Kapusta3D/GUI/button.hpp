struct Button{
    int2 pos;
    int2 size;
    color def = color(200, 200, 200), hover = color(220, 220, 220), pressed = color(255, 255, 255);
    Button() {}
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
    Button& setPosition(int2 pos) {
        this->pos = pos;
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
    }
};