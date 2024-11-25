'''
Scrivere una funzione in Python che, 
data una lista di numeri interi distinti non negativi ordinati in modo crescente,
restutisce il più piccolo elemento non negativo mancante in essa.
Se non ci sono elementi mancanti, restituisce -1.

example -> 
    input: [0,1,2,3,4,5,7,9,11]
    output : 6

'''

def find_min_missing(lista,i=0):
    
    if i == len(lista):
        return -1

    if i == lista[i]:
        return find_min_missing(lista,i+1) 

    return i



print(find_min_missing([0,1,2,3,4,5,7,8]))
    

    

