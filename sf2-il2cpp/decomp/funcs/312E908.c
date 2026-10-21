// CNIFAIKGHKO$$JOMFHMDCMNG @ RVA 0x312E908

void CNIFAIKGHKO__JOMFHMDCMNG
               (CNIFAIKGHKO_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,bool NMOGIOHONKG,MethodInfo *method
               )

{
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_IFFFKKMMKFO__o **ppSVar1;
  IFFFKKMMKFO_o *local_28;
  
  if ((DAT_045666ae & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_TryGetValue__);
    FUN_01bab630(&StringLiteral_12225);
    DAT_045666ae = 1;
  }
  local_28 = (IFFFKKMMKFO_o *)0x0;
  if ((HEHMPFLAEGE != (GKLPDMLELJF_o *)0x0) &&
     (__this_00 = (__this->fields).NEJBDJKOGOM,
     __this_00 != (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)0x0)) {
    method_00 = (MethodInfo *)&stack0xffffffffffffffd8;
    System_Collections_Generic_Dictionary<long,_object>__TryGetValue
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (HEHMPFLAEGE->fields).ANAJGHJEEOC,(Il2CppObject **)method_00,
               Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_TryGetValue__);
    if (local_28 == (IFFFKKMMKFO_o *)0x0) {
      CNIFAIKGHKO__ACLHEAGHPNJ(__this,HEHMPFLAEGE,method_00);
      if (NMOGIOHONKG) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_12225,(MethodInfo *)0x0);
      }
    }
    else {
      IFFFKKMMKFO__LLCONNGHGKD(local_28,HEHMPFLAEGE,(MethodInfo *)0x0);
    }
    ppSVar1 = &(__this->fields).ELMHAOJGABL;
    *ppSVar1 = (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0;
    thunk_FUN_01c20e04(ppSVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

