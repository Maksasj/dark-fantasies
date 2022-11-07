#include "../include/types.h"

#define KOOPA_WIDTH 16
#define KOOPA_HEIGHT 64

const u8 KOOPA_DATA [] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
    0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x02, 0x00, 0x00, 0x00, 
    0x03, 0x01, 0x01, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x03, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 0x05, 0x02, 
    0x04, 0x01, 0x01, 0x01, 0x02, 0x03, 0x00, 0x00, 0x04, 0x01, 0x01, 0x01, 
    0x01, 0x04, 0x03, 0x00, 0x04, 0x04, 0x01, 0x01, 0x04, 0x04, 0x03, 0x00, 
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x03, 0x04, 0x04, 0x04, 0x03, 0x03, 0x04, 0x04, 0x03, 
    0x03, 0x04, 0x04, 0x04, 0x04, 0x03, 0x04, 0x03, 0x06, 0x03, 0x04, 0x04, 
    0x04, 0x04, 0x03, 0x03, 0x00, 0x00, 0x05, 0x05, 0x02, 0x01, 0x01, 0x05, 
    0x00, 0x05, 0x07, 0x02, 0x07, 0x07, 0x02, 0x01, 0x00, 0x02, 0x02, 0x07, 
    0x07, 0x08, 0x02, 0x02, 0x05, 0x08, 0x02, 0x08, 0x08, 0x02, 0x08, 0x02, 
    0x05, 0x08, 0x02, 0x02, 0x02, 0x08, 0x05, 0x03, 0x05, 0x02, 0x08, 0x08, 
    0x02, 0x02, 0x01, 0x03, 0x02, 0x08, 0x08, 0x05, 0x02, 0x01, 0x02, 0x03, 
    0x05, 0x05, 0x05, 0x02, 0x02, 0x03, 0x03, 0x03, 0x02, 0x02, 0x04, 0x04, 
    0x03, 0x03, 0x03, 0x00, 0x02, 0x01, 0x02, 0x04, 0x03, 0x00, 0x00, 0x00, 
    0x02, 0x01, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x02, 0x02, 
    0x02, 0x00, 0x00, 0x00, 0x04, 0x04, 0x03, 0x01, 0x01, 0x02, 0x00, 0x00, 
    0x04, 0x03, 0x08, 0x08, 0x02, 0x00, 0x00, 0x00, 0x04, 0x03, 0x03, 0x02, 
    0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x02, 0x02, 0x02, 0x01, 0x03, 0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 
    0x02, 0x03, 0x04, 0x04, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
    0x00, 0x00, 0x00, 0x00, 0x02, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 
    0x02, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x02, 0x07, 0x07, 0x07, 
    0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x07, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x01, 0x02, 
    0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
    0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x03, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x03, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x01, 0x01, 
    0x02, 0x00, 0x00, 0x00, 0x04, 0x01, 0x01, 0x01, 0x02, 0x03, 0x00, 0x00, 
    0x04, 0x01, 0x01, 0x01, 0x01, 0x04, 0x03, 0x00, 0x04, 0x04, 0x01, 0x01, 
    0x04, 0x04, 0x03, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x04, 0x04, 0x04, 0x03, 
    0x03, 0x04, 0x04, 0x03, 0x03, 0x04, 0x04, 0x04, 0x04, 0x03, 0x04, 0x03, 
    0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 0x05, 0x02, 0x00, 0x00, 0x05, 0x05, 
    0x02, 0x01, 0x01, 0x05, 0x00, 0x05, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03, 
    0x00, 0x02, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x08, 0x03, 0x04, 
    0x04, 0x03, 0x03, 0x04, 0x05, 0x08, 0x03, 0x04, 0x04, 0x03, 0x02, 0x03, 
    0x05, 0x02, 0x08, 0x03, 0x03, 0x02, 0x01, 0x02, 0x02, 0x08, 0x08, 0x05, 
    0x02, 0x01, 0x02, 0x01, 0x06, 0x03, 0x04, 0x04, 0x04, 0x04, 0x03, 0x03, 
    0x02, 0x02, 0x04, 0x04, 0x03, 0x03, 0x03, 0x00, 0x02, 0x01, 0x02, 0x04, 
    0x03, 0x00, 0x00, 0x00, 0x03, 0x01, 0x02, 0x03, 0x06, 0x03, 0x03, 0x00, 
    0x04, 0x03, 0x02, 0x02, 0x02, 0x04, 0x04, 0x03, 0x03, 0x05, 0x01, 0x01, 
    0x01, 0x02, 0x04, 0x03, 0x01, 0x01, 0x08, 0x08, 0x02, 0x03, 0x03, 0x00, 
    0x05, 0x01, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x05, 0x05, 0x02, 0x05, 
    0x03, 0x03, 0x03, 0x01, 0x00, 0x02, 0x07, 0x02, 0x04, 0x04, 0x03, 0x08, 
    0x02, 0x07, 0x07, 0x07, 0x02, 0x04, 0x03, 0x01, 0x02, 0x07, 0x07, 0x07, 
    0x07, 0x02, 0x02, 0x02, 0x00, 0x02, 0x07, 0x07, 0x02, 0x02, 0x00, 0x00, 
    0x00, 0x00, 0x02, 0x07, 0x07, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 
    0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x01, 0x08, 0x08, 0x02, 0x02, 0x02, 0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 
    0x01, 0x02, 0x00, 0x00, 0x02, 0x02, 0x02, 0x07, 0x07, 0x02, 0x00, 0x00, 
    0x02, 0x07, 0x07, 0x07, 0x07, 0x02, 0x00, 0x00, 0x02, 0x07, 0x07, 0x07, 
    0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x07, 0x07, 0x02, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
};

const u16 KOOPA_PALETTE [] = {
    0x7c1f, 0x7fff, 0x0000, 0x00b7, 0x023f, 0x01e0, 0x5b9f, 0x03e0, 0x02e0, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000
};
