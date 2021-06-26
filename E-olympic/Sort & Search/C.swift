var n = Int(readLine()!)
if n != nil{ 
    var arr: Array<Int> = Array()
    while n! > 0 {
        n = n! - 1
        let x = Int(readLine()!)
        arr.append(x!)
    }
    let prev = arr[1] - arr[0]
    var flag = true
    for i in 2...n! {
        if arr[i] - arr[i - 1] > prev {
            print("no")
            flag = false
            break
        }
    }
    if flag == true{
        print("yes")
    }
}