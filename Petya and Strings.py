f = input()
l = input()
s1 = f.lower()
s2 = l.lower()

count = 0

for i in range(len(s1)):
    if s1[i] == s2[i]:
        continue
    elif s1[i] < s2[i]:
        count = count - 1 
        break
    elif s1[i] > s2[i]:
        count = count + 1
        break
print(count)    
