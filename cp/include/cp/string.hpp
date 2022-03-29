#pragma once

#include <string>

namespace cp {
  /**
   * @brief Represents a string of characters with `std::string` as the underlying representation.
   * 
   */
  class string {
  private:
    std::string value;

  public:
    /**
     * @brief Construct an empty string.
     *
     */
    string();

    /**
     * @brief Construct a new string object from a character array.
     * 
     */
    string(const char* const other);

    /**
     * @brief Construct a new string object from the given `std::string`.
     * 
     */
    string(const std::string& other);

    /**
     * @brief Destroy the string object.
     * 
     */
    ~string();

    /**
     * @brief Make this string an empty string.
     * 
     */
    void clear();

    /**
     * @brief Report the number of characters in `this` string.
     * 
     */
    int length() const;

    /**
     * @brief Implicit converstion to `std::string`.
     * 
     * @return the underlying representation
     */
    operator std::string() const;

    /**
     * @brief Replace the contents of `this` with `str`.
     *
     * @param str string to be used as source to initialize the string with
     * @return `*this`
     */
    cp::string& operator=(const cp::string str);
    cp::string& operator=(const std::string str);
    cp::string& operator=(const char* str);

    /**
     * @brief Reports if `this` and `other` are equal.
     * 
     * @return true iff `this` and `other` are equal
     */
    bool operator==(const string& other) const;

    /**
     * @brief Produces the concatenation of `this` with `other`.
     * 
     * @return the concatenated string
     * 
     * @retval "india" if `this` is "in" and `other` is "dia"
     */
    cp::string operator+(const string& other) const;

    /**
     * @brief Performs stream output for `cp::string`.
     * 
     * @throws std::ios_base::failure if an exception is thrown during output.
     * 
     */
    friend std::ostream& operator<<(std::ostream &os, const cp::string &s) {
      os << s.value;
      return os;
    }

    /**
     * @brief Performs stream input for `cp::string`.
     * 
     * @throws std::ios_base::failure if no characters are extracted from is (e.g the stream is at end of file, or consists of whitespace only), or if an exception is thrown during input.
     * 
     */
    friend std::istream& operator>>(std::istream &is, cp::string &s) {
      std::string t;
      is >> t;
      s.value = t;
      return is;
    }
  };

  /**
   * @brief Empty string.
   * 
   */
  const cp::string EMPTY_STR = string();
  /**
   * @brief New line.
   * 
   */
  const cp::string NEWLINE = string("\n");

}
