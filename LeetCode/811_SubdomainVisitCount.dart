class Solution {
  List<String> subdomainVisits(List<String> cpdomains) {
    Map<String, int> map = {};
    for (String cpdomain in cpdomains) {
      int count = int.parse(cpdomain.split(' ')[0]);
      String domain = cpdomain.split(' ')[1];
      for (int i = 0; i < domain.length; i++) {
        if (domain[i] == '.') {
          String subDomain = domain.substring(i + 1);
          map[subDomain] = (map[subDomain] ?? 0) + count;
        }
      }
      map[domain] = (map[domain] ?? 0) + count;
    }
    return map.entries.map((e) => '${e.value} ${e.key}').toList();
  }
}
