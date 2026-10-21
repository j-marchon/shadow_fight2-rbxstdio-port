// AAPGCAPGBLG$$CKDJOILBJPC @ RVA 0x3260558

void AAPGCAPGBLG__CKDJOILBJPC(AAPGCAPGBLG_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *message;
  Il2CppClass *pIVar2;
  System_Action_T__o *action;
  System_Action_HashSet_string___o *NOOAHEHCMEL;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_CCLKPGBIBOP__o *__this_00;
  
  if ((DAT_045671a7 & 1) == 0) {
    FUN_01bab630(&Method_AAPGCAPGBLG_APMNHOBHBDM__);
    FUN_01bab630(&System_Action<HashSet<string>>_TypeInfo);
    FUN_01bab630(&System_Action<CCLKPGBIBOP>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_626);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_627);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&Method_AAPGCAPGBLG_MHBKKIEKLLE_OONMMIIICEP__);
    FUN_01bab630(&AAPGCAPGBLG_MHBKKIEKLLE_TypeInfo);
    DAT_045671a7 = 1;
    method = extraout_x1;
  }
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(AAPGCAPGBLG_MHBKKIEKLLE_TypeInfo,method);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_626,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_627,(MethodInfo *)0x0);
  message = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  pIVar2 = (Il2CppClass *)thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pIVar2,
             Method_System_Collections_Generic_List<string>__ctor__);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar1 + 1;
    pIVar1->klass = pIVar2;
    thunk_FUN_01c20e04(pIVar1,pIVar2);
    __this_00 = (__this->fields).AOCCHDFNLMC;
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<CCLKPGBIBOP>_TypeInfo);
                    /* try { // try from 0336072c to 03460b57 has its CatchHandler @ 0336072c
                       catch() { ... } // from try @ 0336072c with catch @ 0336072c
                       catch() { ... } // from try @ 03361714 with catch @ 0336072c
                       catch() { ... } // from try @ 033617c8 with catch @ 0336072c
                       catch() { ... } // from try @ 033617d0 with catch @ 0336072c
                       catch() { ... } // from try @ 033619b4 with catch @ 0336072c */
    System_Action<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,action,
                 Method_System_Collections_Generic_List<CCLKPGBIBOP>_ForEach__);
      pIVar2 = pIVar1->klass;
      NOOAHEHCMEL = (System_Action_HashSet_string___o *)
                    thunk_FUN_01bda818(System_Action<HashSet<string>>_TypeInfo);
      System_Action<object>___ctor();
      if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CLFCKIFNGHA__CIEHCLDCJOB
                ((System_Collections_Generic_List_string__o *)pIVar2,NOOAHEHCMEL,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

