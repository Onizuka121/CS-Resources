#ord mi da la posizione della lettera a e 97


def rotN(mode='en'):
	word = input('inserisci la parola :')
	key = int(input('inserisci chiave (default 13) :'))
	if key <= 0:
		key = 13

	new_word_crypted = ''
	for carattere in word:
		if mode == 'en':
			posizione_carattere = ord(carattere) + key
			if posizione_carattere > 122:
                        	posizione_carattere = posizione_carattere - 26
		else:
			posizione_carattere = ord(carattere) - key
			if posizione_carattere < 97:
				posizione_carattere = posizione_carattere + 26
			


		new_word_crypted += chr(posizione_carattere)

	return new_word_crypted


print(rotN('dec'))
