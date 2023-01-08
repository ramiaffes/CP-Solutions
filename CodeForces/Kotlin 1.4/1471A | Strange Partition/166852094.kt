import kotlin.math.min
import kotlin.math.max
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
fun main(args: Array<String>) {
var t=readInt()
for(i in 0..t-1){
var (n,x)=readInts()
var vect=readLongs()
var som2="0"
var som=som2.toLong()
for(j in 0..n-1){
som+=vect[j]}
if(som%x!=som2.toLong()){
println(som/x+1)}
else{
println(som/x)}
var som1=som2.toLong()
for(j in 0..n-1){
if(vect[j]%x!=som2.toLong()){
som1+=(vect[j]/x+1)}
else{
som1+=(vect[j]/x)}
}
println(som1)
 
}}