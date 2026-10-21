// KFCFGKEHPNK$$IJLDCOOMEBN @ RVA 0x30834FC

float KFCFGKEHPNK__IJLDCOOMEBN(int32_t BLEOKMIDGIK,MethodInfo *method)

{
  bool bVar1;
  JMDPBFOCHHP_o *pJVar2;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar4;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  float fVar5;
  
  if ((DAT_04566009 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>_get_Item__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566009 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar2 != (JMDPBFOCHHP_o *)0x0) {
    pJVar4 = (pJVar2->fields)._LGFNDLOCGPB_k__BackingField;
    fVar5 = 0.0;
    if (pJVar4 != (JMDPBFOCHHP_DBNJFPILODG_o *)0x0) {
      __this = (System_Collections_Generic_Dictionary_int__object__o *)(pJVar4->fields).BCEDGEOHECB;
      if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_031835cc;
      bVar1 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                        (__this,BLEOKMIDGIK,
                         Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>_ContainsKey__
                        );
      fVar5 = 0.0;
      if (bVar1) {
        pIVar3 = System_Collections_Generic_Dictionary<int,_object>__get_Item
                           (__this,BLEOKMIDGIK,
                            Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>_get_Item__
                           );
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_031835cc;
        fVar5 = *(float *)((long)&pIVar3[1].klass + 4);
      }
    }
    return fVar5;
  }
LAB_031835cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

