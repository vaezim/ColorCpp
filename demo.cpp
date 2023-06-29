#include <string>
#include <vector>
#include <iostream>
#include "include/color.h"

namespace cF = color::Foreground;
namespace bF = color::Background;

int main() {

    // Heading
    std::cout << color::Colored("\n\t\t*** Color Cpp Demo ***\t\t\n", color::BOLD) << std::endl;

    // Foreground colors
    const std::string foreground_text = "\tColored Text";
    const std::vector<std::string> foreground_colors {
        cF::BLACK,
        cF::DARK_RED,
        cF::DARK_GREEN,
        cF::DARK_YELLOW,
        cF::DARK_BLUE,
        cF::DARK_MAGENTA,
        cF::DARK_CYAN,
        cF::DARK_WHITE,
        cF::LIGHT_BLACK,
        cF::LIGHT_RED,
        cF::LIGHT_GREEN,
        cF::LIGHT_YELLOW,
        cF::LIGHT_BLUE,
        cF::LIGHT_MAGENTA,
        cF::LIGHT_CYAN,
        cF::WHITE
    };
    size_t fSize = (size_t)foreground_colors.size()/2;
    for (size_t i=0; i < fSize; i++) {
        std::cout << color::Colored(foreground_text, foreground_colors[i]) << "\t\t";
        std::cout << color::Colored(foreground_text, foreground_colors[i+fSize]) << std::endl;
    }

    // Background colors
    const std::string background_text = "\tColored Background";
    const std::vector<std::string> background_colors {
        bF::BLACK,
        bF::DARK_RED,
        bF::DARK_GREEN,
        bF::DARK_YELLOW,
        bF::DARK_BLUE,
        bF::DARK_MAGENTA,
        bF::DARK_CYAN,
        bF::DARK_WHITE,
        bF::LIGHT_BLACK,
        bF::LIGHT_RED,
        bF::LIGHT_GREEN,
        bF::LIGHT_YELLOW,
        bF::LIGHT_BLUE,
        bF::LIGHT_MAGENTA,
        bF::LIGHT_CYAN,
        bF::WHITE
    };
    size_t bSize = (size_t)background_colors.size()/2;
    for (size_t i=0; i < bSize; i++) {
        std::cout << color::Colored(background_text, background_colors[i]) << "\t";
        std::cout << color::Colored(background_text, background_colors[i+bSize]) << std::endl;
    }

    std::cout << "\n" << std::endl;
    return 0;
}
