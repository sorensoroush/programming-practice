def sequence():
    print('Sequencing...')

def prime_range():
    print('Printing prime range...')

def main():
    print('')
    
    mode = input('Please select a mode { (s)equence, (p)rime range }: ')

    match mode:
        case 's':
            sequence()
        case 'p':
            prime_range()
        case _:
            print("I'm sorry, I didn't understand that")
        
    print('')

main()