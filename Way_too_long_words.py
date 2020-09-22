num = int(input())
li = []
for _ in range(num):
    name = input()
    li.append(name)

for item in li:
    if len(item)>10:
        word = item[0] + str(len(item)-2) + item[len(item)-1]
        print(word)
    else:
        print(item)    
