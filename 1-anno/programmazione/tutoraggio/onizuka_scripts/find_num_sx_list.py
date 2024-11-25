'''
Scrivere una funzione in Python che, data una lista a di numeri ordinati 
in modo non decrescente ed un numero k , 
restituisce la posizione dell'occorrenza più a sinistra di k in a. 
Se k non è in a, ritorna -1.

Esempio:
Input: a = [1, 3, 4, 4, 4, 4, 5, 7, 7, 7, 7, 10, 10, 12, 12, 15, 17],   k = 10
Output:  11
'''

def find_num_sx(lista,k):
    lx = 0
    rx = len(lista)-1
    
    while lx < rx:
        mid = (lx+rx)//2
        if k < lista[mid]:
            rx = mid - 1
        elif k > lista[mid]:
            lx = mid + 1
        else:
            if (mid - 1) > 0 and lista[mid-1] == k:
                rx = mid - 1
            else:
                return mid
   
    if lista[lx] == k:
        return lx

    return -1


print(find_num_sx([1, 3, 4, 4, 4, 4, 5, 7, 7, 7, 7, 10, 10, 12, 12, 15, 17],1212))





