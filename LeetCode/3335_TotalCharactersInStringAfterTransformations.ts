function lengthAfterTransformations(s: string, t: number): number {
    const MOD = 1e9 + 7;
    let counts = new Array<number>(26).fill(0);

    for (const char of s) {
        counts[char.charCodeAt(0) - 'a'.charCodeAt(0)]++;
    }

    for (let i = 0; i < t; i++) {
        const nextCounts = new Array<number>(26).fill(0);
        for (let j = 0; j < 25; j++) {
            nextCounts[j + 1] = counts[j] % MOD;
        }
        // 'z' -> "ab"
        const zCount = counts[25];
        nextCounts[0] = (nextCounts[0] + zCount) % MOD;
        nextCounts[1] = (nextCounts[1] + zCount) % MOD;

        counts = nextCounts;
    }

    let totalLength = 0;
    for (const count of counts) {
        totalLength = (totalLength + count) % MOD;
    }
    return totalLength;
}
