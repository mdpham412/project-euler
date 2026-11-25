import math

testSet = set()
for a in range(2, 101):
    for b in range(2, 101):
        testSet.add(math.pow(a, b))

print(len(testSet))
