// TypeDefIndex 2244
// Namespace: 
// [Serializable]
// private sealed class EPCCNLNOALL.<>c
// Fields:
//   public static readonly EPCCNLNOALL.<>c <>9; // 0x0

// ===== public void .ctor()  [RVA 0x32FBE30]
// EPCCNLNOALL.<>c$$.ctor @ RVA 0x32FBE30

void EPCCNLNOALL_<>c___ctor(EPCCNLNOALL___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x32FBE38]
// EPCCNLNOALL.<>c$$.cctor @ RVA 0x32FBE38

void EPCCNLNOALL_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045676e3 & 1) == 0) {
    FUN_01bab630(&EPCCNLNOALL_<>c_TypeInfo);
    DAT_045676e3 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(EPCCNLNOALL_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  EPCCNLNOALL_<>c_TypeInfo->static_fields->__9 = (EPCCNLNOALL___c_o *)__this;
  thunk_FUN_01c20e04(EPCCNLNOALL_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal EPCCNLNOALL AFJKCJDOFEL()  [RVA 0x32FBEA0]
// EPCCNLNOALL.<>c$$AFJKCJDOFEL @ RVA 0x32FBEA0

EPCCNLNOALL_o * EPCCNLNOALL_<>c__AFJKCJDOFEL(EPCCNLNOALL___c_o *__this,MethodInfo *method)

{
  EPCCNLNOALL_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045676e4 & 1) == 0) {
    FUN_01bab630(&EPCCNLNOALL_TypeInfo);
    DAT_045676e4 = 1;
    method = extraout_x1;
  }
  __this_00 = (EPCCNLNOALL_o *)thunk_FUN_01bda818(EPCCNLNOALL_TypeInfo,method);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 033fbeec to 034fc04b has its CatchHandler @ 033fbeec
                       catch() { ... } // from try @ 033fbeec with catch @ 033fbeec
                       catch() { ... } // from try @ 033fc1cc with catch @ 033fbeec
                       catch() { ... } // from try @ 033fc2ac with catch @ 033fbeec
                       catch() { ... } // from try @ 033fc2b8 with catch @ 033fbeec
                       catch() { ... } // from try @ 033fc31c with catch @ 033fbeec
                       catch() { ... } // from try @ 033fc34c with catch @ 033fbeec */
  return __this_00;
}

