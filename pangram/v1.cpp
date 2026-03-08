#include <string>
#include <algorithm>
#include <unordered_set>

bool is_pangram(const std::string& t) {
  std::unordered_set<char> unique;
  
  std::string s = t;
  s.erase(std::remove_if(s.begin(), s.end(), 
[]( auto const& c ) -> bool { return !std::isalnum(c); } ), s.end());
  std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return std::toupper(c); });
  s.erase(std::remove_if(s.begin(), s.end(), ::isdigit), s.end());
  std::sort(s.begin(), s.end());
  
  for (unsigned long i = 0; i < s.size(); i++) {
    unique.insert(s[i]);
  }
  
  return (unique.size() == 26) ? true : false;
}
