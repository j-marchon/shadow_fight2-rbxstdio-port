// TypeDefIndex 2884
// Namespace: 
// [Serializable]
// private sealed class OMFJHNMDIBF.<>c
// Fields:
//   public static readonly OMFJHNMDIBF.<>c <>9; // 0x0

// ===== private static void .cctor()  [RVA 0x343FE8C]
// OMFJHNMDIBF.<>c$$.cctor @ RVA 0x343FE8C

void OMFJHNMDIBF_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04568214 & 1) == 0) {
    FUN_01bab630(&OMFJHNMDIBF_<>c_TypeInfo);
    DAT_04568214 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(OMFJHNMDIBF_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  OMFJHNMDIBF_<>c_TypeInfo->static_fields->__9 = (OMFJHNMDIBF___c_o *)__this;
  thunk_FUN_01c20e04(OMFJHNMDIBF_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x343FEF4]
// OMFJHNMDIBF.<>c$$.ctor @ RVA 0x343FEF4

void OMFJHNMDIBF_<>c___ctor(OMFJHNMDIBF___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal OMFJHNMDIBF BAAJBPDPFGC()  [RVA 0x343FEFC]
// OMFJHNMDIBF.<>c$$BAAJBPDPFGC @ RVA 0x343FEFC

OMFJHNMDIBF_o * OMFJHNMDIBF_<>c__BAAJBPDPFGC(OMFJHNMDIBF___c_o *__this,MethodInfo *method)

{
  OMFJHNMDIBF_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568215 & 1) == 0) {
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    DAT_04568215 = 1;
    method = extraout_x1;
  }
  __this_00 = (OMFJHNMDIBF_o *)thunk_FUN_01bda818(OMFJHNMDIBF_TypeInfo,method);
  OMFJHNMDIBF___ctor(__this_00,(MethodInfo *)0x0);
  return __this_00;
}

