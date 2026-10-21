// KPBOJBLLKPJ$$NBKAMBPCHNJ @ RVA 0x30882A4

System_Collections_Generic_List_ODKDFMHHLIP__o *
KPBOJBLLKPJ__NBKAMBPCHNJ(KPBOJBLLKPJ_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *pSVar2;
  System_Collections_Generic_List_ODKDFMHHLIP__o *pSVar3;
  
  if ((DAT_04566038 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_get_Item__
                );
    FUN_01bab630(&StringLiteral_4288);
    DAT_04566038 = 1;
  }
  bVar1 = ODKDFMHHLIP__NOBCLMOONLJ(ACCIHBHMFPN,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = (__this->fields).NGKLIODAFAG;
    if (pSVar2 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,ACCIHBHMFPN
                         ,
                         Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_ContainsKey__
                        );
      if (!bVar1) goto LAB_0318834c;
      pSVar2 = (__this->fields).NGKLIODAFAG;
      if (pSVar2 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *)0x0)
      {
        pSVar3 = (System_Collections_Generic_List_ODKDFMHHLIP__o *)
                 System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                            ACCIHBHMFPN,
                            Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_get_Item__
                           );
        return pSVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0318834c:
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_4288,(MethodInfo *)0x0);
  return (System_Collections_Generic_List_ODKDFMHHLIP__o *)0x0;
}

