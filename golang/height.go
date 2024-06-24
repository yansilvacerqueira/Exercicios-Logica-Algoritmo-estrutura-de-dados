package main

import "fmt"

func height(){
  var height int;

  var result = 0;

  for i := 0; i < 3; i++ {
    fmt.Scan(&height)
    if height > result {
      result = height
    }
  }

  fmt.Println(result)

}
