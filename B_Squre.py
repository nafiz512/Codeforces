
def solve():
    a,b=map(int,input().split())
    c,d=map(int,input().split())
    if a>b:
        a,b=b,a
    if c>d:
        c,d=d,c
    if a+c==b and a+c==d and b==d :
        print("Yes")
    else:
        print("No")
    



if __name__=="__main__":
    t=int(input())
    for i in range(t):
        solve()