import math

def prime_factors(num):

    primes = []

    dividend = num
    dividend_sqrt = math.floor(math.sqrt(dividend))
    tested_prime = 2

    # Upon successful divisor, reshift dividend and dividend_sqrt
    # If tested prime exceeds sqrt, it means the dividend is prime
    # Then terminate everything and add the dividend to the primes

    while tested_prime <= dividend_sqrt:
        if dividend % tested_prime == 0:
            primes.append(tested_prime)
            dividend //= tested_prime
            dividend_sqrt = math.floor(math.sqrt(dividend))
        else:
            tested_prime += 1
    
    primes.append(dividend)

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

    selection_list = ['f', 'r', 's']

    print('')
    mode = input('Please select a mode { prime (f)actors, prime (r)ange, Collatz (s)equence }: ')

    if mode in selection_list:
        num_input = input('Please select a positive integer: ')
        num = int(num_input)
        
        match mode:
            case 'f':
                primes = prime_factors(num)
                print(primes)
            case 'r':
                prime_range(num)
            case 's':
                sequence(num)
    else:
        print('Sorry, I didn\'t understand that')

# Do error handling later
        
# While the mode is not in the selection list:
    # Ask for the mode
    # If the mode is valid
        #
    # Else print an error message and try again
        

main()