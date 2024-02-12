def can_plan_gifts(budget):
    current_gift_value = 1  # Starting with the minimum value for the first gift
    remaining_budget = budget
    
    for _ in range(7):  # Chef wants to plan gifts for 7 days
        if current_gift_value > remaining_budget:
            return "NO"
        remaining_budget -= current_gift_value  # Deducting the cost of the current gift
        current_gift_value *= 2  # Doubling the value for the next gift
    
    return "YES"  # If the loop completes without returning NO, then Chef can plan gifts

# Input
t = int(input().strip())  # Number of test cases

for _ in range(t):
    x = int(input().strip())  # Budget for each test case
    print(can_plan_gifts(x))
