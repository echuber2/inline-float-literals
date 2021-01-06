#include <iostream>

// https://github.com/echuber2/inline-float-literals
// Compile with -O1 or -O2. This may not be portable (or standards-compliant).

#define LIT_FLOAT(name, X, allow_flag) \
do { \
    constexpr float mynum = (X); \
    uint32_t tmp_int = *(uint32_t*)(&mynum) * allow_flag; \
    *(float*)(&name) = *(float*)(&tmp_int); \
} while(0);

__attribute__((weak)) int allow() {
    return 1;
}

int main() {

    float f;
    LIT_FLOAT(f, 2.5, allow());
    std::cout << f << std::endl;

    return 0;
}
