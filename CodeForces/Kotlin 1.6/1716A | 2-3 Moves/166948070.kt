private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
fun main(args: Array<String>) {
var t=readInt()
for(i in 0..(t-1)){
var n=readInt()
if(n==1){
println(2)}
else if(n==2) println(1)
else if(n%3==0)
println(n/3)
else if(n%3==1)println(n/3+1)
else println(n/3+1)
}}