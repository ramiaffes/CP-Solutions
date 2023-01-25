private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toLong() } // list of ints
fun power (k:Long,n:Long):Long{
    var result:Long=1
    for(ele in 1..n){
        result*=k
    }
    return result
}
fun main(args: Array<String>) {
  repeat(readInt()){
     var lis=readInts()
      var n1:Long=0
      var el:Long=1
      if(lis[1]==el){
          n1=lis[0]/4
      }
      else{
       n1=lis[0]*(1-lis[1])/(1-power(lis[1],4))}
      repeat(4){
          print("$n1 ")
          n1*=lis[1]
      }
      println()
 
  }
 
}