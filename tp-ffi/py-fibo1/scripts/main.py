from mypackage.myfibo import fibo_naive
from mypackage.myfibo import fibo_iterative
if __name__ == '__main__':

    print('TODO')
    
    #print fibo_naive(i) for i from 0 to 10
    print("fibo naive")
    for i in range(11):
        print(f"fibo_naive({i}) =", fibo_naive(i))

    # print fibo_iterative(i) for i from 0 to 10
    print()
    print("fibo iterative")
    for i in range(11):
        print(f"fibo_naive({i}) =", fibo_iterative(i))

