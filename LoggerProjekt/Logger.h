//
// Created by JoachimWagner on 01.06.2023.
//

#pragma once
#include <string>
#include <iostream>
#include "Writer.h"
class Logger {

    Writer &writer;

public:
    explicit Logger(Writer &writer) : writer(writer) {}

    void log(std::string message){
        const std::string prefix ="Prefix: ";
        writer.write(prefix + message);
    }
};
