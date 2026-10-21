// TypeDefIndex 2820
// Namespace: 
// [Serializable]
// private sealed class FIMAAAOEIGM.<>c
// Fields:
//   public static readonly FIMAAAOEIGM.<>c <>9; // 0x0

// ===== public void .ctor()  [RVA 0x3426434]
// FIMAAAOEIGM.<>c$$.ctor @ RVA 0x3426434

void FIMAAAOEIGM_<>c___ctor(FIMAAAOEIGM___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal FIMAAAOEIGM LNJPIHAONCC()  [RVA 0x342643C]
// FIMAAAOEIGM.<>c$$LNJPIHAONCC @ RVA 0x342643C

FIMAAAOEIGM_o * FIMAAAOEIGM_<>c__LNJPIHAONCC(FIMAAAOEIGM___c_o *__this,MethodInfo *method)

{
  FIMAAAOEIGM_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568112 & 1) == 0) {
    FUN_01bab630(&FIMAAAOEIGM_TypeInfo);
    DAT_04568112 = 1;
    method = extraout_x1;
  }
  __this_00 = (FIMAAAOEIGM_o *)thunk_FUN_01bda818(FIMAAAOEIGM_TypeInfo,method);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return __this_00;
}


// ===== private static void .cctor()  [RVA 0x3426490]
// FIMAAAOEIGM.<>c$$.cctor @ RVA 0x3426490

void FIMAAAOEIGM_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04568113 & 1) == 0) {
    FUN_01bab630(&FIMAAAOEIGM_<>c_TypeInfo);
    DAT_04568113 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(FIMAAAOEIGM_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  FIMAAAOEIGM_<>c_TypeInfo->static_fields->__9 = (FIMAAAOEIGM___c_o *)__this;
  thunk_FUN_01c20e04(FIMAAAOEIGM_<>c_TypeInfo->static_fields,__this);
  return;
}

