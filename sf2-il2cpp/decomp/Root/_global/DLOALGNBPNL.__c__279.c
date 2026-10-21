// TypeDefIndex 279
// Namespace: 
// [Serializable]
// private sealed class DLOALGNBPNL.<>c
// Fields:
//   public static readonly DLOALGNBPNL.<>c <>9; // 0x0

// ===== internal DLOALGNBPNL ICLFIHGKJJH()  [RVA 0x3234600]
// DLOALGNBPNL.<>c$$ICLFIHGKJJH @ RVA 0x3234600

DLOALGNBPNL_o * DLOALGNBPNL_<>c__ICLFIHGKJJH(DLOALGNBPNL___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
  if ((DAT_0456700e & 1) == 0) {
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
    DAT_0456700e = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(DLOALGNBPNL_TypeInfo,method);
  DLOALGNBPNL___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}


// ===== private static void .cctor()  [RVA 0x3234650]
// DLOALGNBPNL.<>c$$.cctor @ RVA 0x3234650

void DLOALGNBPNL_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_0456700f & 1) == 0) {
    FUN_01bab630(&DLOALGNBPNL_<>c_TypeInfo);
    DAT_0456700f = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(DLOALGNBPNL_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  DLOALGNBPNL_<>c_TypeInfo->static_fields->__9 = (DLOALGNBPNL___c_o *)__this;
  thunk_FUN_01c20e04(DLOALGNBPNL_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x32346B8]
// DLOALGNBPNL.<>c$$.ctor @ RVA 0x32346B8

void DLOALGNBPNL_<>c___ctor(DLOALGNBPNL___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

