import math

def prime_factors(num):

    dividend = num
    dividend_sqrt = math.floor(math.sqrt(dividend))
    primes = []

    tested_prime = 2

    # !^ Somehow add a function to this? And have the context work within this function?
    # How do we have a function reassign variables within the context of another function?

    # I think we can shift the dividend and reassign the sqrt
    # If tested prime exceeds sqrt, it means the dividend is prime
    # Then terminate everything and add the dividend to the primes
    while dividend != 1:
        if dividend % tested_prime == 0:
            primes.append(tested_prime)
            dividend /= tested_prime
        else:
            tested_prime += 1

    return primes

def prime_range():
    print('Printing prime range...')
    print

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

def main():
    print('')
    
    # Add a way of selecting multiple modes
    selection_list = ['f', 'p', 's', 'q']

    mode = '_'

    while mode not in selection_list:
        mode = input('Please select a mode { prime (f)actors, (p)rime range, Collatz (s)equence } or (q)uit: ')

        if mode in selection_list:
            num_input = input('Please select a positive integer: ')
                try
            num = float(num_input)
                if num 
                match mode:
                case 's':
                    sequence()
                case 'p':
                    prime_range()
        else:
        
# While the mode is not in the selection list:
    # Ask for the mode
    # If the mode is valid
        #
    # Else print an error message and try again
        
    print('')

main()