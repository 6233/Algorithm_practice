package main

import "fmt"

func main() {
	fmt.Println(solution([]int{2, 1, 3, 2}, 2))
}
func solution(priorities []int, location int) int {
	var idx int = 0
Loop1:
	for {
		var change bool = false
	Loop2:
		for i := idx; i< len(priorities); i++ {
			for j := i; j< len(priorities); j++ {
				if priorities[i] < priorities[j] {
					temp := priorities[i]
					ss := append(priorities[:i], priorities[i+1:]...)
					priorities = append(ss, temp)
					change = true

					if location == i {
						location = len(priorities) -1
					} else if location < i {

					} else if location > i {
						location = location - 1
					}

					break Loop2
				}
				if j == len(priorities) -1 {
					idx++
				}
			} 
		}

		if ! change {
			break Loop1
		}
	
	}
	return location + 1
}