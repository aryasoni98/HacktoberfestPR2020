from random import randint

sym = ('Rock', 'Paper', 'Scissor')

def play(win = 0, loss = 0):
    cpu = sym[randint(0, 2)]
    
    print("Win :", win, 'Loss :', loss, "\n\n")
    print("R: Rock\nP: Paper\nS: Scissor\nQ: Quit\n\n")
    pick = input("Enter one of the four choices : ")
    
    if pick == 'q':

        exit()

    elif pick == 'r':
        
        print("You : Rock\nCPU :", cpu)
        
        if cpu == 'Paper':
            loss += 1
        elif cpu == 'Scissor':
            win += 1
        else:
            pass

    elif pick == 's':

        print("You : Scissor\nCPU :", cpu)
        
        if cpu == 'Paper':
            win += 1
        elif cpu == 'Rock':
            loss += 1
        else:
            pass

    elif pick == 'p':

        print("You : Paper\nCPU :", cpu)
        
        if cpu == 'Rock':
            win += 1
        elif cpu == 'Scissor':
            loss += 1
        else:
            pass

    play(win, loss)

play(0, 0)