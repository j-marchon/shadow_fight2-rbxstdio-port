// KCJMBDCBIIF$$ILBKEICPFNC @ RVA 0x2FEDAE4

CBPENMDOJDB_o *
KCJMBDCBIIF__ILBKEICPFNC(KCJMBDCBIIF_o *__this,int64_t PBNPKBJKFHE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *pSVar2;
  CBPENMDOJDB_o *pCVar3;
  
  if ((DAT_04565a44 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_get_Item__);
    DAT_04565a44 = 1;
  }
  pSVar2 = (__this->fields).CMJNDHHGCBI;
  if (pSVar2 != (System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<long,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,PBNPKBJKFHE,
                       Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_ContainsKey__
                      );
    if (!bVar1) {
      return (CBPENMDOJDB_o *)0x0;
    }
    pSVar2 = (__this->fields).CMJNDHHGCBI;
    if (pSVar2 != (System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *)0x0) {
      pCVar3 = (CBPENMDOJDB_o *)
               System_Collections_Generic_Dictionary<long,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                          PBNPKBJKFHE,
                          Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_get_Item__
                         );
      return pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

