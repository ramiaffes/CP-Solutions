private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
fun isdistinct( n:Int):Boolean {
    var lis=n.toString().toList()
    var lis1=lis.distinct()
    if(lis==lis1){
        return true
    }
    else{
        return false
    }
 
}
fun main(args: Array<String>) {
    var lis=readInts()
    var test=true
    for(k in lis[0]..lis[1]){
        if(isdistinct(k)){
            println(k)
            test=false
            break
        }
    }
    if(test==true){
        println(-1)
 
    }
}