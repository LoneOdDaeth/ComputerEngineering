for i in range(2,100):

    prime = 1

    for k in range(2, i):
        if i % k == 0:
            prime = 0

    if prime != 0:
        print(i)