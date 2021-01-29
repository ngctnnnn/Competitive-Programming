def check(s1, s2):
    for i in range(len(s2)):
        if s2[i] in s1:
            print(s1.index(s2[i]))
            for j in range(0, s1.index(s2[i]) + 1):
                s1.replace(s1[j], '')
        else:
            return False
    print(s1)
    return True

s1 = input()
s2 = input()
if check(s1, s2) == True:
    print('YES')
else:
    print('NO')