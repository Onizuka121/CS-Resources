#! /usr/bin/python3

'''
data una lista di numeri ordinati in modo crescente 
trovare la posizione dell'occorenza piu a destra di k in a

in : [1,2,3,4,4,4,5] , 4
                *
out : 5 


'''

def binary_search_rx(lista,k):
    lx = 0
    rx = len(lista) - 1 

    while lx < rx:
        mid = (lx+rx) // 2
        if k > lista[mid]:
            lx = mid + 1 
        elif k < lista[mid]:
            rx = mid - 1 
        else:
            if mid+1 < len(lista) and lista[mid+1] == k:
                lx = mid + 1
            else:
                return mid

    if k == lista[lx]:
        return lx

    return -1


print(binary_search_rx([1,2,2,2,3,4,5,5,5,5,6,7,7,7,7,7,8,9,10,10,10],2))
