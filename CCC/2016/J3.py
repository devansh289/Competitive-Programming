i = input()

def palindromes(text):
    text = text.lower()
    results = 0

    for i in range(len(text)):
        for j in range(0, i):
            chunk = text[j:i + 1]

            if chunk == chunk[::-1] and len(chunk) > results:
                results=len(chunk)

    print(results)
    
palindromes(i)