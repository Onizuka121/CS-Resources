'''
Si scriva una funzione che abbia tre parametri obbligatori (x, y e z)
ed un parametro facoltativo (key) che sia una funzione che assegni a x, y e z un valore.
La funzione restituisca il massimo tra x, y e z rispetto alla funzione key. 
Il valore predefinito per key sia la funzione identità. 
Ad esempio

find_max(2,16,-1, key=lambda x: -x)
deve restituire -1;

find_max('programma', 'python', 'algoritmo')
deve restituire python;

find_max('programma', 'python', 'algoritmo', key=len)
deve restituire programma o algoritmo.

'''

def find_max(x,y,z,key=None):
    def id(item):
        return item
    if key == None:
        key = id
    m = max(x,y,z,key=key)
    return m
    
print(find_max('programma','python','algoritmo'))
print(find_max('programma','python','algoritmo',key=len))
print(find_max(99999,3,1, key=lambda x : -x))






