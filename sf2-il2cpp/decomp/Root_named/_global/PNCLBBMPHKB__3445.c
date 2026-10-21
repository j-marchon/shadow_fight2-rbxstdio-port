// TypeDefIndex 3445
// Namespace: 
// public static class PNCLBBMPHKB
// Fields:
//   private static HashSet<string> JNHCNDDALMK; // 0x0

// ===== public static void BMFDCIPBPAN()  [RVA 0x3565F14]
// PNCLBBMPHKB$$BMFDCIPBPAN @ RVA 0x3565F14

void PNCLBBMPHKB__BMFDCIPBPAN(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if ((DAT_04568bf6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Clear__);
    FUN_01bab630(&PNCLBBMPHKB_TypeInfo);
    DAT_04568bf6 = 1;
  }
  if ((PNCLBBMPHKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           PNCLBBMPHKB_TypeInfo->static_fields->JNHCNDDALMK;
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Clear
              (__this,Method_System_Collections_Generic_HashSet<string>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void CPKALHFIAPN(string FEPLAGOGJNL)  [RVA 0x3565F8C]
// PNCLBBMPHKB$$CPKALHFIAPN @ RVA 0x3565F8C

void PNCLBBMPHKB__CPKALHFIAPN(System_String_o *FEPLAGOGJNL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568bf7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&PNCLBBMPHKB_TypeInfo);
    DAT_04568bf7 = 1;
    method = extraout_x1;
  }
  if ((PNCLBBMPHKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNCLBBMPHKB_TypeInfo,method);
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           PNCLBBMPHKB_TypeInfo->static_fields->JNHCNDDALMK;
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Add
                      (__this,(Il2CppObject *)FEPLAGOGJNL,
                       Method_System_Collections_Generic_HashSet<string>_Add__);
    if (bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log((Il2CppObject *)FEPLAGOGJNL,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x356604C]
// PNCLBBMPHKB$$.cctor @ RVA 0x356604C

void PNCLBBMPHKB___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if ((DAT_04568bf8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01bab630(&PNCLBBMPHKB_TypeInfo);
    DAT_04568bf8 = 1;
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (__this,Method_System_Collections_Generic_HashSet<string>__ctor__);
  PNCLBBMPHKB_TypeInfo->static_fields->JNHCNDDALMK =
       (System_Collections_Generic_HashSet_string__o *)__this;
  thunk_FUN_01c20e04(PNCLBBMPHKB_TypeInfo->static_fields,__this);
  return;
}

