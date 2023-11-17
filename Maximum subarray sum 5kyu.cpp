// function that gets the maximum sum of subarray
int maxSubArray(const std::vector<int>& numbers){
    int answer = 0;
    for(int a = 0; a < numbers.size(); a++){
        for(int b = a; b < numbers.size(); b++){
            int currentSum = 0;
            for(int k = a; k <= b; k++) {
                currentSum += numbers[k];
            }
            answer = std::max(answer, currentSum); // compares the current sum and the local best sum then stores the higher number
        }
    }
    return answer;
}
