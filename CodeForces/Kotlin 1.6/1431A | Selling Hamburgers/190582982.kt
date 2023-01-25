private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() } // list of ints
fun main(args: Array<String>) {
    var q = readInt()
    repeat(q) {
        var n = readInt()
       var lis=readLongs()
        var lis1=lis.sorted()
        var max:Long=lis1[0]*n
        for(i in 1 until n){
            var som:Long=0
            for(j in i until n){
                som+=lis1[i]
            }
            if(som>=max){
                max=som
            }
 
 
 
 
        }
        println(max)
 
 
    }
}