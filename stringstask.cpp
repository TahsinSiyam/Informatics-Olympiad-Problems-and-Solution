#include <iostream>
#include <string>
#include <algorithm> // Required for std::transform
#include <cctype>    // Required for std::tolower

int main() {
    std::string text;
    std::cin>>text;
    
    // Convert the string to lowercase in-place
    std::transform(text.begin(), text.end(), text.begin(), [](unsigned char c) {
        return std::tolower(c);
    });

    std::cout << text << std::endl; // Output: hello, world!
    return 0;
}
