struct int3{
    int x;
    int y;
    int z;
    int3() {
        this->x = 0;
        this->y = 0;
        this->z = 0;
    }
    int3(int n) {
        this->x = n;
        this->y = n;
        this->z = n;
    }
    int3(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    int3 operator+(const int3 &a) {
        int3 c = int3();
        c.x = this->x + a.x;
        c.y = this->y + a.y;
        c.z = this->z + a.z;
        return c;
    }
    int3 operator-(const int3 &a) {
        int3 c = int3();
        c.x = this->x - a.x;
        c.y = this->y - a.y;
        c.z = this->z - a.z;
        return c;
    }
    int3 operator*(const int3 &a) {
        int3 c = int3();
        c.x = this->x * a.x;
        c.y = this->y * a.y;
        c.z = this->z * a.z;
        return c;
    }
    int3 operator/(const int3 &a) {
        int3 c = int3();
        c.x = this->x / a.x;
        c.y = this->y / a.y;
        c.z = this->z / a.z;
        return c;
    }
};