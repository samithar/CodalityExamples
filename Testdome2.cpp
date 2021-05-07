#include <tuple>
#include <stdexcept>
#include <iostream>
#include <string>
#include <math.h>

std::pair<double, double> findRoots(double a, double b, double c)
{
    std::pair<double, double> answer;
    double delta, deno1, deno2, neum;
    delta = sqrt(b * b - 4 * a * c);
    deno1 = -b - delta;
    deno2 = -b + delta;
    neum = 2 * a;
    answer.first = deno1 / neum;
    answer.second = deno2 / neum;
    return answer;
    // throw std::logic_error("Waiting to be implemented");
}

#ifndef RunTests
int main()
{
    std::pair<double, double> roots = findRoots(2, 10, 8);
    std::cout << "Roots: " + std::to_string(roots.first) + ", " + std::to_string(roots.second);
}
#endif