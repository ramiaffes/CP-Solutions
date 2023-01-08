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
for (j in 0..t-1){
var (l,r,k)=readInts()
if(r==l){
if(r==1){
println("NO")}
else{
println("YES")}}
else{
if((k>=((r-l+1)/2+(r-l+1)%2))or((k>=((r-l+1)/2))and(r%2==0))){
println("YES")}
else{
println("NO")}}
 
 
 
}
 
 
 
 
 
}