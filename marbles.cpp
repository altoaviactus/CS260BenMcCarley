#include <iostream>
#include <random>
#include <string>
#include <iterator>
#include <algorithm>

int main()
{
    std::string in = "rbgy", out;
    std::sample(in.begin(), in.end(), std::back_inserter(out),
                1, std::mt19937{std::random_device{}()});
    std::cout << "your random marble initial is " << out << '\n';
}
