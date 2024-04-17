def oklitAlgorithm(n, m):
    while(n != 0):
        r = m % n
        m = n
        n = r
    print(m, n)
    print(m)

oklitAlgorithm(24, 60)