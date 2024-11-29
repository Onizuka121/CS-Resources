'''
Scrivere una funzione in Python che, date due liste l1 e l2 entrambe ordinate, 
restituisce una lista che è l'intersezione delle due liste l1 e l2. 
La soluzione deve avere complessità temporale lineare in len(l1) + len(l2), e memoria supplementare costante, possibilmente.

Nota: considerate le liste come insiemi, ovvero, non ci sono elementi ripetuti.
'''

def intersetion_lists(a,b):
    intersetion = []
    i = 0
    j = 0

    while i < len(a) and j < len(b):
        if a[i] == b[j]:
            intersetion.append(a[i])
            i += 1
            j += 1
        elif a[i] < b[j]:
            i += 1
        else:
            j += 1

    
    return intersetion


print(intersetion_lists(
                        [1, 3, 5, 6, 7, 8, 12, 22, 23, 45, 67, 99, 123],
                        [1, 3, 4, 6, 7, 10, 13, 22, 23, 24, 25, 26, 45, 69, 99, 121]
                        ))
