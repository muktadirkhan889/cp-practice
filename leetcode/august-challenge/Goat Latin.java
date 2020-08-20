class Solution {
    public String toGoatLatin(String S) {
        StringBuilder sb = new StringBuilder();
        int wordCount = 1;
        for(String word: S.split(" ")) {
            char chArr[] = word.toCharArray();
            if(checkVowel(chArr[0])) {
                sb.append(word);
            } else {
                sb.append(word.substring(1,word.length()));
                sb.append(chArr[0]);
            }
            sb.append("ma");
            for(int i=0;i<wordCount;i++) {
                sb.append("a");
            }
            sb.append(" ");
            wordCount++;
        }
        return sb.toString().trim();
    }
    static boolean checkVowel(char c) {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
            return true;
        }
        return false;
    }
}
