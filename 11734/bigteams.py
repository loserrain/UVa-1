import sys

n = int(sys.stdin.readline())

for i in range(n):
	team_output = sys.stdin.readline()
	judge_output = sys.stdin.readline()

	if team_output == judge_output:
		res = "Yes"
	elif team_output.strip().replace(' ', '') == judge_output.strip().replace(' ', ''):
		res = "Output Format Error"
	else:
		res = "Wrong Answer"

	print("Case %d: %s"%(i+1, res))
