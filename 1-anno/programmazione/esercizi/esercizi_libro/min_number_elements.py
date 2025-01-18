'''
Data una lista a di n interi ordinati dal più piccolo al più grande ed un intero k,
scrivere una funzione che restituisca il numero di elementi in a minori o uguali a k. 
Il costo deve essere O(log n).

mid = 4
a = [1,2,3,4,5,6,7,7,7,8,9,10]
k = 7

'''

def get_count_min_equal(a,k):
    count = 0
    lx = 0
    rx = len(a)-1;
    while(lx < rx):
        mid = (lx+rx)//2
        if(a[mid] < k):
            count = mid+1
            lx = mid+1
        elif a[mid] > k: 
            rx = mid - 1;
        elif mid+1 < len(a) and a[mid+1] == k:
            count = mid+1
            lx = mid+1
        else:
            count = mid+1
            return count 

    if(a[lx] <= k):
        return lx+1

    return count

print(get_count_min_equal([0 , 1,2,3,4,5,6,6,7,7,7,7,7,7,8,9,10,10],-1))




