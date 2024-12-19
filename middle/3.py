class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        hash_map={}
        i,j,output=0,0,0
        while j<len(s):
            hash_map[s[j]]=hash_map.get(s[j],0)+1
            while(hash_map[s[j]]>=2):
                hash_map[s[i]]-=1
                if hash_map[s[i]]==0:
                    del hash_map[s[i]]
                i+=1
            output=max(output,j-i+1)
            j+=1
        return output  