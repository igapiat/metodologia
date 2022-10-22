#include <iostream>
#include "hello.hpp"
int main(int argc, char** argv) {
if (argc < 2) {
std::cout << hello("Unnamed") << std::endl;
} else {
std::cout << hello(argv[1]) << std::endl;
}