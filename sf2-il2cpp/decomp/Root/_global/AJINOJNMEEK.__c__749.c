// TypeDefIndex 749
// Namespace: 
// [Serializable]
// private sealed class AJINOJNMEEK.<>c
// Fields:
//   public static readonly AJINOJNMEEK.<>c <>9; // 0x0

// ===== public void .ctor()  [RVA 0x304E2AC]
// AJINOJNMEEK.<>c$$.ctor @ RVA 0x304E2AC

void AJINOJNMEEK_<>c___ctor(AJINOJNMEEK___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal AJINOJNMEEK AFCHNCJIIDO()  [RVA 0x304E2B4]
// AJINOJNMEEK.<>c$$AFCHNCJIIDO @ RVA 0x304E2B4

AJINOJNMEEK_o * AJINOJNMEEK_<>c__AFCHNCJIIDO(AJINOJNMEEK___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
  if ((DAT_04565e2c & 1) == 0) {
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    DAT_04565e2c = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(AJINOJNMEEK_TypeInfo,method);
  AJINOJNMEEK___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}


// ===== private static void .cctor()  [RVA 0x304E304]
// AJINOJNMEEK.<>c$$.cctor @ RVA 0x304E304

void AJINOJNMEEK_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04565e2d & 1) == 0) {
    FUN_01bab630(&AJINOJNMEEK_<>c_TypeInfo);
    DAT_04565e2d = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(AJINOJNMEEK_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  AJINOJNMEEK_<>c_TypeInfo->static_fields->__9 = (AJINOJNMEEK___c_o *)__this;
  thunk_FUN_01c20e04(AJINOJNMEEK_<>c_TypeInfo->static_fields,__this);
  return;
}

