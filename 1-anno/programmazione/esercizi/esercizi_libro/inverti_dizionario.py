'''
Scrivere una funzione denominata inverti_dizionario che prenda in input 
un dizionario d e restituisca un dizionario d_inv che abbia 
per chiavi i valori in d e d_inv[v] sia la lista di chiavi che d mappa in v. 
Esempio se

d = { 'k0': 'v0', 'k1': 'v1', 'k2': 'v0' }

allora => 

d_inv = { 'v0': ['k0', 'k2'], 'v1': ['k1'] }

'''

def inverti_dizionario(d):
    d_inv = {}
    for k in d:
        if d_inv.get(d[k],None) == None:
            d_inv[d[k]] = []

        d_inv[d[k]].append(k)
    return d_inv



d = { 'k0': 'v0', 'k1': 'v0', 'k2': 'v1' }
print(inverti_dizionario(d))



