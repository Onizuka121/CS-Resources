'''
Implementare una funzione cosi definita:
def get_min( d ):
    """
    d è un dict che mappa lettere su int
    restituisce il valore in d associato alla prima chiave
        in ordine alfabetico. Per esempio, se
        d = {'x': 11, 'b':12}, get_min(d) ritorna 12.
    """

'''

def get_min(d):
    k_min = None
    for k in d:
        if k_min == None:
            k_min = k
        if k < k_min:
            k_min = k
    return d[k_min]

d = {"x":11,"a":12,"b":45}
print(get_min(d))

