import numpy as np
from decimal import Decimal

int_num = 103693973672629630
n = Decimal(int_num)
array = np.array([int_num])
number = len(array)

while True:

    if n % 2 == 0:
        n = int(n / Decimal(2))
    else:
        n = int(n * 3 + 1)

    array = np.append(array, [n])

    if n == 1:
        break

number = len(array)
print("{}:{}".format(number, array))
