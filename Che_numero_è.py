from random import randint
print("Per vincere il gioco devi indovinare il numero a cui penso... Il numero va da 1 a 10")
num = [5, 0]
vinte = 0
inserimento = 0
while vinte < 3:
    num[1] = randint(1, 10)
    inserimento = int(input("Ti faccio vedere questo: " + str(num[1]) + ". Che numero è? "))
    if inserimento == num[0]:
        print("Bravo! Forse hai capito come funziona!")
        vinte += 1
    else:
        print("Ahia no! Non è il " + str(inserimento) + ", riprova!")
        vinte = 0
    num[0] = num[1]
print("Congratuzioni, hai capito come funziona il trucchetto!")