#include <concepts>
#include<iostream>

void print_strings(std::convertible_to<std::string_view> auto&& ...s)
{
    for (auto v : std::initializer_list<std::string_view>{ s... })
        std::cout << v << " ";
    std::cout << std::endl;
}

int main()
{
    std::cout << "variadic templates idioms for c++20\n";

    {
        print_strings("one", std::string{ "two" });
    }
    return 0;
}