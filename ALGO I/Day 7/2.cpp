def solve(image , sr, sc, color):
    # CODE HERE
    og = image[sr][sc]
    if og == color:
        return image
    image[sr][sc] = color
    if sr>0 and image[sr-1][sc]==og:
        solve(image,sr-1,sc,color)
    if sc>0 and image[sr][sc-1]==og:
        solve(image,sr,sc-1,color)
    if sr<len(image)-1 and image[sr+1][sc]==og:
        solve(image,sr+1,sc,color)
    if sc<len(image[0])-1 and image[sr][sc+1]==og:
        solve(image,sr,sc+1,color)
    return image
