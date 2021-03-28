n=int(input(""))
x=list(map(int,input("").split(" ")))

for i in range(0,n):
    max_num=max(abs(x[i]-x[0]),abs(x[i]-x[n-1]))
    if(i==0): min_num=abs(x[i]-x[i+1])
    elif(i==(n-1)):min_num=abs(x[i]-x[i-1]);
    else:min_num=min(abs(x[i]-x[i+1]),abs(x[i]-x[i-1]))
    print(f"{min_num} {max_num}")