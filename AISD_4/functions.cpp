//
//  functions.cpp
//  AISD_4
//
//  Created by Роман Казаев on 05.04.2024.
//

#include <stdio.h>

#include "func.h"

int rnd::Rand::generate_random_number() {
    mt19937 mt(_seed);
    uniform_int_distribution<int> distribution(_min, _max);
    _seed++;
    return distribution(mt);
}

void rnd::Rand::set_seed(int val) {
    _seed = val;
}

void rnd::Rand::set_min(int val) {
    _min = val;
}

void rnd::Rand::set_max(int val) {
    _max = val;
}
