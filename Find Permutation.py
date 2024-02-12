def find_permutation(N, A):
    # Initialize an empty set to keep track of elements added to the permutation
    added = set()
    
    # Initialize the permutation list
    P = []
    
    # Iterate over the elements of A in reverse order
    for num in reversed(A):
        # If the element hasn't been added previously, add it to the permutation
        if num not in added:
            P.append(num)
            added.add(num)
    
    # Return the permutation P
    return P

# Input
T = int(input().strip())  # Number of test cases

for _ in range(T):
    N = int(input().strip())  # Length of A
    A = list(map(int, input().strip().split()))  # Array A
    permutation = find_permutation(N, A)
    print(' '.join(map(str, permutation)))
