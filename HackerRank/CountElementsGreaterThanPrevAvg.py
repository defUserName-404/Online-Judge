def countResponseTimeRegressions(responseTimes: list[int]) -> int:
	# Write your code here
	accumulator = 0
	counter = 0

	for i in range(0, len(responseTimes)):
		if accumulator > 0 and responseTimes[i] > accumulator / i:
			counter += 1
		accumulator += responseTimes[i]

	return counter
