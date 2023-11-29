#include <string>

std::string incrementString(const std::string &str)
{
    if (isdigit(str.back())){
      short val = str.back() - '0'; // convert the char to int
      if (val == 9){
        return incrementString(str.substr(0, str.length() - 1)) + "0"; // if number is 9, incrementing will result in zero
      }
      else return str.substr(0, str.length() - 1) + std::to_string(++val);
    }
  return str + '1';
}
