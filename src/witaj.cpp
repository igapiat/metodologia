#include "witaj.hpp"
std::string imie(std::string_view name) {
return std::string("Witaj ").append(name).append("!!!");
}