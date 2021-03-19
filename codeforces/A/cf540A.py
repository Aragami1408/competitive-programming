n=int(input(""))
a=input("")
b=input("")
d="1234567890"
count=0
for i in range(0,n):
    count += min(abs(d.index(a[i])-d.index(b[i])),len(d)-abs(d.index(a[i])-d.index(b[i])))

print(count)
