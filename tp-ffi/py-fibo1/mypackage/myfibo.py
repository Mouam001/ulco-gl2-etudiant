
def fibo_naive(n: int):
    assert n >= 0
    return n if n < 2 else fibo_naive(n-1) + fibo_naive(n-2)

#implement fibo_iterative
def fibo_iterative(n :int):
    assert n >= 0
    if n < 2:
        return n
    fibo_prev = 0
    fibo_recc = 1
    for i in range(2, n + 1):
        fibo_next = fibo_prev + fibo_recc
        fibo_prev, fibo_recc = fibo_recc, fibo_next
    return fibo_recc



