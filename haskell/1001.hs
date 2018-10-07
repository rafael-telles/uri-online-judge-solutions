getNum :: IO Int
getNum = do
    line <- getLine
    let num = read line :: Int
    return num

main :: IO ()
main = do
    n1 <- getNum
    n2 <- getNum
    let r = n1 + n2
    putStr "X = "
    putStr $ show r
    putStr "\n"