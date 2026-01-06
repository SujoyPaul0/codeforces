def minRadius(line1, line2):
    lanCount = line1[0]
    length = line1[1]
    
    line2.sort()
    startGap = line2[0] - 0
    endGap = line2[len(line2) - 1] - length
    maxGap = float('-inf')
    
    for i in range(1, len(line2)):
        gap = line2[i] - line2[i - 1]
        if gap > maxGap:
            maxGap = gap
            
    radius = max(startGap, endGap, maxGap / 2)
    return radius     
    
