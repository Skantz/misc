#define CASE3 true
#include <iostream>

int main() {
    // de-reference nullptr
#ifdef CASE1
    int* p = nullptr;
    int q = *p;
    std::cout << q;
#endif
    //de-reference pointer to zero allocation
#ifdef CASE2
    int* p = new int[0];
    int q = *p;
    std::cout << q;
#endif
    return 0;
}
