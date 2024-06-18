package main

import "fmt"

func ingla() {

  var num int
  fmt.Scan(&num)

  if num >= 86 && num <= 100 {
    fmt.Println("A")
  } else if num >= 61 && num <= 85 {
    fmt.Println("B")
  } else if num >= 36 && num <= 60 {
    fmt.Println("C")
  } else if num >= 1 && num <= 35 {
    fmt.Println("D")
  } else {
    fmt.Println("E")
  }

}

