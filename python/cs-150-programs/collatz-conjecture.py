import math


def prime_factors(num):

    primes = []

    dividend = num
    dividend_sqrt = math.floor(math.sqrt(dividend))
    tested_prime = 2

    # ---(Commentary)---
    # Upon successful divisor, reshift dividend and dividend_sqrt
    # If tested prime exceeds sqrt, it means the dividend is prime
    # Then terminate everything and add the dividend to the primes
    # -----------------

    while tested_prime <= dividend_sqrt:
        if dividend % tested_prime == 0:
            primes.append(tested_prime)
            dividend //= tested_prime
            dividend_sqrt = math.floor(math.sqrt(dividend))
        else:
            tested_prime += 1
            # ? Is there a way to skip composites without calling another function?
    
    primes.append(dividend)
    primes.sort(reverse = True)

    # ? Could somehow add libraries in the future to test performance?

    return primes


def sequence(mode, num):
    if (num > 0):
        if mode == 'primed':
            print(prime_factors(num))
        while (num > 1):
            if (num % 2 == 1):
                num = 3 * num + 1
                if mode == 'primed':
                    print(prime_factors(num))
            elif (num % 2 == 0):
                num //= 2
            else:
                print('Oops, how did this happen? An integer with a modulus 2 result other than 0 or 1?')
            
            if mode == 'default':
                print(num) 

    else:
        print('Sorry, that is not a positive integer')    


def main():

    selection_list = ['f', 'p', 'd']

    print('')
    mode = input('Please select a mode { prime (f)actors, (p)rimed sequence, (d)efault sequence }: ')

    if mode in selection_list:
        num_input = input('Please select a positive integer: ')
        num = int(num_input)
        
        match mode:
            case 'f':
                primes = prime_factors(num)
                print(primes)
            case 'p':
                sequence('primed', num)
            case 'd':
                sequence('default', num)
    else:
        print('Sorry, I didn\'t understand that')
        

# === To Do ===
#  
# Differentiate prime sequencing vs default
# Identify largest number
# Identify length of sequence
# Identify largest prime
# Add libraries to test performance

# (Do error handling later)
        

main()