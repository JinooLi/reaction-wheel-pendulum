#include "../inc/interface.h"

#define X(ret, name, ...) ret name(__VA_ARGS__);
#include "interface.def"
#undef X

/* 3) 인터페이스 인스턴스 자동 초기화 ---------------- */
#define X(ret, name, ...) .name = name,
Interface interface = {
#include "interface.def"
    .data = NULL,
};
#undef X