#pragma once

namespace KC {

    class CByte {
    public:
        explicit CByte(unsigned char val = 0);
        void set(unsigned char val);
        unsigned char get() const;

    private:
        unsigned char value;
    };

}
