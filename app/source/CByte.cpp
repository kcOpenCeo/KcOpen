#include "CByte.h"

namespace KC {

    CByte::CByte(unsigned char val) : value(val) {}

    void CByte::set(unsigned char val) {
        value = val;
    }

    unsigned char CByte::get() const {
        return value;
    }

}
