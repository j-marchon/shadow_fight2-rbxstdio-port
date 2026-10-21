// TypeDefIndex 3325
// Namespace: 
// [Serializable]
// private sealed class ALJBCELIEHC.<>c
// Fields:
//   public static readonly ALJBCELIEHC.<>c <>9; // 0x0
//   public static Predicate<NFEOGKEAFHL> <>9__7_0; // 0x8
//   public static Predicate<NFEOGKEAFHL> <>9__9_0; // 0x10

// ===== public void .ctor()  [RVA 0x352B3F8]
// ALJBCELIEHC.<>c$$.ctor @ RVA 0x352B3F8

void ALJBCELIEHC_<>c___ctor(ALJBCELIEHC___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool JLPKNOPCPFD(NFEOGKEAFHL x)  [RVA 0x352B400]
// ALJBCELIEHC.<>c$$JLPKNOPCPFD @ RVA 0x352B400

bool ALJBCELIEHC_<>c__JLPKNOPCPFD(ALJBCELIEHC___c_o *__this,NFEOGKEAFHL_o *x,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *pSVar1;
  
  if ((DAT_04568a24 & 1) == 0) {
    __this = (ALJBCELIEHC___c_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    DAT_04568a24 = 1;
  }
  if ((x != (NFEOGKEAFHL_o *)0x0) &&
     (pSVar1 = (x->fields).GPNNHMIJLGL, pSVar1 != (System_Collections_Generic_List_int__o *)0x0)) {
    return (pSVar1->fields)._size == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== internal bool BBLKIDNBHOA(NFEOGKEAFHL x)  [RVA 0x352B454]
// ALJBCELIEHC.<>c$$BBLKIDNBHOA @ RVA 0x352B454

bool ALJBCELIEHC_<>c__BBLKIDNBHOA(ALJBCELIEHC___c_o *__this,NFEOGKEAFHL_o *x,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *pSVar1;
  
  if ((DAT_04568a25 & 1) == 0) {
    __this = (ALJBCELIEHC___c_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    DAT_04568a25 = 1;
  }
  if ((x != (NFEOGKEAFHL_o *)0x0) &&
     (pSVar1 = (x->fields).GPNNHMIJLGL, pSVar1 != (System_Collections_Generic_List_int__o *)0x0)) {
    return (pSVar1->fields)._size == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private static void .cctor()  [RVA 0x352B4A8]
// ALJBCELIEHC.<>c$$.cctor @ RVA 0x352B4A8

void ALJBCELIEHC_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04568a26 & 1) == 0) {
    FUN_01bab630(&ALJBCELIEHC_<>c_TypeInfo);
    DAT_04568a26 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(ALJBCELIEHC_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  ALJBCELIEHC_<>c_TypeInfo->static_fields->__9 = (ALJBCELIEHC___c_o *)__this;
  thunk_FUN_01c20e04(ALJBCELIEHC_<>c_TypeInfo->static_fields,__this);
  return;
}

