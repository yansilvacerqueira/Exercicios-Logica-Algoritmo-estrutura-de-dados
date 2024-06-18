package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
    // Cria um novo leitor para ler a entrada do usuário
    reader := bufio.NewReader(os.Stdin)
    
    // Solicita ao usuário para digitar o primeiro número
    fmt.Print("Digite o primeiro número: ")
    // Lê a linha de entrada e remove os espaços em branco
    input1, err := reader.ReadString('\n')
    if err != nil {
        fmt.Println("Erro ao ler a entrada:", err)
        return
    }
    input1 = strings.TrimSpace(input1)
    
    // Converte a string de entrada para um número inteiro
    num1, err := strconv.Atoi(input1)
    if err != nil {
        fmt.Println("Erro ao converter o primeiro número:", err)
        return
    }
    
    // Solicita ao usuário para digitar o segundo número
    fmt.Print("Digite o segundo número: ")
    // Lê a linha de entrada e remove os espaços em branco
    input2, err := reader.ReadString('\n')
    if err != nil {
        fmt.Println("Erro ao ler a entrada:", err)
        return
    }
    input2 = strings.TrimSpace(input2)
    
    // Converte a string de entrada para um número inteiro
    num2, err := strconv.Atoi(input2)
    if err != nil {
        fmt.Println("Erro ao converter o segundo número:", err)
        return
    }
    
    // Calcula a soma dos dois números
    sum := num1 + num2
    
    // Imprime o resultado da soma
    fmt.Println("A soma é:", sum)
}

// second solution

func main2() {
    var num1, num2 int

    _, err := fmt.Scan(&num1)
    if err != nil {
        fmt.Println("Erro ao ler o primeiro número:", err)
        return
    }

    _, err = fmt.Scan(&num2)
    if err != nil {
        fmt.Println("Erro ao ler o segundo número:", err)
        return
    }

    difference := num1 - num2

    fmt.Println( difference)
}
