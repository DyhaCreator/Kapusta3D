struct Triangle{
    float3 x;
    float3 y;
    float3 z;
    Triangle() {}
    Triangle(float3 x, float3 y, float3 z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Triangle(float x1, float x2, float x3,
             float y1, float y2, float y3,
             float z1, float z2, float z3) {
        this->x = float3(x1, x2, x3);
        this->y = float3(y1, y2, y3);
        this->z = float3(z1, z2, z3);
    }
};