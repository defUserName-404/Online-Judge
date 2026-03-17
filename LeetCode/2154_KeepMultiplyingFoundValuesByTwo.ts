function findFinalValue(nums: number[], original: number): number {
  const numsSet: ReadonlySet<number> = new Set(nums);
  while (numsSet.has(original)) {
    original *= 2;
  }
  return original;
}