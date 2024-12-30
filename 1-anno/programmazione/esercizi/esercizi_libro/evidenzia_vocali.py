'''
Scrivere un programma che chieda in input una stringa,
la stampi e ne evidenzi le vocali inserendo un carattere * 
al di sotto di queste. 
Ad esempio, se la stringa fosse programmazione 
il programma stamperebbe

programmazione
  *  *  * ** *

'''
s = input("inserisci stringa: ")
print(s)
for c in s:
    if c in "aeiouAEIOU":
        print("*",end="")
    else:
        print(" ",end="")

print()
