import java.util.StringTokenizer

private class FastScanner {
    private val br = System.`in`.bufferedReader()
    private var st: StringTokenizer? = null

    fun nextLong(): Long {
        while (st == null || !st!!.hasMoreElements()) {
            st = StringTokenizer(br.readLine())
        }
        return st!!.nextToken().toLong()
    }
}

fun main() {

    val fs = FastScanner()

    val t = fs.nextLong()

    repeat(t.toInt()) {

        val n = fs.nextLong().toInt()

        val v = LongArray(n)
        val ans = mutableListOf<Int>()

        for(i in 0 until n) {
            v[i] = fs.nextLong()
        }

        for(i in 1 until n) {

            for(j in 0 until i) {

                if(v[j] < v[i]) {
                    ans.add(i + 1)   
                    break
                }
            }
        }

        println(ans.size)

        if(ans.isNotEmpty()) {

            for(i in ans.indices) {

                if(i > 0) print(" ")
                print(ans[i])
            }

            println()
        }
        else {
            println()
        }
    }
}