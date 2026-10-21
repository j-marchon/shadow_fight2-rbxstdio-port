// OGHIOMKFPLH$$FMKPDBDNGCC @ RVA 0x3467BA0

void OGHIOMKFPLH__FMKPDBDNGCC(System_String_o *KDBEANBDECO,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_object__int__o *pSVar3;
  
  if ((DAT_045682e7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    FUN_01bab630(&OGHIOMKFPLH_TypeInfo);
    DAT_045682e7 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KDBEANBDECO,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)
             OGHIOMKFPLH_TypeInfo->static_fields->ENBBAOCAFDC;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
LAB_03567d7c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<object,_int>__ContainsKey
                      (pSVar3,(Il2CppObject *)KDBEANBDECO,
                       Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(OGHIOMKFPLH_TypeInfo);
    }
    if (bVar1) {
      pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)
               OGHIOMKFPLH_TypeInfo->static_fields->ENBBAOCAFDC;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto LAB_03567d7c;
      iVar2 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                        (pSVar3,(Il2CppObject *)KDBEANBDECO,
                         Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    }
    else {
      iVar2 = OGHIOMKFPLH_TypeInfo->static_fields->OFDDBKNFNID;
    }
    if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(OGHIOMKFPLH_TypeInfo);
    }
    if (DAT_0456830c == '\0') {
      FUN_01bab630(&OGHIOMKFPLH_TypeInfo);
                    /* try { // try from 03567cac to 03667dfb has its CatchHandler @ 03567cac
                       catch() { ... } // from try @ 03567cac with catch @ 03567cac
                       catch() { ... } // from try @ 03567ed8 with catch @ 03567cac
                       catch() { ... } // from try @ 03567f98 with catch @ 03567cac
                       catch() { ... } // from try @ 03567fa0 with catch @ 03567cac
                       catch() { ... } // from try @ 03568054 with catch @ 03567cac */
      DAT_0456830c = '\x01';
    }
    if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (OGHIOMKFPLH_TypeInfo->static_fields->_PEOFDHDGLCH_k__BackingField < iVar2) {
      if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_0456830d == '\0') {
        FUN_01bab630(&OGHIOMKFPLH_TypeInfo);
        DAT_0456830d = '\x01';
      }
      if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      OGHIOMKFPLH_TypeInfo->static_fields->_ADLDJLCDIMD_k__BackingField = KDBEANBDECO;
      thunk_FUN_01c20e04(OGHIOMKFPLH_TypeInfo->static_fields,KDBEANBDECO);
      if (DAT_0456830e == '\0') {
        FUN_01bab630(&OGHIOMKFPLH_TypeInfo);
        DAT_0456830e = '\x01';
      }
      if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      OGHIOMKFPLH_TypeInfo->static_fields->_PEOFDHDGLCH_k__BackingField = iVar2;
    }
  }
  return;
}

