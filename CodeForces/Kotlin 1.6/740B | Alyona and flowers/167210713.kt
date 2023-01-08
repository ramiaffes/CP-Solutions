import kotlin.math.abs
import kotlin.math.max
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
 
fun main(args: Array<String>) {
var (n,m)=readInts()
var vect=readInts()
var res=mutableListOf<Pair<Int,Int>>()
var som=0
for( i in (0)..(m-1)){
    var(l,r)=readInts()
    res.add(Pair(l,r))
    for( j in (l-1)..(r-1)){
        som+=vect[j]
    }
}
var som1=0
for( i in 0..(m-1)){
    som1=0
    for( j in (res[i].first-1)..(res[i].second-1)){
        som1+=vect[j]
    }
    if(som1<0){
        som-=som1
    }
}
println(som)
 
 
 
 
}