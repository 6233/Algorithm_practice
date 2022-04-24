func isPrime(num int) bool {
    for i:=2; i*i<=num; i++ {
        if(num % i == 0) {
            return false
        }
    }
    return true
}

func solution(nums []int) int {
    answer := 0
    
    for i := 0; i < len(nums)-2; i++ {
        for j := i+1; j < len(nums)-1; j++ {
            for k := j+1; k < len(nums); k++ {
                if isPrime(nums[i] + nums[j] + nums[k]) {
                    answer++
                }
            }
        }
    }
    
    return answer
}
