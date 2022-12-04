#ifndef _NECROMANCER_H_
#define _NECROMANCER_H_

#include "../world.h"
#include "../entity/entity.h"
#include "../sound.h"

#define _FIELD_OF_VIEW_RANGE_ 3
#define _GRID_LENGTH_ 12
#define _GRID_HEIGHT_ 7

void necromancerUpdate(Entity* _self, World* _world, Room* _room);

void necromancerKill(Entity* _self);

i32 necromancerCalculateDamage(Entity* _self);

i32 necromancerTryDodge(Entity* _self);

#endif