import sys
import re

sentences = []
lengths = []
max_len = 0
count = 0
for line in sys.stdin:
	t = line.strip()
	l = len(t)
	count = count + 1

	if l > max_len:
		max_len = l

	sentences.append(t)
	lengths.append(l)

vert_sent = []
for i in range(max_len):
	vert_sent.append([])

for i in range(count, 0, -1):
	l = lengths[i - 1]
	sentence = sentences[i - 1]

	for j in range(l):
		vert_sent[j].append(sentence[j])

	for j in range(l, max_len):
		vert_sent[j].append(' ')

for i in vert_sent:
	print(''.join(i))

