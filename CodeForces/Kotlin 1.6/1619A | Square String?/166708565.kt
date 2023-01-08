private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() } // list of ints
fun main(args: Array<String>) {
    var t = readInt()
    for(j in 1..t){ 
    var test=false
    var valeur=readLn()
    if(valeur.length==1)println("NO")
    else{
    for( d in 1..(valeur.length-1)){
    var val2=valeur.substring(0,d)
    var val3=valeur.substring(d,valeur.length)
    if(val2==val3){
    test=true 
    break}
    }
    if(test==true){
    println("YES")}
    else{println("NO")}}
    
 
 
 
    }}