#! /usr/bin/python3

def rotN(key,word):
    new_word_crypted = ''
    for carattere in word:
        posizione_carattere = ord(carattere) - key 
        if posizione_carattere < 97: 
            posizione_carattere = posizione_carattere + 26
        new_word_crypted += chr(posizione_carattere)	
    
    return new_word_crypted


i = 1
n = 30
word = input('\t insert text encrypted : ')

while i <= n:
    print(f'key {i}  --> ##  {rotN(i,word)}')
    i += 1

print('\n\nFINISH BRUTE FORCE ... BYE BYE CHAD ! ') 
