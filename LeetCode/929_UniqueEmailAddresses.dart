class Solution {
  int numUniqueEmails(List<String> emails) {
    Set<String> uniqueEmails = {};
    for (String email in emails) {
      var emailParts = email.split('@');
      String localName = emailParts[0];
      String domainName = emailParts[1];
      localName = localName.replaceAll('.', '').split('+')[0];
      uniqueEmails.add('$localName@$domainName');
    }
    return uniqueEmails.length;
  }
}
