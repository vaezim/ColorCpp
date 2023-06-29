#include <string>
#include <iostream>
#include "color.h"

namespace cF = color::Foreground;
namespace bF = color::Background;

int main() {

    std::string text = "Colored Text!";
    std::cout << color::Colored(text, cF::DARK_RED) << std::endl;

    return 0;
}
