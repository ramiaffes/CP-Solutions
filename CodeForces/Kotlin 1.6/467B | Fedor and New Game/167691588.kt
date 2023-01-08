import kotlin.math.abs
import kotlin.math.min
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
 fun String.addCharAtIndex(char: Char, index: Int) =StringBuilder(this).apply { insert(index, char) }.toString()
fun main(args: Array<String>) {
var (n,m,k)=readInts()
var vect=mutableListOf<Int>()
for (i in 1..(m+1)){
var a=readInt()
vect.add(a)}
var vect1=mutableListOf<String>()
for (i in 1..(m+1)){
vect1.add("")}
for( i in 0..m){
var valeur= vect[i]
while(valeur!=0){
vect1[i]=vect1[i].plus(valeur%2)
valeur=valeur/2
}
vect1[i]=vect1[i].reversed()
while(vect1[i].length<n){vect1[i]=vect1[i].addCharAtIndex('0',0)}
 
 
 
}
 
var som1=0
for( i in 0..m-1){
var som=0
for (j in 0..n-1){
if(vect1[i][j]!=vect1[m][j]){
som+=1}}
if(som<=k){
som1+=1}}
println(som1)
 
 
 
 
 
 
}