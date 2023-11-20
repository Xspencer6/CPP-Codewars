#include <string>

std::string solve(const std::string& str){
  int upCount = 0, lowCount = 0;
  for (auto ch : str){
    if (std::islower(ch)) lowCount++;
    else upCount++;
}
  std::string answer;
  if (upCount > lowCount) for (auto ch : str) answer += std::toupper(ch);
  else for (auto n : str) answer += std::tolower(n);
  
  return answer;
}
