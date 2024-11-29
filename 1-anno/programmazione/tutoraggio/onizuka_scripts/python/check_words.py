'''
Scrivere una funzione in Python che, data una lista words di parole e una stringa letters di caratteri,
stampa in output tutte e sole le parole in words che possono essere ottenute usando un sottoinsieme 
delle lettere in letters.

- esempio ---> 

Input: words = ["cane", "gatto", "tartaruga", "canto"]
    letters = "anetougc"
Output: cane, canto
'''

def check_words(words,characters):
    out = []
    characters = sorted(characters) # n*logn 
   
    def compare(word): 
        word = sorted(word) # n*logn
        there_all = False
        i,j = 0,0
        while i < len(characters) and j < len(word):
            if characters[i] == word[j]:
                i += 1
                j += 1
                there_all = True
            else:
                i += 1
                there_all = False

        return there_all

    for word in words:
        if compare(word):
            out.append(word)

    return out
            
print(check_words(["cane", "gatto", "tartaruga", "canto"],'anetougc'))



