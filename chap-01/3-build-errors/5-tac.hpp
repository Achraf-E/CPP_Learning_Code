#pragma once

#include "5-tic.hpp"

class Tic;

struct Tac
{
    // Invert value with tic.
    void swap(Tic& tic);

    int value = 0;
};
