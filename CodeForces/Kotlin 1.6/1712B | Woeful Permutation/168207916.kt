import kotlin.math.max
import kotlin.math.min
import java.util.Collections
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
fun gcd(a:Int,b:Int):Int{
if(a==0)
return b
if(b==0)return a
return gcd(b,a%b)}
fun main(args: Array<String>) {
var t=readInt()
for (j in 0..t-1){
var n=readInt()
val res = mutableListOf<Int>()
if(n==1){
res.add(1)}
else{
for(i in n.downTo(1) step 2){
if((i-1)>0){
res.add(i-1)}
res.add(i)
}
}
val res1=res.reversed()
for (m in res1){print(m)
print(" ")}
println()
}
 
 
 
 
 
}