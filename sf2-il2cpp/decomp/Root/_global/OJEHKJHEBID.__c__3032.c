// TypeDefIndex 3032
// Namespace: 
// [Serializable]
// private sealed class OJEHKJHEBID.<>c
// Fields:
//   public static readonly OJEHKJHEBID.<>c <>9; // 0x0

// ===== internal OJEHKJHEBID COJHKMMKGPC()  [RVA 0x34B6730]
// OJEHKJHEBID.<>c$$COJHKMMKGPC @ RVA 0x34B6730

OJEHKJHEBID_o * OJEHKJHEBID_<>c__COJHKMMKGPC(OJEHKJHEBID___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
  if ((DAT_0456858e & 1) == 0) {
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
    DAT_0456858e = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(OJEHKJHEBID_TypeInfo,method);
  OJEHKJHEBID___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}


// ===== public void .ctor()  [RVA 0x34B6780]
// OJEHKJHEBID.<>c$$.ctor @ RVA 0x34B6780

void OJEHKJHEBID_<>c___ctor(OJEHKJHEBID___c_o *__this,MethodInfo *method)

{
                    /* try { // try from 035b6780 to 036b692f has its CatchHandler @ 035b6780
                       catch() { ... } // from try @ 035b6780 with catch @ 035b6780
                       catch() { ... } // from try @ 035b6a48 with catch @ 035b6780
                       catch() { ... } // from try @ 035b6ae8 with catch @ 035b6780
                       catch() { ... } // from try @ 035b6af8 with catch @ 035b6780
                       catch() { ... } // from try @ 035b6b2c with catch @ 035b6780
                       catch() { ... } // from try @ 035b6b60 with catch @ 035b6780 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x34B6788]
// OJEHKJHEBID.<>c$$.cctor @ RVA 0x34B6788

void OJEHKJHEBID_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_0456858f & 1) == 0) {
    FUN_01bab630(&OJEHKJHEBID_<>c_TypeInfo);
    DAT_0456858f = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(OJEHKJHEBID_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  OJEHKJHEBID_<>c_TypeInfo->static_fields->__9 = (OJEHKJHEBID___c_o *)__this;
  thunk_FUN_01c20e04(OJEHKJHEBID_<>c_TypeInfo->static_fields,__this);
  return;
}

