import kotlin.math.abs
import kotlin.math.min
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
 
fun main(args: Array<String>) {
var t=readInt()
for (i in 0..(t-1)){
var n=readInt()
var s=readLn()
if(n==1){
println(0)}
else{
 var val1=-1
 var val2=-1
 for( j in 0..(n-1)){
 if(s[j]=='>'){
 val1=j
 break}
}
  for( j in (n-1)downTo(0)){
 if(s[j]=='<'){
 val2=(n-1)-j
 break}
}
 if((val2==-1)or(val1==-1)){
 println(0)}
 else{
 println(min(val1,val2))}
 
 
 
 
 
 }}
}