n = int(input())
dictionary = {}
for i in range(n):
    string = input()
    if string not in dictionary:
        dictionary[string] = 0
    else:
        dictionary[string]+=1
print(max(dictionary, key=dictionary.get))