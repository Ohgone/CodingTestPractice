# for-else  활용

n = int(input())

for _ in range(n):
    arr = list(input())
    temp = []

    for i in arr:
        if i == "(":
            temp.append(i)
        elif i == ")":
            if temp:
                temp.pop()
            else:
                print("NO")
                break
    else:
        if not temp:
            print("YES")
        else:
            print("NO")
    
    
    
    





               

