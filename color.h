#include <string>
#include <ostream>

namespace color {

    const std::string DEFAULT           = "\x1B[0m";
    const std::string BOLD              = "\x1B[1m";
    const std::string UNDERLINE         = "\x1B[4m";

    namespace Foreground {

        // Common colors
        #define RED            
        #define GREEN
        #define YELLOW
        #define BLUE
        #define MAGENTA
        #define CYAN
        #define GRAY

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

    namespace Background {

        // Common colors
        #define RED            
        #define GREEN
        #define YELLOW
        #define BLUE
        #define MAGENTA
        #define CYAN
        #define GRAY

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
        Colored(const std::string& str, const std::string& color_code) : 
            m_str(str), m_color_code(color_code) {};
            friend std::ostream& operator<<(std::ostream& os, const Colored& obj);
    private:
        const std::string& m_str;
        const std::string& m_color_code;
    };

    std::ostream& operator<<(std::ostream& os, const Colored& obj) {
        os << obj.m_color_code << obj.m_str << color::DEFAULT;
        return os;
    }

}  // namespace color
