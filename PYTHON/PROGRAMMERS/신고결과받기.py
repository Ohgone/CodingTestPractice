from collections import Counter


def split_str(str):
    a, b = str.split(' ')
    return b


def check(str, stop_id):
    a, b = str.split()
    if b in stop_id:
        return a


def solution(id_list, report, k):
    # 신고 중복 제거
    _report = list(set(report))

    # 피신고자 집계
    cnt_list = [split_str(i) for i in _report]
    cnt_counter = Counter(cnt_list)

    # 정지된 ID 구하기
    stop_id = [i for i in id_list if cnt_counter[i] >= k]

    # 메일 건수 구하기
    mail_cnt_list = [check(i, stop_id) for i in _report]
    mail_cnt_counter = Counter(mail_cnt_list)
    print(mail_cnt_counter)

    # 리턴값 생성
    answer = []
    for i in id_list:
        answer.append(mail_cnt_counter[i])
    return answer
