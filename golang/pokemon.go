package main

import "fmt"

func pokemon(){
  var n, m int

  var arr_n [3]int
  var arr_m [3]int

  for i := 0; i < 3; i++ {
    fmt.Scan(&n)
    arr_n[i] = n;
  }

  for i := 0; i < 3; i++ {
    fmt.Scan(&m)
    arr_m[i] = m;
  }

  for i := 0; i < 3; i++ {
    if (arr_m[i] != 0) {
      fmt.Print(arr_m[i] + arr_n[i], " ") 
    } else {
      fmt.Print(arr_n[i], " ") 
    }
  }
}
