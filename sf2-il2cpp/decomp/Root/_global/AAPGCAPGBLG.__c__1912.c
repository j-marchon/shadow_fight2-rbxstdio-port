// TypeDefIndex 1912
// Namespace: 
// [Serializable]
// private sealed class AAPGCAPGBLG.<>c
// Fields:
//   public static readonly AAPGCAPGBLG.<>c <>9; // 0x0
//   public static Predicate<CCLKPGBIBOP> <>9__16_0; // 0x8

// ===== private static void .cctor()  [RVA 0x3260EF0]
// AAPGCAPGBLG.<>c$$.cctor @ RVA 0x3260EF0

void AAPGCAPGBLG_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
                    /* try { // try from 03360efc to 03460f0b has its CatchHandler @ 033618cc */
  if ((DAT_045671ac & 1) == 0) {
    FUN_01bab630(&AAPGCAPGBLG_<>c_TypeInfo);
    DAT_045671ac = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(AAPGCAPGBLG_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  AAPGCAPGBLG_<>c_TypeInfo->static_fields->__9 = (AAPGCAPGBLG___c_o *)__this;
                    /* try { // try from 03360f4c to 03460f57 has its CatchHandler @ 0336186c */
  thunk_FUN_01c20e04(AAPGCAPGBLG_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal bool HCDOMBEIBBD(CCLKPGBIBOP p_pack)  [RVA 0x3260F60]
// AAPGCAPGBLG.<>c$$HCDOMBEIBBD @ RVA 0x3260F60

bool AAPGCAPGBLG_<>c__HCDOMBEIBBD
               (AAPGCAPGBLG___c_o *__this,CCLKPGBIBOP_o *p_pack,MethodInfo *method)

{
  if (p_pack != (CCLKPGBIBOP_o *)0x0) {
                    /* try { // try from 03360f68 to 03460f77 has its CatchHandler @ 03361800 */
    return (p_pack->fields)._PCFJKILMDCE_k__BackingField == false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3260F58]
// AAPGCAPGBLG.<>c$$.ctor @ RVA 0x3260F58

void AAPGCAPGBLG_<>c___ctor(AAPGCAPGBLG___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

