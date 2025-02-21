fun solve() {
    val k = readLine()!!.toLong()
    val v = readLine()!!.split(" ").map{it.toLong()}.toMutableList()

    v.sortDescending()
    if(k==0L)
    {
        println(0)
        return
    }
    var sum = 0L
    for (i in v.indices) {  // More flexible than 0..11
        sum += v[i]
        if (sum >= k) {
            println(i + 1)
            return
        }
    }
    println(-1)
}

fun main() {
    solve()

    // Uncomment below for multiple test cases
    // val t = readLine()!!.toInt()
    // repeat(t) { solve() }
}
