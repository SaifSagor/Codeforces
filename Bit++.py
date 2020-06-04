n = int(input())
x = 0

for i in range(n):
    w = input()
    if '+' in w:
        x = x + 1 
    elif '-' in w:
        x = x - 1
print(x)            
