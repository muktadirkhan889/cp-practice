def allCharactersSame(s):
    if s.count(s[0]) == len(s):
        return True
    return False


def solve(s):
    while len(s) > 1 and allCharactersSame(s) == False:
        s = s.replace("BAA", "A")
        s = s.replace("ABA", "A")
        s = s.replace("AAB", "A")
        s = s.replace("ABB", "B")
        s = s.replace("BAB", "B")
        s = s.replace("BBA", "B")
    if len(s) == 1:
        return True
    else:
        return False


t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    if solve(s) == True:
        print(f"Case #{_+1}: Y")
    else:
        print(f"Case #{_+1}: N")
