## Collatz Conjecture
n = int(input('Any number: '))

counter = 0
while n!= 1:
    if int(n) % 2 == 0:
        n=n/2
        print(n)
        counter += 1
    else:
        n = 3*n+1
        print(n)
        counter += 1

if n == 1:
    print('Number of steps: ', counter)


