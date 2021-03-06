#include "main.h"

#ifndef BONUSCOIN_H
#define BONUSCOIN_H


class Bonuscoin {
public:
    Bonuscoin() {}
    Bonuscoin(float x, float y,color_t color);
    glm::vec3 position;
    float rotation;
    void draw(glm::mat4 VP);
    void set_position(float x, float y);
    void tick();
private:
    VAO *object;
};

#endif 
