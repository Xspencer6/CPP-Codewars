// function that gets the maximum sum of subarray
#include <vector>

int maxSequence(const std::vector<int>& arr){
  int answer = 0, current = 0;
  for (int i = 0; i < arr.size(); i++){
    current = std::max(arr[i], current + arr[i]);    // compare the current sum vs the previous sum added with the current arr[i] : just in case the current value is negative, which means the current sum will decrease, thus should not be taken using std::max
    answer = std::max(answer, current);
  }
  return answer;
}
