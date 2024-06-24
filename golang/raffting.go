package main

import "fmt"

func raffting(){
  var n int;

  segurancas := 2;
  result := 0;

  for i := 0; i < 4; i++ {
    fmt.Scan(&n);
    result += (n - segurancas);
  }

  fmt.Print(result);
}
