t = 1200
e = int(input())
a = 0
multiplier = 0

while e > 720:
    e = e - 720
    multiplier = multiplier + 1

a = 31 * multiplier



while e > 0:
    t = t + 1
    e = e - 1

    if int((str(t))[-2]) > 5:
        t = t - 1
        if t == 1259:
            t = 100
        else:
            t = t + 41
    # print('time:',t)
    # print(e) 283981

    if t > 959:
        if int((str(t))[0]) - int((str(t))[1]) == int((str(t))[1]) - int((str(t))[2]) == int((str(t))[2]) - int((str(t))[3]):
            a = a + 1
            # print("and one")
    elif t < 959:
        if int((str(t))[0]) - int((str(t))[1]) == int((str(t))[1]) - int((str(t))[2]):
            a = a + 1
            # print("and one")

print(a)