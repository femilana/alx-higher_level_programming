#!/usr/bin/python3
for num in range(ord('z'), ord('a') - 1, -1):
    if num % 2 == 0:
        dif = 0
    else:
        dif = 32
    print('{}'.format(chr(num - dif)), end='')
