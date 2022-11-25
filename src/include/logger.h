#ifndef _LOGGER_
#define _LOGGER_

#include <stdarg.h>
#include <stdio.h>

#include "types.h"

typedef enum LOG_LEVEL {
    LOG_FATAL                   = 0x100,
    LOG_ERR                     = 0x101,
    LOG_WARN                    = 0x102,
    LOG_INFO                    = 0x103
} LOG_LEVEL;

#define _REG_LOG_ENABLE_          *(vu16*) 0x4FFF780
#define _REG_LOG_LEVEL_           *(vu16*) 0x4FFF700

inline void log(LOG_LEVEL lvl, const char* fmt, ...);

#endif
