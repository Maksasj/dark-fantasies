#include "../include/types.h"

#define _MAP_WIDTH_ 32
#define _MAP_HEIGHT_ 32

u16 MAP[] = {
    0x0001, 0x0002, 0x0003, 0x0004, 0x0003, 0x0004, 0x0003, 0x0004, 0x0003, 
    0x0004, 0x0003, 0x0004, 0x0003, 0x0004, 0x0003, 0x0004, 0x0003, 0x0004, 
    0x0003, 0x0004, 0x0003, 0x0004, 0x0003, 0x0004, 0x0003, 0x0004, 0x0003, 
    0x0004, 0x0005, 0x0006, 0x0000, 0x0000, 0x0021, 0x0022, 0x0023, 0x0025, 
    0x0023, 0x0025, 0x0023, 0x0025, 0x0023, 0x0025, 0x0023, 0x0025, 0x0023, 
    0x0025, 0x0023, 0x0025, 0x0023, 0x0024, 0x0023, 0x0024, 0x0023, 0x0024, 
    0x0023, 0x0024, 0x0023, 0x0024, 0x0023, 0x0024, 0x0025, 0x0026, 0x0000, 
    0x0000, 0x0041, 0x0042, 0x0007, 0x0008, 0x000b, 0x000c, 0x004b, 0x004c, 
    0x0007, 0x0008, 0x0009, 0x000a, 0x000b, 0x000c, 0x0009, 0x000a, 0x0047, 
    0x0048, 0x0007, 0x0008, 0x0007, 0x0008, 0x000b, 0x000c, 0x0009, 0x000a, 
    0x004b, 0x004c, 0x0045, 0x0046, 0x0000, 0x0000, 0x0061, 0x0062, 0x0027, 
    0x0028, 0x002b, 0x002c, 0x006b, 0x006c, 0x0027, 0x0028, 0x0029, 0x002a, 
    0x002b, 0x002c, 0x0029, 0x002a, 0x0067, 0x0068, 0x0027, 0x0028, 0x006b, 
    0x006c, 0x002b, 0x002c, 0x0029, 0x002a, 0x006b, 0x006c, 0x0065, 0x0066, 
    0x0000, 0x0000, 0x0041, 0x0042, 0x004b, 0x004c, 0x0009, 0x000a, 0x0007, 
    0x0008, 0x0049, 0x004a, 0x0047, 0x0048, 0x0049, 0x004a, 0x004b, 0x004c, 
    0x000b, 0x000c, 0x0009, 0x000a, 0x000b, 0x000c, 0x004b, 0x004c, 0x0007, 
    0x0008, 0x000b, 0x000c, 0x0045, 0x0046, 0x0000, 0x0000, 0x0061, 0x0062, 
    0x006b, 0x006c, 0x0029, 0x002a, 0x0027, 0x0028, 0x0069, 0x006a, 0x0067, 
    0x0068, 0x0069, 0x006a, 0x006b, 0x006c, 0x002b, 0x002c, 0x0029, 0x002a, 
    0x002b, 0x002c, 0x006b, 0x006c, 0x0027, 0x0028, 0x002b, 0x002c, 0x0065, 
    0x0066, 0x0000, 0x0000, 0x0041, 0x0042, 0x0047, 0x0048, 0x0009, 0x000a, 
    0x000b, 0x000c, 0x004b, 0x004c, 0x000b, 0x000c, 0x0009, 0x000a, 0x000b, 
    0x000c, 0x0009, 0x000a, 0x0007, 0x0008, 0x0049, 0x004a, 0x0047, 0x0048, 
    0x0049, 0x004a, 0x004b, 0x004c, 0x0045, 0x0046, 0x0000, 0x0000, 0x0061, 
    0x0062, 0x0067, 0x0068, 0x0029, 0x002a, 0x002b, 0x002c, 0x006b, 0x006c, 
    0x002b, 0x002c, 0x0029, 0x002a, 0x002b, 0x002c, 0x0029, 0x002a, 0x0067, 
    0x0048, 0x0069, 0x006a, 0x0067, 0x0068, 0x0069, 0x006a, 0x006b, 0x006c, 
    0x0065, 0x0066, 0x0000, 0x0000, 0x0041, 0x0042, 0x0009, 0x000a, 0x0049, 
    0x0028, 0x0009, 0x000a, 0x0049, 0x004a, 0x0009, 0x0027, 0x0007, 0x0008, 
    0x004b, 0x004c, 0x0007, 0x0008, 0x000b, 0x000c, 0x0009, 0x000a, 0x004b, 
    0x004c, 0x0049, 0x004a, 0x0007, 0x0048, 0x0045, 0x0046, 0x0000, 0x0000, 
    0x0061, 0x0062, 0x0029, 0x002a, 0x0069, 0x006a, 0x0029, 0x002a, 0x0069, 
    0x006a, 0x0028, 0x000a, 0x0027, 0x0028, 0x006b, 0x006c, 0x0027, 0x0028, 
    0x002b, 0x002c, 0x0029, 0x002a, 0x006b, 0x006c, 0x0069, 0x006a, 0x0027, 
    0x0028, 0x0065, 0x0066, 0x0000, 0x0000, 0x0041, 0x0042, 0x0049, 0x004a, 
    0x0009, 0x000a, 0x0007, 0x0008, 0x004b, 0x004c, 0x000b, 0x000c, 0x0009, 
    0x000a, 0x000b, 0x000c, 0x0049, 0x004a, 0x004b, 0x0048, 0x0007, 0x0008, 
    0x000b, 0x000c, 0x0009, 0x000a, 0x000b, 0x000c, 0x0045, 0x0046, 0x0000, 
    0x0000, 0x0061, 0x0062, 0x0069, 0x006a, 0x0029, 0x002a, 0x0027, 0x0028, 
    0x006b, 0x006c, 0x002b, 0x002c, 0x0029, 0x002a, 0x002b, 0x002c, 0x0069, 
    0x006a, 0x0029, 0x0028, 0x0067, 0x0068, 0x002b, 0x002c, 0x0029, 0x002a, 
    0x002b, 0x002c, 0x0065, 0x0066, 0x0000, 0x0000, 0x0041, 0x0042, 0x0007, 
    0x0008, 0x0009, 0x000a, 0x0047, 0x0048, 0x0049, 0x004a, 0x0007, 0x0048, 
    0x0049, 0x004a, 0x004b, 0x004c, 0x0047, 0x0048, 0x0009, 0x000a, 0x0009, 
    0x000a, 0x0047, 0x0048, 0x0007, 0x0008, 0x0049, 0x004a, 0x0045, 0x0046, 
    0x0000, 0x0000, 0x0061, 0x0062, 0x0027, 0x0028, 0x0029, 0x002a, 0x0067, 
    0x0068, 0x0069, 0x006a, 0x0067, 0x0028, 0x0069, 0x006a, 0x006b, 0x006c, 
    0x0067, 0x0068, 0x0029, 0x002a, 0x0029, 0x002a, 0x0067, 0x0068, 0x0027, 
    0x0028, 0x0069, 0x006a, 0x0065, 0x0066, 0x0000, 0x0000, 0x0041, 0x0042, 
    0x000b, 0x000c, 0x004b, 0x004c, 0x0007, 0x0008, 0x004b, 0x004c, 0x0009, 
    0x000a, 0x000b, 0x000c, 0x0009, 0x000a, 0x0007, 0x0008, 0x000b, 0x000c, 
    0x004b, 0x004c, 0x0007, 0x000a, 0x0049, 0x004a, 0x004b, 0x004c, 0x0045, 
    0x0046, 0x0000, 0x0000, 0x0061, 0x0062, 0x002b, 0x002c, 0x006b, 0x006c, 
    0x0027, 0x0028, 0x006b, 0x006c, 0x0029, 0x002a, 0x002b, 0x002c, 0x0029, 
    0x002a, 0x0027, 0x0028, 0x0065, 0x002c, 0x006b, 0x006c, 0x0029, 0x0068, 
    0x0069, 0x006a, 0x006b, 0x006c, 0x0065, 0x0066, 0x0000, 0x0000, 0x0041, 
    0x0042, 0x0047, 0x0048, 0x0009, 0x000a, 0x0049, 0x004a, 0x000b, 0x000c, 
    0x0083, 0x0084, 0x004b, 0x004c, 0x000b, 0x000c, 0x0083, 0x0084, 0x0009, 
    0x000a, 0x0007, 0x0008, 0x0049, 0x004a, 0x004b, 0x004c, 0x000b, 0x000c, 
    0x0045, 0x0046, 0x0000, 0x0000, 0x0061, 0x0062, 0x0067, 0x0068, 0x0029, 
    0x002a, 0x0049, 0x006a, 0x002b, 0x002c, 0x0069, 0x006a, 0x006b, 0x006b, 
    0x002b, 0x002c, 0x0067, 0x0068, 0x0029, 0x002a, 0x0027, 0x0028, 0x0069, 
    0x006a, 0x006b, 0x006c, 0x002b, 0x002c, 0x0065, 0x0066, 0x0000, 0x0000, 
    0x0081, 0x0082, 0x0083, 0x0084, 0x0083, 0x0084, 0x0083, 0x0084, 0x0083, 
    0x0084, 0x0083, 0x0084, 0x0083, 0x0084, 0x0083, 0x0084, 0x0083, 0x0084, 
    0x0083, 0x0084, 0x0083, 0x0084, 0x0083, 0x0084, 0x0083, 0x0084, 0x0083, 
    0x0084, 0x0085, 0x0086, 0x0000, 0x0000, 0x00a1, 0x00a2, 0x00a3, 0x00a4, 
    0x00a3, 0x00a4, 0x00a3, 0x00a4, 0x00a3, 0x00a4, 0x00a3, 0x00a4, 0x00a3, 
    0x00a4, 0x00a3, 0x00a4, 0x00a3, 0x00a4, 0x00a3, 0x00a4, 0x00a3, 0x00a4, 
    0x00a3, 0x00a4, 0x00a3, 0x00a4, 0x00a3, 0x00a4, 0x00a5, 0x00a6, 0x0000, 
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
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
};
