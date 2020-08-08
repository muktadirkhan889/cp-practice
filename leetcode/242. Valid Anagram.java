// O(n) time. Constant space.
class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() != t.length()) {
            return false;
        }
        int hash [] = new int [26];
        for(int i = 0; i < s.length(); i++) {
            hash[s.charAt(i) - 'a']++;
            hash[t.charAt(i) - 'a']--;
        }
        for (int i: hash) {
            if(i!=0) {
                return false;
            }
        }
        return true;
    }
}

// For Unicode
// O(n) time. Constant space.
class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() != t.length()) {
            return false;
        }
        HashMap<Character, Integer> map = new HashMap<>();
        for(int i = 0; i < s.length(); i++) {
            int count = map.containsKey(s.charAt(i)) ? map.get(s.charAt(i)) + 1 : 1;
            map.put(s.charAt(i),count);
            count = map.containsKey(t.charAt(i)) ? map.get(t.charAt(i)) - 1 : -1;
            map.put(t.charAt(i),count);
            
        }
        for(Map.Entry<Character, Integer> entry: map.entrySet()) {
            if(entry.getValue()!=0) {
                return false;
            }
        }
        return true;
    }
}
