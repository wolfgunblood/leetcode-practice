const allConstruct = (target, wordBank) => {

    const table = Array(target.length + 1).fill().map(() => []);
    table[0] = [[]]

    for (let i = 0; i <= target.length; i++) {

        if (table[i] !== null) {

            for (let word of wordBank) {

                const suffix = target.slice(i, i + word.length);

                if (!table[i] || suffix === word) {
                    // console.log(suffix)
                    // table[i + word.length] = [...table[i], word]
                    const newCombination = table[i].map(subArray => [...subArray,word]);
                    table[i + word.length].push(...newCombination)
                }
            }
        }
    }

    return table[target.length]
}



console.log(allConstruct("purple", ["purp", "p", "ur", "le", "purpl"])) //2
// console.log(allConstruct("abcdef", ["ab", "abc", "cd", "def", "abcd"])) //1
// console.log(allConstruct("skateboard", ["bo", "rd", "ate", "t", "ska", "sk", "boar"])) //0
// console.log(allConstruct("enterapotentpot", ["a", "p", "ent", "enter", "ot", "o", "t"])) //4
// console.log(allConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef",[
//     "e",
//     "ee",
//     "eee",
//     "eeee",
//     "eeeee",
//     "eeeeee"
// ]))