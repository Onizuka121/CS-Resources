'''
Scrivere una funzione in Python che, 
date due liste l1 e l2 entrambe ordinate,
effettua l'operazione di merge in loco, ovvero senza costruire una nuova lista. 
In particolare, se len(l1) = n e len(l2) = m, 
allora la funzione deve scrivere in l1 i primi n elementi più piccoli e in l2 gli elementi rimanenti.
'''

def merge_loco(l1,l2):
    l1[len(l1):] = l2
    l1.sort()
    l2[:] = l1[-len(l2):]
    l1[-len(l2):] = []
    
    return (l1,l2)

print(merge_loco([1, 4, 7, 8, 10],[2,3,9]))

'''
complessita temporale : O((n+m)*log(n+m))
complessita spaziale : O(n+m) 

'''
