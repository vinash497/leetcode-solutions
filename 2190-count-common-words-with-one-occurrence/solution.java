class Solution {
    public int countWords(String[] words1, String[] words2) {
        HashMap<String,Integer> map1 = new HashMap<>();
        HashMap<String,Integer> map2 = new HashMap<>();
        for(String word:words1){
            map1.put(word,map1.getOrDefault(word,0)+1);
        }
        for(String word1:words2){
            map2.put(word1,map2.getOrDefault(word1,0)+1);
        }
        int cnt = 0;
        for(String key:map1.keySet()){
            if(map1.get(key)==1 && map2.containsKey(key) && map2.get(key)==1){
                cnt++;
            }
        }
        return cnt;
    }
}
