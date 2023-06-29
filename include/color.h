#include <string>
#include <ostream>

namespace color {

    const std::string DEFAULT           = "\x1B[0m";
    const std::string BOLD              = "\x1B[1m";
    const std::string UNDERLINE         = "\x1B[4m";

    namespace Foreground {

        // Dark colors
        const std::string BLACK             = "\x1B[30m";
        const std::string DARK_RED          = "\x1B[31m";
        const std::string DARK_GREEN        = "\x1B[32m";
        const std::string DARK_YELLOW       = "\x1B[33m";
        const std::string DARK_BLUE         = "\x1B[34m";
        const std::string DARK_MAGENTA      = "\x1B[35m";
        const std::string DARK_CYAN         = "\x1B[36m";
        const std::string DARK_WHITE        = "\x1B[37m";

        // Light colors
        const std::string LIGHT_BLACK       = "\x1B[90m";
        const std::string LIGHT_RED         = "\x1B[91m";
        const std::string LIGHT_GREEN       = "\x1B[92m";
        const std::string LIGHT_YELLOW      = "\x1B[93m";
        const std::string LIGHT_BLUE        = "\x1B[94m";
        const std::string LIGHT_MAGENTA     = "\x1B[95m";
        const std::string LIGHT_CYAN        = "\x1B[96m";
        const std::string WHITE             = "\x1B[97m";

    }  // namespace Foreground

    // Common colors
    const std::string& RED                  = Foreground::LIGHT_RED;
    const std::string& GREEN                = Foreground::LIGHT_GREEN;
    const std::string& YELLOW               = Foreground::LIGHT_YELLOW;
    const std::string& BLUE                 = Foreground::LIGHT_BLUE;
    const std::string& MAGENTA              = Foreground::LIGHT_MAGENTA;
    const std::string& CYAN                 = Foreground::LIGHT_CYAN;
    const std::string& GRAY                 = Foreground::DARK_WHITE;

    namespace Background {

        // Dark colors
        const std::string BLACK             = "\x1B[40m";
        const std::string DARK_RED          = "\x1B[41m";
        const std::string DARK_GREEN        = "\x1B[42m";
        const std::string DARK_YELLOW       = "\x1B[43m";
        const std::string DARK_BLUE         = "\x1B[44m";
        const std::string DARK_MAGENTA      = "\x1B[45m";
        const std::string DARK_CYAN         = "\x1B[46m";
        const std::string DARK_WHITE        = "\x1B[47m";

        // Light colors
        const std::string LIGHT_BLACK       = "\x1B[100m";
        const std::string LIGHT_RED         = "\x1B[101m";
        const std::string LIGHT_GREEN       = "\x1B[102m";
        const std::string LIGHT_YELLOW      = "\x1B[103m";
        const std::string LIGHT_BLUE        = "\x1B[104m";
        const std::string LIGHT_MAGENTA     = "\x1B[105m";
        const std::string LIGHT_CYAN        = "\x1B[106m";
        const std::string WHITE             = "\x1B[107m";

    }  // namespace Background

    class Colored {
    public:
        Colored(const std::string& str, 
                const std::string& fg_color, 
                const std::string& bg_color="",
                const std::string& format="") : 
            m_str(str), m_fgColor(fg_color), m_bgColor(bg_color), m_format(format) {};
        friend std::ostream& operator<<(std::ostream& os, const Colored& obj);
    private:
        const std::string& m_str;
        const std::string& m_fgColor;
        const std::string& m_bgColor;
        const std::string& m_format;
    };

    std::ostream& operator<<(std::ostream& os, const Colored& obj) {
        os << obj.m_fgColor << obj.m_bgColor << obj.m_format << obj.m_str << color::DEFAULT;
        return os;
    }

}  // namespace color
