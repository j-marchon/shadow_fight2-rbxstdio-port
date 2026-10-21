// OCHIFKHFMAC$$OBAAEJBBGAI @ RVA 0x358A634

System_Collections_Generic_Dictionary_string__bool__o *
OCHIFKHFMAC__OBAAEJBBGAI(OCHIFKHFMAC_o *__this,MethodInfo *method)

{
  bool bVar1;
  PDFMAHPKIEI_o *__this_00;
  System_String_o *pSVar2;
  System_Collections_Generic_Dictionary_string__bool__o *__this_01;
  
  if ((DAT_04568d35 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_bool>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_bool>_TypeInfo);
                    /* try { // try from 0368a65c to 0378a797 has its CatchHandler @ 0368a65c
                       catch() { ... } // from try @ 0368a65c with catch @ 0368a65c
                       catch() { ... } // from try @ 0368a868 with catch @ 0368a65c
                       catch() { ... } // from try @ 0368a8f0 with catch @ 0368a65c
                       catch() { ... } // from try @ 0368a8f8 with catch @ 0368a65c
                       catch() { ... } // from try @ 0368a9a0 with catch @ 0368a65c */
    FUN_01bab630(&Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_bool>>__);
    FUN_01bab630(&Newtonsoft_Json_JsonConvert_TypeInfo);
    DAT_04568d35 = 1;
  }
  __this_00 = PDFMAHPKIEI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (PDFMAHPKIEI_o *)0x0) {
    pSVar2 = PDFMAHPKIEI__KMGABJDPMBD(__this_00,(MethodInfo *)0x0);
    bVar1 = System_String__IsNullOrWhiteSpace(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      __this_01 = (System_Collections_Generic_Dictionary_string__bool__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_bool>_TypeInfo);
      System_Collections_Generic_Dictionary<object,_bool>___ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                 Method_System_Collections_Generic_Dictionary<string,_bool>__ctor__);
    }
    else {
      pSVar2 = PCOEHCPGBBG__HIPDPNHLHAC(pSVar2,(MethodInfo *)0x0);
      if ((Newtonsoft_Json_JsonConvert_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = (System_Collections_Generic_Dictionary_string__bool__o *)
                  Newtonsoft_Json_JsonConvert__DeserializeObject<object>
                            (pSVar2,
                             Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_bool>>__
                            );
      if (__this_01 == (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
        __this_01 = (System_Collections_Generic_Dictionary_string__bool__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_bool>_TypeInfo)
        ;
        System_Collections_Generic_Dictionary<object,_bool>___ctor
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                   Method_System_Collections_Generic_Dictionary<string,_bool>__ctor__);
      }
    }
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

