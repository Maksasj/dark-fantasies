#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "u.h"
#include "vector.h"

typedef struct {
    ivec2 lowerLeftPoint;
    int height;
    int width;
} Rectangle;

int checkCollision(Rectangle* rect1, Rectangle* rect2) {
    if (rect1->lowerLeftPoint.x <= rect2->lowerLeftPoint.x + rect2->width &&
    rect1->lowerLeftPoint.x + rect1->width >= rect2->lowerLeftPoint.x &&
     rect1->lowerLeftPoint.y <= rect2->lowerLeftPoint.y + rect2->height &&
      rect1->lowerLeftPoint.y + rect1->height >= rect2->lowerLeftPoint.y) {
        return 1;
      }

    return 0;
}

int movingObjectsCollision(Rectangle rect1, Rectangle rect2, ivec2 rect1MovementDirection, ivec2 rect2MovementDirection) {
    Rectangle tempRect1 = rect1;
    Rectangle tempRect2 = rect2;

    tempRect1.lowerLeftPoint = vec2I(rect1.lowerLeftPoint.x + rect1MovementDirection.x, rect1.lowerLeftPoint.y + rect1MovementDirection.y);
    tempRect2.lowerLeftPoint = vec2I(rect2.lowerLeftPoint.x + rect2MovementDirection.x, rect1.lowerLeftPoint.y + rect2MovementDirection.y);

    return checkCollision(&tempRect1, &tempRect2);
}

#endif
