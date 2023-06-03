//
// Created by JoachimWagner on 01.06.2023.
//

#pragma once

#include "MultClass.h"

class MultipliziererOptimierer : public Multiplizierer{

    Multiplizierer &multiplizierer;

public:
    explicit MultipliziererOptimierer(Multiplizierer &multiplizierer) : multiplizierer(multiplizierer) {}

    unsigned long mult(unsigned int a, unsigned int b) override {
        if(a<b)
            return multiplizierer.mult(a,b);
        return multiplizierer.mult(b,a);
    }
};
