struct Edge{
    float3 x;
    float3 y;
    Edge() {
        this->x = float3();
        this->y = float3();
    }
    Edge(float3 x, float3 y) {
        this->x = x;
        this->y = y;
    }
    Edge(float x1, float x2, float x3,
         float y1, float y2, float y3) {
        this->x = float3(x1, x2, x3);
        this->y = float3(y1, y2, y3);
    }
};