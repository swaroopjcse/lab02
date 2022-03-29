#include <cp/io.hpp>

void cp::print(bool value) {
  cp::print(value? "true": "false");
}

void cp::println() {
  cp::print(cp::NEWLINE);
}

void cp::println(bool value) {
  cp::println(value? "true": "false");
}
