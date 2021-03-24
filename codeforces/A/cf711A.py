n=int(input(""))
sv=[]
isyes=False
for i in range(0,n):sv.append(input(""))

for i in range(0,n):
    if sv[i][:2] == 'OO':
        isyes=True
        sv[i][:2]="++"
        break
    elif sv[i][3:]=='OO':
        isyes=True
        sv[i][3:]=='++'
        break

if isyes:
    print("YES")
    for s in sv: print(s)
else:
    print("NO")
