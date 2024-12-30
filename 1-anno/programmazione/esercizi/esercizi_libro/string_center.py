'''
Scrivere un programma che chieda in input due stringhe e
le stampi allineate al centro.
Ad esempio se le due stringhe fossero programmazione e Python, il programma stamperebbe

    programmazione
        Python
'''
a = input("inserisci a: ")
b = input("inserisci b: ")
calc = len(a)-len(b)
if len(a) < len(b):
    calc = len(b) - len(a)

sx = (calc//2)+2

if len(a) < len(b):
    print(" "*sx,a)
    print(" "*2,b)
else:
    print(" "*2,a)
    print(" "*sx,b)







