'''



'''


def combination(a,b = [],i = -1):
    if i >= len(a):
        return

    if i == -1:
        b = [0,0,0]
        print(b)
        i = 0

    if b[i] < a[i]+1:
        b[i] += 1
        print(b)
        combination(a,b,i)
        b[i] -= 1
     
    combination(a,b,i+1)


combination([3,1,2]);

