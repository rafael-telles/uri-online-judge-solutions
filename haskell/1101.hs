import Text.Printf

toInt :: String -> Int
toInt x = read x :: Int

getNumbers :: IO (Int, Int)
getNumbers = do
    line <- getLine
    let ws = words line
    let ns = map toInt ws
    return (ns !! 0, ns !! 1)

fixOrder :: (Int, Int) -> (Int, Int)
fixOrder (a, b) | a <= b    = (a, b)
                | otherwise = (b, a)

shouldStop :: (Int, Int) -> Bool
shouldStop ns = (fst $ fixOrder ns) <= 0

printNumbers :: (Int, Int) -> IO ()
printNumbers (a, b) = do
    putStr $ unwords $ map show [a..b]
    putStr $ printf " Sum=%d\n" (sum [a..b])

loop :: (Int, Int) -> IO ()
loop ns | shouldStop ns = return ()
        | otherwise          = do
            let ns2 = fixOrder ns
            printNumbers ns2

            newNs <- getNumbers
            loop newNs

main :: IO ()
main = do
    ns <- getNumbers
    loop ns
