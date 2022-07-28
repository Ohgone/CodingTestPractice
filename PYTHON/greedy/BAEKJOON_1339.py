result_dict = {'A': 0, 'B': 0, 'C': 0, 'D': 0, 'E': 0, 'F': 0, 'G': 0, 'H': 0, 'I': 0, 'J': 0, 'K': 0, 'L': 0,
               'M': 0, 'N': 0, 'O': 0, 'P': 0, 'Q': 0, 'R': 0, 'S': 0, 'T': 0, 'U': 0, 'V': 0, 'W': 0, 'X': 0, 'Y': 0, 'Z': 0}

n = int(input())
arr_input = [input() for _ in range(n)]

for i in arr_input:
    for j in range(len(i)):
        result_dict[i[j]] += 10 ** (len(i) - j - 1)

result_list = list(filter(lambda x: x > 0, result_dict.values()))

result_list.sort(reverse=True)

result = 0
for i in range(len(result_list)):
    result += result_list[i] * (9 - i)

print(result)
