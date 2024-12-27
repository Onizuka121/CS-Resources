'''
Scrivere un programma che chieda all'utente 
una stringa e stampi il numero di vocali che questa contiene.
'''


stringa = input("inserisci stringa :")
n = len(stringa)
count = 0
for i in range(n):
    if stringa[i] in "aeiou":
        count += 1

print(f"numero vocali {count}")

