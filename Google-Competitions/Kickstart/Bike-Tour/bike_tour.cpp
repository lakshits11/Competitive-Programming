/*
 * Problem Statement: https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc8/00000000002d82e6
 * Author: striker
 *
 * Copyright 2020 striker
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
*/

#include <iostream>
#include <array>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <cstdio>

typedef unsigned long long ull_t;
typedef long long ll_t;

#define FAST_IO(value) std :: ios :: sync_with_stdio(value); std :: cin.tie(NULL)
#define MOD 1000000007 // Constant (prime number) used in most competitive programming problems to reduce the answer to a 32-bit integer.
#define PI 3.141592653589793 // Number of digits(15) of Pi which JPL uses for Interplanetary Caculations.
#define GOLDEN_RATIO 1.618033988749895 // Number of digits(15).

int main(void) {
    FAST_IO(0);
    int test;
    std :: cin >> test;
    for(int t = 1; t <= test; ++t) {
        int n;
        std :: cin >> n;
        std :: vector <int> checkpoint_height(n);
        for(int i = 0; i < n; ++i) {
            std :: cin >> checkpoint_height[i];
        }
        int peak_count = 0;
        for(int i = 1; i < (n - 1); ++i) {
            if(checkpoint_height[i] > checkpoint_height[i - 1] && checkpoint_height[i] > checkpoint_height[i + 1]) {
                ++peak_count;
            }
        }
        std :: cout << "Case #" << t << ": " << peak_count << std :: endl;
    }
    return 0;
}
