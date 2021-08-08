package main

import "fmt"

func main() {
	d := []int{97, 30 ,55}
	s := []int{1,30,5}
	fmt.Println(solution(d, s))
}

func solution(progresses []int, speeds []int) []int {
	var answer []int
Loop1:
	for idx := 0; idx < len(progresses); {
		for i, _ := range progresses {
			progresses[i] += speeds[i]
		}

		if progresses[idx] >= 100 {
		Loop2:
			for id, prog := range progresses {
				if prog < 100 {
					answer = append(answer, id-idx)
					idx = id
					break Loop2
				} else if id == len(progresses) -1 {
					answer = append(answer, id-idx +1)
					idx = id + 1
					break Loop1
				}
			}
		}
	}

	return answer
}
