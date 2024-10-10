// go paretheses.go

package main

func minAddToBalanceParentheses(s string) int {
	left, right := 0, 0
	
	for i := 0; i < len(s); i++ {
		if s[i] == '(' {
			left++
		} else if s[i] == ')' {
			if left > 0 {
				left--
			} else {
				right++
			}
		}
	}
	return left + right
}

func main() {
	s := "()))(("
	print(minAddToBalanceParentheses(s))
}