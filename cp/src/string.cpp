#include <cp/string.hpp>

cp::string::string() { value = ""; }
cp::string::string(const char* const other) { value = other; }
cp::string::string(const std::string& other) { value = other; }
cp::string::~string() {  }

cp::string::operator std::string() const { return value; }

cp::string& cp::string::operator=(cp::string str) {
  value = str.value;
  return *this;
}

cp::string &cp::string::operator=(const char *s1) {
  value = s1;
  return *this;
}

cp::string& cp::string::operator=(std::string str) {
  value = str;
  return *this;
}

bool cp::string::operator==(const cp::string& other) const {
  return value == other.value;
}

cp::string cp::string::operator+(const cp::string& other) const {
  return cp::string(value + other.value);
}

int cp::string::length() const { 
  return value.length(); 
}

void cp::string::clear() { value.clear(); }
