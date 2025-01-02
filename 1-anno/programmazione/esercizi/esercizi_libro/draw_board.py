'''
L'immagine che segue (vedi file board_photo.jpg qui nella cartella ) mostra n torri su una
scacchiera grande n x n posizionate in modo da occupare tutte le colonne.

Se n torri devono occupare n colonne, allora su ogni colonna compare esattamente una torre. Quindi una configurazione come quella descritta può essere codificata con una lista, chiamiamola board, di n interi compresi tra 0 ed n-1. Il valore di board[c] indica la posizione occupata dalla torre della colonna c.

Ad esempio board = [2, 2, 3, 1, 4, 4] è la codifica della scacchiera in figura.
Si scriva una funzione, chiamata show_board,
che prenda in input una lista di n interi compresi tra 0 ed n-1 
e la rappresenti sulla console mostrando una griglia n x n 
che mostri la posizione delle torri.

Ad esempio show_board( [2, 2, 3, 1, 4, 4] ) dovrebbe mostrare qualcosa del genere.

______
____##
__#___
##____
___#__
______

Il simbolo # indica la presenza della torre mentre con _ è rappresentata una cella vuota.
'''



def show_board(board):
    i = len(board)-1
    while i >= 0:
        print()
        for j in range(len(board)):
            if i == board[j]:
                print("#",end="")
            else:
                print("_",end="")
        i -= 1



show_board( [2, 2, 3, 1, 4, 4] ) 










