from bisect import bisect_left


def solution(citations):
    citations.sort()
    length = len(citations)

    while length:
        if len(citations[bisect_left(citations, length):]) >= length:
            return length
        length -= 1
