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
var t=readInt()
for (i in 0..(t-1)){
var (n,k)=readInts()
var valeur:Long =1
for( j in 0..k-1){
    valeur*=n
    valeur=valeur%1000000007
   }
println(valeur)
 }
 
 
 
 
 
}