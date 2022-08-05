def solution(array, commands):
    answer = []
    for i, j, k in commands:
        array_temp = array[i-1:j]
        array_temp.sort()
        answer.append(array_temp[k-1])
    return answer
