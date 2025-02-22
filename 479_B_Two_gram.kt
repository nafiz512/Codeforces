import kotlin.text.substring

fun solve()
{
    var n=readLine()!!.toInt()
    var str=readLine()!!
    var mp=mutableMapOf<String,Int>()
    for(i in 0 until n-1)
    {
        var key=str.substring(i,i+2)
        mp[key]=mp.getOrDefault(key,0)+1
    }
    var ans=mp.maxByOrNull {it.value }?.key
    println(ans)
}

fun main(){
    solve()
}