package main

import "fmt"

func drone(){
  var x1, y1 int
  var x2, y2 int

  fmt.Scan(&x1, &y1, &x2, &y2)
  if x1 == x2 && y1 == y2 {
    fmt.Print("Soltar pacote")
  } else {
    fmt.Print("Nao soltar pacote")
  }
}
