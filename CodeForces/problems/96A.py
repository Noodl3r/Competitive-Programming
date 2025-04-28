nums = [int(i) for i in input()]
length = len(nums)
if length < 7:
    print("NO")
else:
    for i in range(length - 6):
        if sum(nums[i : i + 7]) == 0 or sum(nums[i : i + 7]) == 7:
            print("YES")
            break
    else:
        print("NO")
