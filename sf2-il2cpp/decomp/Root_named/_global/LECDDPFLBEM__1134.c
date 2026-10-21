// TypeDefIndex 1134
// Namespace: 
// [Extension]
// public static class LECDDPFLBEM
// Fields:

// ===== public static bool GAKDEAHMIPB(Range NIHAEFGFNKN, Range BDHBPPLCHKI)  [RVA 0x30F663C]
// LECDDPFLBEM$$GAKDEAHMIPB @ RVA 0x30F663C

bool LECDDPFLBEM__GAKDEAHMIPB
               (UnityEngine_SocialPlatforms_Range_o NIHAEFGFNKN,
               UnityEngine_SocialPlatforms_Range_o BDHBPPLCHKI,MethodInfo *method)

{
  return NIHAEFGFNKN.fields.from == BDHBPPLCHKI.fields.from &&
         NIHAEFGFNKN.fields.count == BDHBPPLCHKI.fields.count;
}


// ===== public static int KIKGKKGDCKK(Range CMHCEEPDACF)  [RVA 0x30F665C]
// LECDDPFLBEM$$KIKGKKGDCKK @ RVA 0x30F665C

int32_t LECDDPFLBEM__KIKGKKGDCKK(UnityEngine_SocialPlatforms_Range_o CMHCEEPDACF,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = CMHCEEPDACF.fields.from;
  if (CMHCEEPDACF.fields.count != 0) {
    iVar1 = CMHCEEPDACF.fields.from + CMHCEEPDACF.fields.count + -1;
  }
  return iVar1;
}


// ===== public static bool NFJIIGCLFOF(Range CMHCEEPDACF, int GKIFFEHFCOO)  [RVA 0x30F6674]
// LECDDPFLBEM$$NFJIIGCLFOF @ RVA 0x30F6674

bool LECDDPFLBEM__NFJIIGCLFOF
               (UnityEngine_SocialPlatforms_Range_o CMHCEEPDACF,int32_t GKIFFEHFCOO,
               MethodInfo *method)

{
  return CMHCEEPDACF.fields.from <= GKIFFEHFCOO &&
         GKIFFEHFCOO < CMHCEEPDACF.fields.count + CMHCEEPDACF.fields.from;
}

