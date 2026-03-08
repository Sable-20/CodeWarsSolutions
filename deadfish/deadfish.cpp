#include <vector>                          ops and have no effect.

std::vector<int> parse(std::string_view data)
{
  std::vector<int> res;
  int tmp = 0;
  for (char ch : data)
  {
    switch (ch)
    {
    case 'i':
      tmp++;
      break;
    case 'd':
      tmp--;
      break;
    case 's':
      tmp *= tmp;
      break;
    case 'o':
      res.push_back(tmp);
      break;
    }
  }
  return res;
}
