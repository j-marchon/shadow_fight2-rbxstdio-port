// TypeDefIndex 596
// Namespace: 
// [Serializable]
// private sealed class OLCBPIHLPEC.<>c
// Fields:
//   public static readonly OLCBPIHLPEC.<>c <>9; // 0x0

// ===== public void .ctor()  [RVA 0x35BB664]
// OLCBPIHLPEC.<>c$$.ctor @ RVA 0x35BB664

void OLCBPIHLPEC_<>c___ctor(OLCBPIHLPEC___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x35BB66C]
// OLCBPIHLPEC.<>c$$.cctor @ RVA 0x35BB66C

void OLCBPIHLPEC_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04568ed6 & 1) == 0) {
    FUN_01bab630(&OLCBPIHLPEC_<>c_TypeInfo);
    DAT_04568ed6 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(OLCBPIHLPEC_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  OLCBPIHLPEC_<>c_TypeInfo->static_fields->__9 = (OLCBPIHLPEC___c_o *)__this;
  thunk_FUN_01c20e04(OLCBPIHLPEC_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal OLCBPIHLPEC DMLACMHIPML()  [RVA 0x35BB6D4]
// OLCBPIHLPEC.<>c$$DMLACMHIPML @ RVA 0x35BB6D4

OLCBPIHLPEC_o * OLCBPIHLPEC_<>c__DMLACMHIPML(OLCBPIHLPEC___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
  if ((DAT_04568ed7 & 1) == 0) {
    FUN_01bab630(&OLCBPIHLPEC_TypeInfo);
    DAT_04568ed7 = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(OLCBPIHLPEC_TypeInfo,method);
  OLCBPIHLPEC___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}

