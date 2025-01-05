'''
Regine minacciose
Si scriva una funzione che prenda in input due coppie che descrivono le posizioni di due regine in una scacchiera di dimensione n x n e che restituisca True se e solo se le due regine si attaccano (sono sulla stessa riga, colonna o diagonale).

Le coppie che descrivono le posizioni hanno come primo valore una lettera che rappresenta la colonna (a è la prima colonna, b la seconda e così via), ed un numero da 1 in poi che rappresenta la riga.
'''

def check_queen_attacking(queen1, queen2):
    if queen1[0] == queen2[0] or queen1[1] == queen2[1]:
        return True
    return (abs(ord(queen1[0])-ord(queen2[0])) == abs(queen1[1]-queen2[1]))

print(check_queen_attacking(('a',2), ('d',5)))





