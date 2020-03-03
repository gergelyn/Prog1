def bit_wise(a, i):
    while a != 0:
        a = a << 1
        i += 1
    print(i)


bit_wise(1, 0)
