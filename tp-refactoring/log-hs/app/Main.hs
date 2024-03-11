import System.IO
add3 :: Int -> Int 
add3 = (+3)

mul2 :: Int -> Int
mul2 = (*2)

mycompute :: Int -> IO Int
mycompute v0 = do
    putStrLn ("add3 " ++ show v0)
    let v1 = add3 v0
    putStrLn ("mul2 " ++ show v1)
    let v2 = mul2 v1
    return v2


mycomputeFile :: Int -> IO Int
mycomputeFile v0 = do
    handle <- openFile "log.txt" WriteMode
    hPutStrLn handle ("add3 " ++ show v0)
    let v1 = add3 v0
    hPutStrLn handle ("mul2 " ++ show v1)
    let v2 = mul2 v1
    hClose handle
    return v2


main :: IO ()
main = do
    putStrLn "this is log-hs"
    
    res <- mycompute 18
    print res

    resFic <- mycomputeFile 18
    print resFic
