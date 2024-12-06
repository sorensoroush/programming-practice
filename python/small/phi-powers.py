phi = (1 + 5 ** 0.5) / 2
f_list = [0,1]

for i in range(2,11):
    print(f'{i}: {phi**i}')
    f_list.append(f_list[-1] + f_list[-2])
    print(f'f{i}: {f_list[-1]}')
    print('\n')