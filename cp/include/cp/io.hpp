#pragma once

#include <iostream>
#include <stdexcept>

#include <cp/string.hpp>

namespace cp {

  /**
   * @brief Prints the given value to the console.
   *
   */
  void print(auto value) {
    std::cout << value;
  }

  /**
   * @brief Prints the given boolean to the console.
   *
   */
  void print(bool value);

  void println();

  /**
   * @brief Prints the given value to the console, followed by a new line.
   *
   */
  void println(auto value) {
    std::cout << value << std::endl;
  }

  /**
   * @brief Prints the given boolean to the console, followed by a new line.
   *
   */
  void println(bool value);

}