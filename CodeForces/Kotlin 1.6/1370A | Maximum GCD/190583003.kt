 
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() } // list of ints
fun main(args: Array<String>) {
    var q = readInt()
    repeat(q) {
        var n = readInt()
        if(n%2==0){
            println(n/2)
        }
        else{
            println((n-1)/2)
        }
 
 
    }
}