def plusOne(digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        
        carry = 1
        i = len(digits)-1
        while i >= 0 and carry != 0:
            if (digits[i]+carry) > 9:
                digits[i] = 0
            else:
                digits[i] += carry
                carry = 0
            i -= 1
        
        # se vogliamo farlo in C dobbiamo 
        '''
        1 - riallocare l'array digits con uno spazio in piu
        2 - ricopiamo tutto l'array digits nel nuovo ma nella posizione 0 mettiamo 1 e alla fine 0
        '''
        if  i == -1: #oppure digits[0] == 0
            digits.append(0) 
            digits[0] = 1


        return digits

        


print(plusOne([9,9,1]))


