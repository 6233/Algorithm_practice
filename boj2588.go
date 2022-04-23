package main

import "fmt"

func main() {
   var x, y int
   fmt.Scanf("%d\n%d", &x, &y)

   var result [3]int
   result[0] = x * (y % 10)
   result[1] = x * ((y / 10) % 10 ) 
   result[2] = x * (y / 100)

   res := result[2] * 100 + result[1] *10 + result[0]  
   fmt.Println(result[0])
   fmt.Println(result[1])
   fmt.Println(result[2])
   fmt.Println(res)
}