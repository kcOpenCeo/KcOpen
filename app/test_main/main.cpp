#include <iostream>
#include "CByte.h"

int main() {
    KC::CByte byte(0x2A);
    std::cout << "초기값: 0x" << std::hex << static_cast<int>(byte.get()) << std::endl;

    byte.set(0x55);
    std::cout << "변경값: 0x" << std::hex << static_cast<int>(byte.get()) << std::endl;

    return 0;
}
