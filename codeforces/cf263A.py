import math
problem_matrix = []

for i in range(0,5):
    problem_line = list(int(x) for x in input("").split(" "))
    problem_matrix.append(problem_line)

pivot = [[index, row.index(1)] for index, row in enumerate(problem_matrix) if 1 in row]

result = abs(pivot[0][0]-2) + abs(pivot[0][1]-2)



print(result)
