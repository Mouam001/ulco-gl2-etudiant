import myfibo
if __name__ == '__main__':

    print('TODO')
    
    #print fibo_naive(i) for i from 0 to 10
    for i in range(11):
        print(f"fibo_naive({i}) = {myfibo.fibo_naive(i)}")
    #print fibo_iterative(i) for i from 0 to 10
    print()
    for i in range(11):
        print(f"fibo_naive({i}) = {myfibo.fibo_iterative(i)}")

