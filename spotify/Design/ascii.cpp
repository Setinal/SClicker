#include <thread>
#include "ascii.h"

void ascii::ascii1() {
    std::string s = R"(
 _____             _   _  __       
/  ___|           | | (_)/ _|      
\ `--. _ __   ___ | |_ _| |_ _   _ 
 `--. \ '_ \ / _ \| __| |  _| | | |
/\__/ / |_) | (_) | |_| | | | |_| |
\____/| .__/ \___/ \__|_|_|  \__, |
      | |                     __/ |
      |_|                    |___/ 

)";
    std::string delimiter = "\n";
    size_t pos = 0;
    std::string token;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        std::cout << token.c_str() << std::endl;
        s.erase(0, pos + delimiter.length());
        std::this_thread::sleep_for(std::chrono::milliseconds {50});
    }

}