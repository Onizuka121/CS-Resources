'''
Scrivere una funzione in Python che, date due liste l1 e l2 entrambe ordinate, 
restituisce una lista che è la differenza delle due liste l1 e l2,
ovvero, la nuova lista deve contenere tutti gli elementi di l1 tranne quelli che sono presenti anche in l2. 
La soluzione deve avere complessità temporale lineare in len(l1) + len(l2), 
e memoria supplementare costante, possibilmente.
'''


def difference_lists(l1,l2):
    i,j = 0,0
    difference = []
    while i < len(l1) and j < len(l2):
        if l1[i] < l2[j]:
            difference.append(l1[i])
            i += 1
        elif l1[i] > l2[j]:
            j += 1
        else:
            i += 1
            j += 1
    
    difference[len(difference):] = l1[i:]
    print(sorted(set(l1)-set(l2)))
    return difference

print(difference_lists([1, 3, 5, 6, 7, 8, 12],[1, 3, 6, 7,12, 22, 23, 45, 99,100,102]))


