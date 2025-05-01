#pragma once

#include <string>

namespace KC {

    class CString {
    public:
        explicit CString(const std::string& str = "");
        void popBack(); // 마지막 글자 제거
        const std::string& get() const;

    private:
        std::string value;
    };

}
