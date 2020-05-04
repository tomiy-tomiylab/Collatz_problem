var n = 103693973672629630
var array = [n]

while true {
    
    if n % 2 == 0 {
        n = n / 2
    }else {
        n = n * 3 + 1
    }
    
    array.append(Int(n))
    
    if n == 1 {
        break
    }
}

let number = array.count
print("\(number):\(array)")
