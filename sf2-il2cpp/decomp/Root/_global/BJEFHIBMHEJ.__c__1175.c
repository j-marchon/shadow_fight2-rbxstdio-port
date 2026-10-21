// TypeDefIndex 1175
// Namespace: 
// [Serializable]
// private sealed class BJEFHIBMHEJ.<>c
// Fields:
//   public static readonly BJEFHIBMHEJ.<>c <>9; // 0x0

// ===== internal BJEFHIBMHEJ AFJKCJDOFEL()  [RVA 0x310B9FC]
// BJEFHIBMHEJ.<>c$$AFJKCJDOFEL @ RVA 0x310B9FC

BJEFHIBMHEJ_o * BJEFHIBMHEJ_<>c__AFJKCJDOFEL(BJEFHIBMHEJ___c_o *__this,MethodInfo *method)

{
  BJEFHIBMHEJ_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566544 & 1) == 0) {
    FUN_01bab630(&BJEFHIBMHEJ_TypeInfo);
    DAT_04566544 = 1;
    method = extraout_x1;
  }
  __this_00 = (BJEFHIBMHEJ_o *)thunk_FUN_01bda818(BJEFHIBMHEJ_TypeInfo,method);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return __this_00;
}


// ===== private static void .cctor()  [RVA 0x310BA50]
// BJEFHIBMHEJ.<>c$$.cctor @ RVA 0x310BA50

void BJEFHIBMHEJ_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04566545 & 1) == 0) {
    FUN_01bab630(&BJEFHIBMHEJ_<>c_TypeInfo);
    DAT_04566545 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(BJEFHIBMHEJ_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  BJEFHIBMHEJ_<>c_TypeInfo->static_fields->__9 = (BJEFHIBMHEJ___c_o *)__this;
  thunk_FUN_01c20e04(BJEFHIBMHEJ_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x310BAB8]
// BJEFHIBMHEJ.<>c$$.ctor @ RVA 0x310BAB8

void BJEFHIBMHEJ_<>c___ctor(BJEFHIBMHEJ___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

