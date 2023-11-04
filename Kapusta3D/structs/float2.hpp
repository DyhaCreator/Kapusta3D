struct float2{
    float x;
    float y;
    float2() {
        this->x = 0;
        this->y = 0;
    }
    float2(float n) {
        this->x = n;
        this->y = n;
    }
    float2(float x, float y) {
        this->x = x;
        this->y = y;
    }
    float2 operator+(const float2 &a) {
        float2 c = float2();
        c.x = this->x + a.x;
        c.y = this->y + a.y;
        return c;
    }
    float2 operator-(const float2 &a) {
        float2 c = float2();
        c.x = this->x - a.x;
        c.y = this->y - a.y;
        return c;
    }
    float2 operator*(const float2 &a) {
        float2 c = float2();
        c.x = this->x * a.x;
        c.y = this->y * a.y;
        return c;
    }
    float2 operator/(const float2 &a) {
        float2 c = float2();
        c.x = this->x / a.x;
        c.y = this->y / a.y;
        return c;
    }
};