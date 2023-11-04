struct int2{
    int x;
    int y;
    int2() {
        this->x = 0;
        this->y = 0;
    }
    int2(int n) {
        this->x = n;
        this->y = n;
    }
    int2(int x, int y) {
        this->x = x;
        this->y = y;
    }
    int2 operator+(const int2 &a) {
        int2 c = int2();
        c.x = this->x + a.x;
        c.y = this->y + a.y;
        return c;
    }
    int2 operator-(const int2 &a) {
        int2 c = int2();
        c.x = this->x - a.x;
        c.y = this->y - a.y;
        return c;
    }
    int2 operator*(const int2 &a) {
        int2 c = int2();
        c.x = this->x * a.x;
        c.y = this->y * a.y;
        return c;
    }
    int2 operator/(const int2 &a) {
        int2 c = int2();
        c.x = this->x / a.x;
        c.y = this->y / a.y;
        return c;
    }
};