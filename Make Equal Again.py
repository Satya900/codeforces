t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    c = 0
    cc = 0
    cb = 0
    ccb = 0
    
    for i in range(n):
        if a[i] == a[0] and cc == 0:
            c += 1
        elif a[i] != a[0]:
            cc = 1
            
    a.reverse()
    
    for i in range(n):
        if a[i] == a[0] and ccb == 0:
            cb += 1
        elif a[i] != a[0]:
            ccb = 1
            
    if a[0] == a[n - 1]:
        c += cb
        
    c = min(max(c, cb), n)
    
    print(n - c)
