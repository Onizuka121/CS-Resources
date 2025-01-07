'''

Complessità temporale : O(n)
Complessità spaziale : O(n)

'''


def unique(a):
    d = {}
    for i in a:
        d[i] = d.get(i,0) + 1
    out = []
    for k in d:
        if d[k] == 1:
            out.append(k)
    return out

print(unique([1,2,1,1,2,3,4,5,3]))

