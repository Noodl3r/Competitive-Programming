n = int(input())
scores = {}
for _ in range(n):
    s = input()
    if s in scores:
        scores[s] += 1
    else:
        scores[s] = 1

print(max(scores, key=scores.get))
