def sub_or_swp(X, Y):
    while X != 0:
        remainder = Y % X
        Y = X
        X = remainder
    return Y

# Input
T = int(input().strip())  # Number of test cases

for _ in range(T):
    X, Y = map(int, input().strip().split())  # X and Y
    print(sub_or_swp(X, Y))
