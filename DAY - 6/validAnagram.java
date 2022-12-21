class Solution {
    public boolean isAnagram(String s, String t) {
      int[] arr=new int[26];
      for(int i=0;i<s.length();i++)
        arr[s.charAt(i)-'a']++;
      for(int j=0;j<t.length();j++)
        arr[t.length(j)-'a']--;
      for(int i:mat)
        if(i!=0)
          return false;
      return true;
    }
}
