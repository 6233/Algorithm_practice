package main

import "fmt"

func main() {
	fmt.Println(solution([]int{1, 1, 1, 1, 1}, 3))
}

func solution(numbers []int, target int) int {
	answer := 0
	nextCalculator(numbers, "+", target, 0, &answer)
	nextCalculator(numbers, "-", target, 0, &answer)
	return answer
}

func nextCalculator(partialNumber []int, pm string, target int, valueNow int, ans* int) {
	if pm == "+" {
		value := valueNow
		value += partialNumber[0]
		if len(partialNumber) == 1 {
			if value == target {
				*ans = *ans + 1
			}
		} else {
			nextCalculator(partialNumber[1:], "+", target, value, ans)
			nextCalculator(partialNumber[1:], "-", target, value, ans)
		}
	} else if pm == "-" {
		value := valueNow
		value -= partialNumber[0]
		if len(partialNumber) == 1 {
			if value == target {
				*ans = *ans + 1
			}
		} else {
			nextCalculator(partialNumber[1:], "+", target, value, ans)
			nextCalculator(partialNumber[1:], "-", target, value, ans)
		}
	}
}

