'''

Scrivere una funzione in Python che, data una lista binaria a, 
cioè contenente unicamente elementi in {0,1},
ordina la lista a.

La funzione deve avere complessità temporale lineare in len(a) e complessità spaziale costante.

'''

def sort_binary_list(lista):
    i = 0
    j = len(lista)-1 
    while i < j:
        if lista[i] == 1 and lista[j] == 1:
            j -= 1
        elif lista[i] == 0 and lista[j] == 0:
            i += 1
        elif lista[i] > lista[j]:
            lista[i],lista[j] = lista[j],lista[i]
            i += 1
            j -= 1
        elif lista[i] < lista[j]:
            i += 1
            j -= 1
    return lista
    

print(sort_binary_list([0,1,0,1,1,1,1,1,0,1,0,1,0,0,0,1,0,0,1,0,0,0]))
