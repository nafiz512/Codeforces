
def solve():
    n=int(input())
    v=list(map(int,input().split()))
    ans=0
    mul=1
    cont=0
    for i in range(n):
        if v[i]<0:
            ans+=(-1-(v[i]))
            mul*=-1
        elif v[i]>0:
            ans+=v[i]-1
        else:
            cont+=1
    if mul==1:
        ans+=(cont)
    else:
        if(cont==0):
            ans+=2
        else:
            ans+=cont
    print(ans)

def main():
    t=1
    #t=int(intput())
    for i in range(t):
        solve()


if __name__=="__main__":
    main()