#include "../src/witaj.hpp"
#include <vector>
#include <iomanip>
#include <iostream>
int main() {
std::vector<std::string> tests = {"", "A", "Bb", "Ccc"};
for (auto test : tests) {
if (imie(test).find("Witaj") == std::string::npos) {
std::cerr << "FAIL: missing \"Witaj\"" << std::endl;
return 1;
}
if (imie(test).find(test) == std::string::npos) {
std::cerr << "FAIL: missing name \"" << test << "\"" << std::endl;
return 1;
}
}
std::cout << "OK" << std::endl;
return 0;

}