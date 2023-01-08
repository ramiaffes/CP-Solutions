import kotlin.math.max
import kotlin.math.min
import java.util.Collections
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
fun main(args: Array<String>) {
var (n,f)=readInts()
val vect = mutableListOf<Long>()
var val2:Long=0
var som:Long=0
for (i in 0..n-1){
 var(k,l)=readLongs()
 som+=(min(l,k))
 vect.add(min(max(l-k,val2),k))
 }
 vect.sort()
 Collections.reverse(vect)
 
 for (j in 0..f-1){
 som+=vect[j]}
 println(som)
 
 
 
 
 
 
 
 
}