#! /usr/bin/python3
#ord mi da la posizione della lettera a e 97

welcome_message = '''

 /$$$$$$$   /$$$$$$  /$$$$$$$$         /$$   /$$        /$$$$$$  /$$     /$$ /$$$$$$$  /$$   /$$ /$$$$$$$$ /$$$$$$$ 
| $$__  $$ /$$__  $$|__  $$__/        | $$$ | $$       /$$__  $$|  $$   /$$/| $$__  $$| $$  | $$| $$_____/| $$__  $$
| $$  \ $$| $$  \ $$   | $$           | $$$$| $$      | $$  \__/ \  $$ /$$/ | $$  \ $$| $$  | $$| $$      | $$  \ $$
| $$$$$$$/| $$  | $$   | $$    /$$$$$$| $$ $$ $$      | $$        \  $$$$/  | $$$$$$$/| $$$$$$$$| $$$$$   | $$$$$$$/
| $$__  $$| $$  | $$   | $$   |______/| $$  $$$$      | $$         \  $$/   | $$____/ | $$__  $$| $$__/   | $$__  $$
| $$  \ $$| $$  | $$   | $$           | $$\  $$$      | $$    $$    | $$    | $$      | $$  | $$| $$      | $$  \ $$
| $$  | $$|  $$$$$$/   | $$           | $$ \  $$      |  $$$$$$/    | $$    | $$      | $$  | $$| $$$$$$$$| $$  | $$
|__/  |__/ \______/    |__/           |__/  \__/       \______/     |__/    |__/      |__/  |__/|________/|__/  |__/

by onizuka


'''
print(welcome_message)

def rotN(mode='en'):
	print(f'/tMODE ---> {mode}')
	word = input('inserisci la parola :')
	key = input('inserisci chiave (default 13) :')
	if key == '':
		key = 13
	else:
		key = int(key)

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

choice = '1'

while choice != '99':
	print(
 	 '''
	\n 
 	 [+]  1  - encrypt (mode en)
 	 [+]  2  - decrypt (mode dec)
 	 [+] 99  - exit
  	'''
 	 )
	choice = input('[@] choice option : ')

	if choice == '1':
		 print(f'\n\t############# text ENCRYPTED --> {rotN()}')
	elif choice == '2':
		 print(f'\n\t############# text DECRYPTED --> {rotN("dec")}')
	elif choice != '99' :
		print(f'NO OPTION AVAILABLE -> {choice}')


print('\n######### BYE BYE CHAD!!')
