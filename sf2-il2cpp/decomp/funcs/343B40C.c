// DOCPIHOLNOA$$FIOAJLBGPPP @ RVA 0x343B40C

int32_t DOCPIHOLNOA__FIOAJLBGPPP
                  (OJEHKJHEBID_o *PBNPKBJKFHE,System_String_o *MJIEPACBNBI,int64_t FKIGDGJPIAC,
                  MethodInfo *method)

{
  int32_t key;
  bool bVar1;
  MGDJPGGPDJI_o *pMVar2;
  JMDPBFOCHHP_o *pJVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Collections_Generic_Dictionary_KCFAKHLDKJM__JMDPBFOCHHP_GEHAFAGNJPJ__o *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar8;
  
  if ((DAT_045681d3 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<KCFAKHLDKJM,_JMDPBFOCHHP_GEHAFAGNJPJ>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BNKFAJEBNFC>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BNKFAJEBNFC>_get_Item__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<KCFAKHLDKJM,_JMDPBFOCHHP_GEHAFAGNJPJ>_get_Item__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045681d3 = 1;
  }
  if (PBNPKBJKFHE != (OJEHKJHEBID_o *)0x0) {
    pMVar2 = OJEHKJHEBID__LANNCOJFCBD(PBNPKBJKFHE,FKIGDGJPIAC,(MethodInfo *)0x0);
    if (pMVar2 == (MGDJPGGPDJI_o *)0x0) {
      return 0;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (pJVar3 != (JMDPBFOCHHP_o *)0x0) {
      pJVar8 = (pJVar3->fields)._LGFNDLOCGPB_k__BackingField;
      if (pJVar8 == (JMDPBFOCHHP_DBNJFPILODG_o *)0x0) {
        return 0;
      }
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (pJVar8->fields).MLONDBMLENH;
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                          (pSVar4,(Il2CppObject *)MJIEPACBNBI,
                           Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BNKFAJEBNFC>_ContainsKey__
                          );
        if (!bVar1) {
          return 0;
        }
        pSVar5 = (pJVar8->fields).AFAFAFILGCG;
        if (pSVar5 != (System_Collections_Generic_Dictionary_KCFAKHLDKJM__JMDPBFOCHHP_GEHAFAGNJPJ__o
                       *)0x0) {
          key = (pMVar2->fields).BDPMJNBHKIJ;
          bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,key,
                             Method_System_Collections_Generic_Dictionary<KCFAKHLDKJM,_JMDPBFOCHHP_GEHAFAGNJPJ>_ContainsKey__
                            );
          if (!bVar1) {
            return 0;
          }
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (pJVar8->fields).MLONDBMLENH;
          if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pIVar6 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                               (pSVar4,(Il2CppObject *)MJIEPACBNBI,
                                Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BNKFAJEBNFC>_get_Item__
                               );
            pSVar5 = (pJVar8->fields).AFAFAFILGCG;
            if (((pSVar5 != (System_Collections_Generic_Dictionary_KCFAKHLDKJM__JMDPBFOCHHP_GEHAFAGNJPJ__o
                             *)0x0) &&
                (pIVar7 = System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5
                                     ,key,
                                     Method_System_Collections_Generic_Dictionary<KCFAKHLDKJM,_JMDPBFOCHHP_GEHAFAGNJPJ>_get_Item__
                                    ), pIVar7 != (Il2CppObject *)0x0)) &&
               (pIVar6 != (Il2CppObject *)0x0)) {
              return (uint)(*(int *)&pIVar6[1].monitor <= *(int *)&pIVar7[2].klass);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

