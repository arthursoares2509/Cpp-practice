#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>

int main() {
    std::string s = "Hello World";

    std::cout << s << std::endl;
    std::cout << s.size() << std::endl;
    std::cout << s[0] << std::endl;
    std::cout << s.substr(0, 5) << std::endl;

    s.append("!!!");
    std::cout << s << std::endl;

    s.insert(5, " Amazing");
    std::cout << s << std::endl;

    s.erase(5, 8);
    std::cout << s << std::endl;

    s.replace(6, 5, "Universe");
    std::cout << s << std::endl;

    std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    std::cout << s << std::endl;

    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    std::cout << s << std::endl;

    std::reverse(s.begin(), s.end());
    std::cout << s << std::endl;

    std::reverse(s.begin(), s.end());
    std::cout << s.find("world") << std::endl;
    std::cout << s.find("universe") << std::endl;

    std::stringstream ss("one two three four");
    std::string word;
    std::vector<std::string> words;
    while (ss >> word) words.push_back(word);
    for (auto &w : words) std::cout << w << std::endl;

    std::string joined;
    for (size_t i = 0; i < words.size(); i++) {
        joined += words[i];
        if (i != words.size() - 1) joined += "-";
    }
    std::cout << joined << std::endl;

    std::string trim = "   spaced text   ";
    trim.erase(0, trim.find_first_not_of(" \t\n\r"));
    trim.erase(trim.find_last_not_of(" \t\n\r") + 1);
    std::cout << trim << std::endl;

    return 0;
}
