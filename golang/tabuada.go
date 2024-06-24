package main

import "fmt"

func tabuada(){
  var n int
  fmt.Scan(&n)

  for i := 0; i < 101; i++ {
    fmt.Println(i * n)
  }
}
