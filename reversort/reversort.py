"""

Reversort Algorithm

Reversort(L):
	for i:= 1 to length(L)-1
		j = position of min element from i th position to the length of the list (inclusive)
		
		# Reverse teh list from i th position to the j th position (min element)
		Reverse(L[i : j])

"""

import os, sys

if not os.environ.get("ONLINE_JUDGE"):
	sys.stdin = open('input.txt', 'r')
	sys.stdout = open('output.txt', 'w')


def func(arr, l):
	C = 0

	for i in range(0, l-1):
		m = min(arr[i:])

		ind = arr.index(m)
		dis = ind - i + 1

		arr = arr[:i] + arr[i:ind+1][::-1] + arr[ind+1:]

		C += dis

	return C


N = int(input())

for case in range(N):
	l = int(input())
	arr = list(map(int, input().split(' ')))

	print("Case #{}: {}".format(case, func(arr, l)))