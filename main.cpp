//
// Created by Jason Chang on 2019-02-01.
//

#include "main.h"
#include <iostream>
#define bool int
#define true 1
#define false 0

int main() {
    char ws_arr[] = {' ', '\f', '\n', '\r', '\t', '\v'};

    std::cout << sizeof(ws_arr) << std::endl;

    return 0;
}
