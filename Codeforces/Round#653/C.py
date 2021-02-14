import math
t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    string = input()
    stack = []
    for i in string:
        if len(stack) == 0:
            stack.append(i)
        else:
            if stack[-1] == '(' and i == ')':
                stack.pop(-1)
            else:
                stack.append(i)
    print(math.floor(len(stack)/2))