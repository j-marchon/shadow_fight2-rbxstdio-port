// TypeDefIndex 1347
// Namespace: 
// [Serializable]
// private sealed class MFLHNKGKEGA.<>c
// Fields:
//   public static readonly MFLHNKGKEGA.<>c <>9; // 0x0
//   public static Func<string[], bool> <>9__11_0; // 0x8

// ===== internal bool MHFLDBDFDJB(string[] x)  [RVA 0x316470C]
// MFLHNKGKEGA.<>c$$MHFLDBDFDJB @ RVA 0x316470C

bool MFLHNKGKEGA_<>c__MHFLDBDFDJB
               (MFLHNKGKEGA___c_o *__this,System_String_array *x,MethodInfo *method)

{
  if (x != (System_String_array *)0x0) {
    return 0 < (int)x->max_length;
  }
  return false;
}


// ===== private static void .cctor()  [RVA 0x3164728]
// MFLHNKGKEGA.<>c$$.cctor @ RVA 0x3164728

void MFLHNKGKEGA_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045668a7 & 1) == 0) {
    FUN_01bab630(&MFLHNKGKEGA_<>c_TypeInfo);
    DAT_045668a7 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(MFLHNKGKEGA_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  MFLHNKGKEGA_<>c_TypeInfo->static_fields->__9 = (MFLHNKGKEGA___c_o *)__this;
  thunk_FUN_01c20e04(MFLHNKGKEGA_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x3164790]
// MFLHNKGKEGA.<>c$$.ctor @ RVA 0x3164790

void MFLHNKGKEGA_<>c___ctor(MFLHNKGKEGA___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

