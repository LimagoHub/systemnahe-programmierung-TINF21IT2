//
// Created by JoachimWagner on 01.06.2023.
//

#pragma once

#include <algorithm>
#include "MultClass.h"
class MultipliziererImpl : public Multiplizierer{
public:
    unsigned long mult(unsigned int a, unsigned int b) override {
        unsigned long result = 0;

        for (int i = 0; i < a; ++i) {
            result += b;
        }

        return result;
    }
};
