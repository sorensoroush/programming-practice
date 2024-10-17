def sequence():
    print('')

    input_integer = input('Please input a positive integer: ')

    i = int(input_integer)

    if (i > 0):
        while (i > 1):
            if (i % 2 == 1):
                i = 3*i + 1
            elif (i % 2 == 0):
                i //= 2
            else:
                print('Oops, how did this happen? An integer with a modulus 2 result other than 0 or 1?')
            
            print(i)

    else:
        print('Sorry, that is not a positive integer')    


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
            print("\n" + "I'm sorry, I didn't understand that")
        
    print('')

main()