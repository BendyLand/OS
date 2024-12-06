#include "os.hpp"

int main()
{
    std::string str = "echo test";
    std::pair<int, std::string> test = OS::run_command(str);

    std::cout << "Num: " << test.first << std::endl;
    std::cout << "Str: " << test.second << std::endl;


    return 0;
}
