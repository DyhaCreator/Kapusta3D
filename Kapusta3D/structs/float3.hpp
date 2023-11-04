struct float3{
    float x;
    float y;
    float z;
    float3() {
        this->x = 0;
        this->y = 0;
        this->z = 0;
    }
    float3(float n) {
        this->x = n;
        this->y = n;
        this->z = n;
    }
    float3(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    float3 operator+(const float3 &a) {
        float3 c = float3();
        c.x = this->x + a.x;
        c.y = this->y + a.y;
        c.z = this->z + a.z;
        return c;
    }
    float3 operator-(const float3 &a) {
        float3 c = float3();
        c.x = this->x - a.x;
        c.y = this->y - a.y;
        c.z = this->z - a.z;
        return c;
    }
    float3 operator*(const float3 &a) {
        float3 c = float3();
        c.x = this->x * a.x;
        c.y = this->y * a.y;
        c.z = this->z * a.z;
        return c;
    }
    float3 operator/(const float3 &a) {
        float3 c = float3();
        c.x = this->x / a.x;
        c.y = this->y / a.y;
        c.z = this->z / a.z;
        return c;
    }
};