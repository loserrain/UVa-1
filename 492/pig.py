import sys

def is_vowel(ch):
	vowels = 'aeiou'
	return ch.lower() in vowels

for line in sys.stdin:
	t = ''
	i = 0
	l = len(line)

	while i < l:
		if line[i].isalpha():
			start_char = line[i]

			if is_vowel(start_char):
				t = t + start_char

			i = i + 1

			while line[i].isalpha():
				t = t + line[i]
				i = i + 1

			if not is_vowel(start_char):
				t = t + start_char

			t = t + 'ay'
		else:
			t = t + line[i]
			i = i + 1

	print(t, end='')