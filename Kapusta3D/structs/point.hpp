struct point{
    int2 pos = int2(0, 0);
    color c = color(0, 0, 0);
    point() {}
    point(int2 pos, color c) {
        this->pos = pos;
        this->c = c;
    }
    point(int x, int y, color c) {
        this->pos = int2(x, y);
        this->c = c;
    }
};