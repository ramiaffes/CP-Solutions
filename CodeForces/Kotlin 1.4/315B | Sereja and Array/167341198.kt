import kotlin.math.abs
import kotlin.math.max
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
 
fun main(args: Array<String>) {
var (n,m)=readInts()
var vect1=readInts()
var vect=vect1.toMutableList()
var rh=0
for(i in 0..(m-1)){
    var variable=readInts()
    if(variable[0]==2){
        rh+=variable[1]
    }
    else if(variable[0]==1){
        vect[variable[1]-1]=variable[2]-rh
    }
    else{
        println(vect[variable[1]-1]+rh)
    }
    
    
}
 
 
 
 
}