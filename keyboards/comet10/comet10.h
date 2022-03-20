#pragma once

#include "quantum.h"

#define LAYOUT_ortho_2x5( \
    k00, k01, k02, k03, k04, \
    k10, k11, k12, k13, k14  \
) { \
    { k00, k01, k02, k03, k04 }, \
    { k10, k11, k12, k13, k14 } \
}
