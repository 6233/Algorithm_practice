import(
	"strings"
)

func contains(s []string, str string) bool {
	for _, v := range s {
		if v == str {
			return true
		}
	}

	return false
}

func solution(id_list []string, report []string, k int) []int { 
	
	// 유저 id
	userIdxId := make(map[int]string)
	// 해당 유저가 신고당한 횟수
	reportedData := make(map[string]int, 0)
	// 해당 유저가 신고
	reportData := make(map[string][]string)

	
	for idx, name := range id_list {
		userIdxId[idx] = name;
	}
	
	for _, reported := range report {
		slice := strings.Split(reported, " ")
	
		if !contains(reportData[slice[0]], slice[1]) {
			reportData[slice[0]] = append(reportData[slice[0]], slice[1])
			reportedData[slice[1]]++
		} 
	}
	
	
	result := []int{}
	for idx, key := range userIdxId {
		println(idx, key)
		result = append(result, 0)
	}
	
	for idx, name := range userIdxId {
		for _, val := range reportData[name] {
			if reportedData[val] >= k {
				result[idx]++
			}   
		}
	}
	
	return result
}