var groupAnagrams = function(strs) {
    let mp = new Map();

    for (let s of strs) {
        let key = s.split("").sort().join(""); // sorted letters become the key
        if (!mp.has(key)) {
        mp.set(key, []);
        }
    mp.get(key).push(s);
    }

    return Array.from(mp.values());
};

const strs = ["eat","tea","tan","bat","nat","ate"]
console.log(groupAnagrams(strs))
