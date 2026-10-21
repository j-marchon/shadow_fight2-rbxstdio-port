// PLIIGOCLJDL$$INGFDAFDMFG @ RVA 0x3518D18

JCFJFJCKLKG_o *
PLIIGOCLJDL__INGFDAFDMFG(PLIIGOCLJDL_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *pSVar2;
  JCFJFJCKLKG_o *pJVar3;
  MethodInfo *method_00;
  
  if ((DAT_04568950 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_get_Item__)
    ;
    DAT_04568950 = 1;
  }
  pSVar2 = (__this->fields).NKPMKDCHLOF;
  if (pSVar2 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,ACCIHBHMFPN,
                       Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_ContainsKey__
                      );
    if (!bVar1) {
      if (ACCIHBHMFPN == 2) {
        PLIIGOCLJDL__LBKJIKHMJAC(__this,method_00);
      }
      else if (ACCIHBHMFPN == 1) {
        PLIIGOCLJDL__LEKFDCNMHOJ(__this,method_00);
      }
      return (JCFJFJCKLKG_o *)0x0;
    }
    pSVar2 = (__this->fields).NKPMKDCHLOF;
    if (pSVar2 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
      pJVar3 = (JCFJFJCKLKG_o *)
               System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                          ACCIHBHMFPN,
                          Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_get_Item__
                         );
      return pJVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

