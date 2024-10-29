#include <vector>
#include <algorithm>
#include "Divisors.h"

std::vector<unsigned long long> divisors(unsigned long long number) {
    std::vector<unsigned long long> result;
    for (unsigned long long i = 1; i * i <= number; ++i) {
        if (number % i == 0) {
            result.push_back(i);
            if (i != number / i) {
                result.push_back(number / i);
            }
        }
    }
    std::sort(result.begin(), result.end());
    return result;
    git remote add origin https ://github.com/ValeriiVask/Updated-project.git
    git branch - M main
        git push - u origin main
}