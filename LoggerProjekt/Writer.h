//
// Created by JoachimWagner on 01.06.2023.
//

#pragma once
#include <string>

class Writer {
public:
    virtual void write(std::string message) const = 0;
};
