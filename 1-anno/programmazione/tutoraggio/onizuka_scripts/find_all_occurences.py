'''
Scrivere una funzione in Python che, data una lista a di numeri ordinati in modo non decrescente ed un numero k,
restituisce la posizione della prima occorrenza di k in a e la posizione dell'ultima occorrenza di k in a.
Se k non è in a, ritorna -1.

Input: a = [1, 3, 4, 4, 4, 4, 5, 7, 7, 7, 7, 10, 10, 12, 12, 15, 17],
       k = 4
Output:  prima occorrenza: posizione 2; ultima occorrenza: posizione 5

'''

def find_num_sx(lista,k):
    lx = 0
    rx = len(lista)-1
    first_occurence = -1
    lasta_occurence = -1

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
                first_occurence = mid


    print(first_occurence, lasta_occurence)

    if lista[lx] == k:
        first_occurence = lx
        lasta_occurence = lx
        return (first_occurence,lasta_occurence)

    return -1


print(find_num_sx([1, 3, 4, 4, 4, 4, 5, 7, 7, 7, 7, 10, 10, 12, 12, 15, 17],4))




