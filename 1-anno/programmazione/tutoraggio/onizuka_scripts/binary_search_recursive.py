'''
Scrivere una funzione in Python che implementa l'algoritmo di ricerca binaria destra usando la ricorsione. 
In particolare dunque, data una lista a di numeri ordinati in modo non decrescente ed un numero k,
la funzione restituisce la posizione dell'occorrenza più a destra di k in a.
Se k non è in a, ritorna -1.
'''


def binary_search(lista,k,lx,rx):
    if lx > rx:
        if lista[lx] == k:
            return lx
        else: 
            return -1

    mid = (lx+rx)//2 
    if lista[mid] == k:
        if (mid + 1) < len(lista) and lista[mid+1] == k:
            return binary_search(lista,k,lx,mid+1)
        else:
            return mid
    elif k < lista[mid]:
        return binary_search(lista,k,lx,mid-1)
    else:
        return binary_search(lista,k,mid+1,rx)

print(binary_search([1,2,3,4,4,4,5,6,7,8,9,10],4,0,11))
    
