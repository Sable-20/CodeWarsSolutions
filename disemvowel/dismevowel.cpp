#include <string>
#include <regex>
std::string disemvowel(std::string str)
{
  std::regex r("[aeiouAEIOU]");
  return std::regex_replace(str, r, "");
}
