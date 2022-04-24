import "strconv"

func solution(s string) int {
    ans := ""
    engToNum := map[string]string {
        "zero":"0",
        "one":"1",
        "two":"2",
        "three":"3",
        "four":"4",
        "five":"5",
        "six":"6",
        "seven":"7",
        "eight":"8",
        "nine":"9",
    }
    subs := ""
    for _, cs := range s {
        c := string(cs)
        _, err := strconv.Atoi(c)
        
        if err != nil {
            subs += c
        }
        
        if subs != "" {
            if num, found := engToNum[subs]; found {
                ans += num
                subs = ""
            }
        }
        
        if err == nil {
            ans += c
        }
        
    }
    answer, _ := strconv.Atoi(ans)
    return answer
}
