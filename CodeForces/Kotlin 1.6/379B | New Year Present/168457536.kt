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
var n=readInt()
var vect1=readInts()
var vect=vect1.toMutableList()
var res=mutableListOf<Char>()
var test=true
if(vect[0]!=0){
res.add('P')
vect[0]-=1}
while(test==true){
test=false
for(j in 0..n-1){
if(vect[0]!=0)test=true
if((vect[j]!=0)and(j!=0)){
test=true
    res.add('P')
vect[j]-=1}
if(j!=(n-1)){
res.add('R')}
}
if(test==false)break
for( j in (n-1)downTo(0)){
if(vect[n-1]!=0)test=true
if((vect[j]!=0)and(j!=(n-1))){
test=true
res.add('P')
vect[j]-=1}
if(j!=(0)){
res.add('L')}
}}
println(res.joinToString(""))
}