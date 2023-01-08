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
for (i in 0..t-1){
var (n,m,k)=readLongs()
var v1:Long=2
var v2:Long=3
if((m>((n*(n-1))/2))or(m<(n-1))){
println("NO")}
else if(k<=(v1)){
if(k<=(v1-1)){
println("NO")}
else{
if(m==v1-2){
println("YES")}
else{
println("NO")}}
 
}
else if(k==v2){
if(m==(n*(n-1)/2)){
println("YES")}
else println("NO")}
else{
println("YES")}
}
}