from collections import Counter


def solution(participant, completion):
    _participant = dict(Counter(participant))

    for i in completion:
        _participant[i] -= 1

    answer = [key for key in _participant if _participant[key] > 0]
    return answer[0]
