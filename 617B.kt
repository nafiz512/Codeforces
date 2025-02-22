fun solve()
{
    var n=readLine()!!.toLong()
    var ans:Long=0
    while(n>=10L)
    {
        var temp=n%10
        ans+=n-temp
        n=n/10+temp
    }
    ans+=n
    println(ans)
}

fun main(){
    var t=readLine()!!.toInt()
    repeat(t)
    {
        solve()
    }
}