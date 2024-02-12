def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        vec = list(map(int, input().split()))
        ans = [1] * (n + 1)
        sum_val = vec[0]
        start = 0
        for i in range(1, n):
            sum_val += vec[i]
            while sum_val > n:
                sum_val -= vec[start]
                start += 1
            temp = start
            cum = sum_val
            while i - temp:
                ans[cum] += 1
                cum -= vec[temp]
                temp += 1
        
        for i in range(1, n + 1):
            print(ans[i], end=" ")
        print()

if __name__ == "__main__":
    main()
