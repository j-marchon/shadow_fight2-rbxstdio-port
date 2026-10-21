// CNIFAIKGHKO$$NFJIIGCLFOF @ RVA 0x312ECC4

bool CNIFAIKGHKO__NFJIIGCLFOF(CNIFAIKGHKO_o *__this,NODLJPNGNBG_o *HEHMPFLAEGE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_00;
  
  if ((DAT_045666b3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_ContainsKey__);
    DAT_045666b3 = 1;
  }
  if ((HEHMPFLAEGE != (NODLJPNGNBG_o *)0x0) &&
     (__this_00 = (__this->fields).NEJBDJKOGOM,
     __this_00 != (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary<long,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (HEHMPFLAEGE->fields).ANAJGHJEEOC,
                       Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_ContainsKey__
                      );
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

