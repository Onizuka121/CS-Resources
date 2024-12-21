'''


'''
def isAnagram(s, t):
    s = sorted(s)
    t = sorted(t)
    return s == t


def repeatedSubstringPattern(s):
        tot = 0
        for c in s: 
            tot += ord(c)

        act = 0
        i = 0
        is_verified = False
        size = len(s)
        while i < size//2 and (not is_verified):
            act += ord(s[i])
            is_verified = False
            if(act*(size//(i+1)) == tot):
                is_verified = True
     
            i += 1
       
        if(is_verified and s[:i]*(size//i) == s):
                return True 
        
        
        
        return False  

print(repeatedSubstringPattern("bacbacbac"))



#print(isAnagram("tac", "cat"))
