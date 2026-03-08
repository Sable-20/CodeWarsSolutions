#include <string>
#include <unordered_set>

bool is_pangram(const std::string& string) {
  std::unordered_set<char> set{};
  for(auto& element : string){
    if(std::isalpha(element)){
      set.insert(std::tolower(element));
    }
  }
  return set.size() == 26;
}
