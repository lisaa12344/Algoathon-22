arr = list(map(int, input().split()))
n = arr[0]
m = arr[1]
for i in range(n):
    input_list = list(map(int, input().split()))
    result = 0
    for j in range(m):
        result += input_list[j]
    print(result)
