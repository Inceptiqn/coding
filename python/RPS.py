import random, time, sys

RPS = ["carta", "sasso", "forbice"]




def game():
    print("\nBenvenuto! oggi giochiamo a carta sasso forbice!\n")
    global chosen
    chosen = random.choice(RPS)
    print("scegli tra\n\n1. CARTA\n2. SASSO\n3. FORBICE")
    playerinput()

def playerinput():
    global RPSchosen
    global numchosen
    numchosen = int(input("\nscrivi in numero da 1 a 3: "))
    if numchosen == 1:
        RPSchosen = RPS[0]
        answer()
    elif numchosen == 2:
        RPSchosen = RPS[1]
        answer()
    elif numchosen == 3:
        RPSchosen = RPS[2]
        answer()
    else:
        print("numero sbagliato!")
        playerinput()

def answer():
    print(f"\nhai scelto {RPSchosen}!")
    time.sleep(1)
    print(f"\nla macchina ha scelto {chosen}!\n")
    time.sleep(2)
    if numchosen == 1:
        if chosen == "sasso":
            print("HAI VINTO!")
            newgame()
        elif chosen == "forbice":
            print("HAI PERSO!")
            newgame()
        else:
            print("PAREGGIO!")
            newgame()
    if numchosen == 2:
        if chosen == "forbice":
            print("HAI VINTO!")
            newgame()
        elif chosen == "carta":
            print("HAI PERSO!")
            newgame()
        else:
            print("PAREGGIO!")
            newgame()
    if numchosen == 3:
        if chosen == "carta":
            print("HAI VINTO!")
            newgame()
        elif chosen == "sasso":
            print("HAI PERSO!")
            newgame()
        else:
            print("PAREGGIO!")
            newgame()       

def newgame():
    time.sleep(3)
    playagain = input("\nvuoi giocare di nuovo?\n")
    if playagain == "si":
        game()
    elif playagain == "no":
        print("ok")
        time.sleep(2)
        sys.exit()
    else:
        print("\nscrivi si o no")
        newgame()
        

game()