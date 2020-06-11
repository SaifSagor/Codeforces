no_of_friends = int(input())

finger = list(map(int , input().split()))
 
totalFinger = sum(finger)
li = []

for i in range(1,6):
    if (totalFinger + i) % (no_of_friends+1) != 1:
        li.append(i)

ans = len(li)

print(ans)
