#include <string>
#include <cstdint>
#include <bitset>

std::string add_binary(uint64_t a, uint64_t b)
{
  std::string binary = std::bitset<8>(a + b).to_string();
  return binary.erase(0, binary.find('1'));
}
