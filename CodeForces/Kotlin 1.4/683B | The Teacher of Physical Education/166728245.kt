private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() } // list of ints
fun main(args: Array<String>) {
var n= readInt()
val res = mutableListOf<Pair<String,Long>>()
for(i in  0..n-1){
var vect=readStrings()
var rh=Pair(vect[0],vect[1].toLong())
if(rh!=null){
res.add(rh)
}
 
}
res.sortWith(Comparator{ x, y -> (x.second).compareTo((y.second)) })
for( v in res){
println(v.first)}
 
 
 
 
    }