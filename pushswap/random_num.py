from __future__ import print_function
import random

def create_list(lenght):
	list = []
	while len(list) < lenght :
		randy = random.randint(-lenght, lenght) #Cuidar cuando el inout se pase del rango
		if (randy not in list):
			list.append(randy) #-2147483648, 2147483647
	return list

if __name__ == '__main__':
	length = int(input('Cantidad de numeros: '))
	list = create_list(length)
	for x in list:
		print(x, end=' ')
