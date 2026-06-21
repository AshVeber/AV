#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>

int main() {
    std::string input;
    transform(input.begin(), input.end(), input.begin(), ::tolower);

    while(true) {
        std::cout << ">> ";
        getline(std::cin, input);

        if(input.find("wake") != std::string::npos && input.find("up") != std::string::npos || input.find("wake") != std::string::npos) {
            std::cout << "I am always here, sir." << std::endl;
            continue;
        }else
        if(input.find("hi") != std::string::npos || input.find("hello") != std::string::npos) {
            std::cout << "Hello, sir." << std::endl;
            continue;
        }else
        if(input.find("bye") != std::string::npos || input.find("goodbye") != std::string::npos) {
            std::cout << "Goodbye, sir." << std::endl;
            break;
        } else 
        if(input.find("goodnight") != std::string::npos || input.find("night") != std::string::npos){
            std::cout << "Goodnight, sir." << std::endl;
            break;
        }else
        if(input.find("google") != std::string::npos && input.find("open") != std::string::npos || input.find("google") != std::string::npos) {
            std::cout << "Yes, sir." << std::endl;
            system("open firefox");
            break;
        }else
        if(input.find("spotify") != std::string::npos && input.find("open") != std::string::npos || input.find("spotify") != std::string::npos) {
            std::cout << "I am on it, sir." << std::endl;
            system("start spotify:");
            break;
        }else
        if(input.find("youtube") != std::string::npos && input.find("open") != std::string::npos || input.find("youtube") != std::string::npos) {
            std::cout << "Time to relax, sir." << std::endl;
            system("start https://www.youtube.com/");
            break;
        }else
        if(input.find("help") != std::string::npos) {
            std::cout << "I am AV. Your assistant.\n==========================\n    -*. WHAT I CAN .*-\n==========================\n1. Open\n   a)google\n   b)spotify\n   c)youtube\n2. Be a Calculator" << std::endl;
            continue;
        }else{

        }
    }
    return 0;
}
