// TypeDefIndex 1177
// Namespace: 
// [Serializable]
// private sealed class BDMABHJEEGD.<>c
// Fields:
//   public static readonly BDMABHJEEGD.<>c <>9; // 0x0

// ===== public void .ctor()  [RVA 0x310C8F0]
// BDMABHJEEGD.<>c$$.ctor @ RVA 0x310C8F0

void BDMABHJEEGD_<>c___ctor(BDMABHJEEGD___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal BDMABHJEEGD KPFEPLDDLCD()  [RVA 0x310C8F8]
// BDMABHJEEGD.<>c$$KPFEPLDDLCD @ RVA 0x310C8F8

BDMABHJEEGD_o * BDMABHJEEGD_<>c__KPFEPLDDLCD(BDMABHJEEGD___c_o *__this,MethodInfo *method)

{
  BDMABHJEEGD_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566550 & 1) == 0) {
    FUN_01bab630(&BDMABHJEEGD_TypeInfo);
    DAT_04566550 = 1;
    method = extraout_x1;
  }
  __this_00 = (BDMABHJEEGD_o *)thunk_FUN_01bda818(BDMABHJEEGD_TypeInfo,method);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return __this_00;
}


// ===== private static void .cctor()  [RVA 0x310C94C]
// BDMABHJEEGD.<>c$$.cctor @ RVA 0x310C94C

void BDMABHJEEGD_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04566551 & 1) == 0) {
    FUN_01bab630(&BDMABHJEEGD_<>c_TypeInfo);
    DAT_04566551 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(BDMABHJEEGD_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  BDMABHJEEGD_<>c_TypeInfo->static_fields->__9 = (BDMABHJEEGD___c_o *)__this;
  thunk_FUN_01c20e04(BDMABHJEEGD_<>c_TypeInfo->static_fields,__this);
  return;
}

