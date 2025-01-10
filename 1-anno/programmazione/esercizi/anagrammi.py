'''
data una parola ritornare tutti gli anagrammi sensati ( verificare da una fonte (file))
'''
import sys

def get_anagrams(word,source='italian_words.txt'):
    f = open(source)
    a = {}
    word_sign = ''.join(sorted(word))
    for line in f:
        signature = ''.join(sorted(line[:-1]))
        if signature == word_sign:
            if a.get(signature) == None:
                a[signature] = []
            a[signature].append(line[:-1])
            
    
    return a.get(word_sign)
    

print(get_anagrams(sys.argv[1]))



