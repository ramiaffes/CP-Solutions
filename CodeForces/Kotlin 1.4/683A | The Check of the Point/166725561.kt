private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() } // list of ints
fun main(args: Array<String>) {
var vect=readLongs()
var a=vect[0]
var x=vect[1]
var y=vect[2]
if(((x>0)and(x<a))and((y>0)and(y<a))){
println(0)
}
else if((x<0)or(x>a)or(y>a)or(y<0)){
println(2)}
else println(1)
 
    
 
 
 
    }