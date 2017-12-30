import sys

while True:
	round_no = int(sys.stdin.readline())

	if round_no == -1:
		break

	word = sys.stdin.readline().strip()
	guess = sys.stdin.readline().strip()

	word_chars = set(list(word))
	target = len(word_chars)

	guess_chars = list(guess)

	already_guessed = set()

	score = 0
	wrong = 0

	print("Round", round_no)
	for i in guess_chars:
		if i in already_guessed:
			continue
		else:
			already_guessed.add(i)
			
		if i in word_chars:
			score = score + 1
			word_chars.remove(i)
		else:
			wrong = wrong + 1

		if wrong == 7:
			print("You lose.")
			break

		if score == target:
			print("You win.")
			break

	if score < target and wrong < 7:
		print("You chickened out.")