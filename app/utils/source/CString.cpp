#include "CString.h"

namespace KC {

    CString::CString(const std::string& str) : value(str) {}

    void CString::popBack() {
        if (!value.empty()) {
            value.pop_back();
        }
    }

    const std::string& CString::get() const {
        return value;
    }

}
