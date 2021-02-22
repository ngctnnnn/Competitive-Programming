s = input()
ok1, ok2, ok3 = False, False, False
for i in range(len(s)):
    if 'a' <= s[i] <= 'z':
        ok1 |= 1
    elif 'A' <= s[i] <= 'Z':
        ok2 |= 1
    elif '0' <= s[i] <= '9':
        ok3 |= 1
    else:
        continue
if ok1 == True and ok2 == True and ok3 == True:
    print('YES')
else:
    print('NO')