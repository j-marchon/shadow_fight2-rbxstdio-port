// TypeDefIndex 3158
// Namespace: 
// [Serializable]
// private sealed class DBOOKMFPFNI.<>c
// Fields:
//   public static readonly DBOOKMFPFNI.<>c <>9; // 0x0

// ===== internal DBOOKMFPFNI ICLFIHGKJJH()  [RVA 0x34DB410]
// DBOOKMFPFNI.<>c$$ICLFIHGKJJH @ RVA 0x34DB410

DBOOKMFPFNI_o * DBOOKMFPFNI_<>c__ICLFIHGKJJH(DBOOKMFPFNI___c_o *__this,MethodInfo *method)

{
  DBOOKMFPFNI_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568712 & 1) == 0) {
    FUN_01bab630(&DBOOKMFPFNI_TypeInfo);
    DAT_04568712 = 1;
    method = extraout_x1;
  }
  __this_00 = (DBOOKMFPFNI_o *)thunk_FUN_01bda818(DBOOKMFPFNI_TypeInfo,method);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return __this_00;
}


// ===== private static void .cctor()  [RVA 0x34DB464]
// DBOOKMFPFNI.<>c$$.cctor @ RVA 0x34DB464

void DBOOKMFPFNI_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04568713 & 1) == 0) {
    FUN_01bab630(&DBOOKMFPFNI_<>c_TypeInfo);
    DAT_04568713 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(DBOOKMFPFNI_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  DBOOKMFPFNI_<>c_TypeInfo->static_fields->__9 = (DBOOKMFPFNI___c_o *)__this;
  thunk_FUN_01c20e04(DBOOKMFPFNI_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x34DB4CC]
// DBOOKMFPFNI.<>c$$.ctor @ RVA 0x34DB4CC

void DBOOKMFPFNI_<>c___ctor(DBOOKMFPFNI___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

