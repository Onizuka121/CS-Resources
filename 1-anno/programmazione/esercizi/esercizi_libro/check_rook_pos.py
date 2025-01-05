'''
Sia board una lista di n interi che codifica la posizione di n torri in una scacchiera di dimensione n x n come visto nell'esercizio precedente. Si scriva una funzione, denominata check_rook_pos, che prenda in input una lista come board e restituisca True se e solo le torri in board non si attaccano.

Ricordiamo che negli scacchi la torre attacca un altro pezzo se questo si trova sulla sua stessa riga o colonna e nessun altro pezzo si frappone tra i due.
'''

def check_rook_pos(board):
    board = sorted(board)
    for i in range(len(board)-1): 
        if board[i] == board[i+1]:
            return False
    return True

print(check_rook_pos([2,2,1,4,4,3]))


