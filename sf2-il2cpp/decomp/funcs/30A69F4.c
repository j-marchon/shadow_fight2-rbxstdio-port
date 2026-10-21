// NAEFACJHPAL$$NDNPGAKJLHM @ RVA 0x30A69F4

void NAEFACJHPAL__NDNPGAKJLHM(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  
  if ((DAT_04566172 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Font>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_TMP_FontAsset>_Clear__);
    FUN_01bab630(&NAEFACJHPAL_TypeInfo);
    DAT_04566172 = 1;
  }
  if ((NAEFACJHPAL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           NAEFACJHPAL_TypeInfo->static_fields->AFFKEJIKNPN;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (pSVar1,Method_System_Collections_Generic_Dictionary<string,_Font>_Clear__);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             NAEFACJHPAL_TypeInfo->static_fields->NAODGIJCPFA;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (pSVar1,Method_System_Collections_Generic_Dictionary<string,_TMP_FontAsset>_Clear__)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

