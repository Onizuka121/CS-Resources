'''
Implementare la seguente funzione:

def deep_count( t ):
    Precondizione: t è una tupla che può contenere al suo interno
        tuple annidate
    Restituisce il numero di elementi numerici contenuti in t
        ed in tutte le tuple annidate

Ad esempio se
t = ( 3.14, (2, 3), (2.71, (7, 5)), 9, (12, ( 4, )) )
deep_count( t ) deve restituire 9.

'''

def deep_count(t):
    count = 0
    for n in t:
        if type(n) == tuple:
            count += deep_count(n)
        else:
            count += 1 
    return count

t = ( 3.14, (2, 3,8,(23,34,(23))), (2.71, (7, 5)), 9, (12, ( 4, )) )
print(deep_count( t )) 








