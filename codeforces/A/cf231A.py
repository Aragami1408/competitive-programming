n = int(input(""))
problem_matrix = []
for i in range(0,n):
    problem_line = list(int(x) for x in input("").split(" "))
    problem_matrix.append(problem_line)

output = 0

for l in problem_matrix:
    if l.count(1) >= 2:
        output += 1

print(output)