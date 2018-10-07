import Text.Printf

area x = 3.14159*x*x

getNum :: IO Float
getNum = do
    line <- getLine
    let num = read line
    return num

main :: IO ()
main = do
    r <- getNum
    let a = area r
    let str = printf "A=%.4f\n" a
    putStr str
