import kotlin.math.min
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
fun main(args: Array<String>) {
var t=readInt()
for( i in 0..t-1){
var n=readInt()
var vect =readInts()
var a=vect[0]
var va=vect[1]
var vect1 =readInts()
var c=vect1[0]
var vc=vect1[1]
var b=readInt()
println(min(vc,(va+(b-a))))
 
}
}