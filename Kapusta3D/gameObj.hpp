class GameObj{
    int3 pos;
    Model model;
    GameObj() {}
    GameObj(int3 pos) {
        this->pos = pos;
    }
    GameObj(Model model) {
        this->model = model;
    }
    GameObj(int3 pos, Model model) {
        this->pos = pos;
        this->model = model;
    }
};