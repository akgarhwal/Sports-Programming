# __akgarhwal__
formula = input().strip()

level = 0
stack = []
MASS = {'H':1,'C':12,'O':16}

N = len(formula)
i = 0
while i<N:
	if formula[i] == '(':
		stack.append('(')
	elif formula[i] == ')':
		t_sum = 0
		ele = stack.pop(-1)
		while ele != '(':
			t_sum += int(ele)
			ele = stack.pop(-1)
		stack.append(t_sum)
	elif formula[i] in ['H','C','O']:
		#print(formula[i])
		stack.append(MASS[formula[i]])
	else:
		#print("D : " + formula[i])
		stack.append((stack.pop(-1)*int(formula[i])))
	i += 1
	#print(stack)

print(sum(stack))

