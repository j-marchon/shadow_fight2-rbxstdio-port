// HCKCBFOGMMJ$$LLEJFHJIBHC @ RVA 0x31CDBB8

GKLPDMLELJF_o *
HCKCBFOGMMJ__LLEJFHJIBHC(HCKCBFOGMMJ_o *__this,int64_t OGPGLGPMEPD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *pSVar2;
  GKLPDMLELJF_o *pGVar3;
  
  if ((DAT_04566c83 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Item__);
    DAT_04566c83 = 1;
  }
  pSVar2 = (__this->fields).CMJNDHHGCBI;
  if (pSVar2 != (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<long,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,OGPGLGPMEPD,
                       Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_ContainsKey__
                      );
    if (!bVar1) {
      return (GKLPDMLELJF_o *)0x0;
    }
    pSVar2 = (__this->fields).CMJNDHHGCBI;
    if (pSVar2 != (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) {
      pGVar3 = (GKLPDMLELJF_o *)
               System_Collections_Generic_Dictionary<long,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                          OGPGLGPMEPD,
                          Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Item__
                         );
      return pGVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

