n,k,l,c,d,p,nl,np = map(int , input().split())
li = []
ns = 1
total_drink = k * l
total_toast_using_drink = total_drink // nl
total_lime = c * d
total_toast_using_lime = total_lime // ns
total_salt = p
total_toast_using_salt = total_salt // np
li.append(total_toast_using_drink)
li.append(total_toast_using_lime)
li.append(total_toast_using_salt)

ans = min(li) / n 
print(int(ans))

