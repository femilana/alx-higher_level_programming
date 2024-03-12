#!/usr/bin/python3
for num in range(ord('z'), ord('a') - 1, -1):
    if num % 2 == 0:
        difference = 0
    else:
        difference = 32
    print('{}'.format(chr(num - difference)), end='')
