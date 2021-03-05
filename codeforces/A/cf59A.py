lowercase = "qwertyuiopasdfghjklzxcvbnm"
uppercase = "QWERTYUIOPASDFGHJKLZXCVBNM"

l_counter = 0
u_counter = 0
s = input("")

for c in s:
    if c in lowercase:
        l_counter += 1
    if c in uppercase:
        u_counter += 1

print(s.upper() if (u_counter > l_counter) else s.lower())
