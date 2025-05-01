#include <iostream>
#include "CByte.h"
#include "CString.h"

int main() {
    // CByte 테스트
    KC::CByte byte(0x2A);
    std::cout << "초기값: 0x" << std::hex << static_cast<int>(byte.get()) << std::endl;

    byte.set(0x55);
    std::cout << "변경값: 0x" << std::hex << static_cast<int>(byte.get()) << std::endl;

    // CString 테스트
    KC::CString str("Hello!");
    std::cout << "초기 문자열: " << str.get() << std::endl;

    str.popBack();
    std::cout << "마지막 글자 제거 후: " << str.get() << std::endl;

    str.popBack();
    std::cout << "한 글자 더 제거 후: " << str.get() << std::endl;

    return 0;
}
