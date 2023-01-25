private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() } // list of ints
fun main(args: Array<String>) {
    var t = readInt()
 
    for(j in 1..t){
      var s=readLn()
        var n=s.length
        var som=0
        var som1=0
        for(i in 0..n-1){
            if(s[i]=='w'){
                som++
                som+=som1/2
                som1=0
            }
            else{
                som1++
            }
 
        }
        if(s[n-1]=='v')som+=som1/2
        println(som)}
 
 
 
    }