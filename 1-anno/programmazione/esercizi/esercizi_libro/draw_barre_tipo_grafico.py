'''
Scrivere una funzione, denominata barre, che prenda in input un numero variabile di interi e mostri l'input utilizzando un diagramma a barre verticale come nell'esempio che segue che mostra l'output di barre(3, 1, 6, 8, 0, 10, 2)

_________
|     # |
|     # |
|   # # |
|   # # |
|  ## # |
|  ## # |
|  ## # |
|# ## # |
|# ## ##|
|#### ##|
¯¯¯¯¯¯¯¯¯

'''


def draw_barre(*numbers):
    m = max(numbers)
    print("_"*(len(numbers)+2))
    while m > 0:
        print("|",end="")
        for n in numbers:
            if n >= m:
                print("#",end="")
            else:
                print(" ",end="")
        print("|")
        m -= 1
    print("-"*(len(numbers)+2))


draw_barre(3, 1, 6,10, 8, 0, 10, 2)




















