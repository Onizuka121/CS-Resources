'''
L'estensione di un file è un suffisso posto alla fine 
del nome del file e precedeto da un punto. 
Scrivere un programma che crei un dizionario
che mappi estensioni alla lista dei file 
nella cartella corrente con quella estensione
'''
import os,sys

def get_ext(name_file):
    for i in range(len(name_file)-1,-1,-1):
        if name_file[i] == '.':
            return name_file[i+1:]
    return None

def mapping_ext(dir=os.getcwd()):
    map = {}
    lf = os.listdir(dir)
    for f in lf:
        ext = get_ext(f)
        if map.get(ext,0) == 0:
            map[ext] = []
        map[ext].append(f)
        
    return map


if len(sys.argv) > 1:
    print(mapping_ext(sys.argv[1]))
else:
    print(mapping_ext())








