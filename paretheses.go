// go paretheses.go

package main

func minAddToMakeValid(s string) int {
	j := 0
	
	for i := 0; i < len(s); i++ {
		// if s[i] == '(' && (i+1 >= len(s) && s[i+1] != ')') {
		// 	j += 1
		// }
		// if s[i] == ')' && (i-1 < 0 && s[i-1] != '(') {
		// 	j -= 1
		// }
		if s[i] == '(' &&  i+1 < len(s) && s[i+1] == '(' {
			j += 1
		}
		if s[i] == ')' && i+1 < len(s)  && s[i+1] == ')' {
			j += 1
		}else {
		if s[len(s)-1] == '(' && s[len(s)-2] == '('  &&  len(s) - 2 >= 0 {
			j += 1
		}
		if s[len(s) - 1] == ')'  && s[len(s)-2] == ')' && len(s) - 2 >= 0 {
			j += 1
		}
	}	
	}
	if j < 0 {
		j *= -1
	}
	return j
}

func main() {
	s := "()))(("
	print(minAddToMakeValid(s))
}