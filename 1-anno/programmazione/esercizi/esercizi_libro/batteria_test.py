'''
Progettare una batteria di test per la seguente 
funzione descritta attraverso la specifica: 

def in_intersezione(x, seg0, seg1):
    x è un float

    seg0 e seg1 sono due coppie di float che descrivono due
    intervalli; se il primo elemento della coppia è maggiore del
    secondo, l'intervallo è da considerarsi vuoto.

    restituisce 0 se x è contenuto nel solo segmento seg0;
    1 se è contenuto nel solo segmento seg1;
    2 se è contenuto nell'intersezione dei due segmenti;
    -1 altrimenti
'''

def in_intersezione(x,seg0,seg1):
    in_seg0 = True
    in_seg1 = True
    if seg0[0] > seg0[1]:
        in_seg0 = False
    if seg1[0] > seg1[1]:
        in_seg1 = False
    
    if in_seg0 and x < seg0[0] or x > seg0[1]:
        in_seg0 = False
    if in_seg1 and x < seg1[0] or x > seg1[1]:
        in_seg1 = False 
    
    if in_seg1 and in_seg0:
        return 2
    if in_seg0:
        return 0 
    if in_seg1:
        return 1

    return -1



print(in_intersezione(8,(10,0),(5,8)))















    

    

















