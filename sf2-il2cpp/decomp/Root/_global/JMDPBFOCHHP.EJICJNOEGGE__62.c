// TypeDefIndex 62
// Namespace: 
// public class JMDPBFOCHHP.EJICJNOEGGE
// Fields:
//   private HashSet<string> LIBINPPOOGI; // 0x10

// ===== public void AGACILCHJGI(string IKKAMAMLIKA)  [RVA 0x2FFB63C]
// JMDPBFOCHHP.EJICJNOEGGE$$AGACILCHJGI @ RVA 0x2FFB63C

void JMDPBFOCHHP_EJICJNOEGGE__AGACILCHJGI
               (JMDPBFOCHHP_EJICJNOEGGE_o *__this,System_String_o *IKKAMAMLIKA,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if ((DAT_04565ad7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    DAT_04565ad7 = 1;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).LIBINPPOOGI;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add
              (__this_00,(Il2CppObject *)IKKAMAMLIKA,
               Method_System_Collections_Generic_HashSet<string>_Add__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x2FFB694]
// JMDPBFOCHHP.EJICJNOEGGE$$.ctor @ RVA 0x2FFB694

void JMDPBFOCHHP_EJICJNOEGGE___ctor(JMDPBFOCHHP_EJICJNOEGGE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ad8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    DAT_04565ad8 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo,method);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_00,Method_System_Collections_Generic_HashSet<string>__ctor__);
  (__this->fields).LIBINPPOOGI = (System_Collections_Generic_HashSet_string__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool LLDDCNHNPIA(string IKKAMAMLIKA)  [RVA 0x2FFB71C]
// JMDPBFOCHHP.EJICJNOEGGE$$LLDDCNHNPIA @ RVA 0x2FFB71C

bool JMDPBFOCHHP_EJICJNOEGGE__LLDDCNHNPIA
               (JMDPBFOCHHP_EJICJNOEGGE_o *__this,System_String_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if ((DAT_04565ad9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    DAT_04565ad9 = 1;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).LIBINPPOOGI;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (__this_00,(Il2CppObject *)IKKAMAMLIKA,
                       Method_System_Collections_Generic_HashSet<string>_Contains__);
    return (bool)(~bVar1 & 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

