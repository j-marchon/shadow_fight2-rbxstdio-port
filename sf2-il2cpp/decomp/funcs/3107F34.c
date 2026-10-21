// OPNFCOGALLI$$HJCNIFHFOIH @ RVA 0x3107F34

void OPNFCOGALLI__HJCNIFHFOIH(OPNFCOGALLI_o *__this,int32_t KCKJHNCJDGD,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  MBDJMJLHFOO_o *pMVar3;
  MBDJMJLHFOO_MJFFMMHJCNB_o *pMVar4;
  MBDJMJLHFOO_MJFFMMHJCNB_o *pMVar5;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  Il2CppObject *pIVar6;
  System_Collections_Generic_List_CNDPAJOLKFN__o *pSVar7;
  CNDPAJOLKFN_o *pCVar8;
  ECENNHNBAME_o *pEVar9;
  GBJGJEGPHKD_o *__this_01;
  Il2CppClass *pIVar10;
  int index;
  CNDPAJOLKFN_o *pCVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((DAT_04566523 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    FUN_01bab630(&StringLiteral_9165);
    DAT_04566523 = 1;
  }
  if ((__this->fields).NDBPNFLAKDL == (ECENNHNBAME_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_9165,(MethodInfo *)0x0);
    return;
  }
  pMVar3 = (__this->fields).EJNOBBDDBDO;
  if (pMVar3 != (MBDJMJLHFOO_o *)0x0) {
    MBDJMJLHFOO__PIIOPLBOFKA(pMVar3,KCKJHNCJDGD,(MethodInfo *)0x0);
    pEVar9 = (__this->fields).NDBPNFLAKDL;
    if (pEVar9 != (ECENNHNBAME_o *)0x0) {
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pEVar9->fields).FECCBIOBKAF.fields,(MethodInfo *)0x0);
      pMVar3 = (__this->fields).EJNOBBDDBDO;
      iVar1 = iVar2 + 2;
      if (-1 < iVar2 + 1) {
        iVar1 = iVar2 + 1;
      }
      if (pMVar3 != (MBDJMJLHFOO_o *)0x0) {
        pMVar4 = MBDJMJLHFOO__HBMICHOLLMF(pMVar3,0,(MethodInfo *)0x0);
        pMVar3 = (__this->fields).EJNOBBDDBDO;
        if (pMVar3 != (MBDJMJLHFOO_o *)0x0) {
          pMVar5 = MBDJMJLHFOO__HBMICHOLLMF(pMVar3,1,(MethodInfo *)0x0);
          __this_01 = (__this->fields).KOHECBJAFKG;
          if ((__this_01 != (GBJGJEGPHKD_o *)0x0) &&
             (__this_00 = GBJGJEGPHKD__HMAAHELNECD(__this_01,(MethodInfo *)0x0),
             pMVar4 != (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0)) {
            if (0 < (pMVar4->fields).ONGLGHIKBJF) {
              index = 0;
              fVar15 = (float)(iVar1 >> 1);
              do {
                if ((__this_00 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) ||
                   (pIVar6 = System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)__this_00,index
                                        ,
                                        Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__
                                       ), pIVar6 == (Il2CppObject *)0x0)) goto LAB_032081e8;
                pCVar11 = pIVar6[3].monitor;
                pIVar6 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)__this_00,index,
                                    Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
                if ((pIVar6 == (Il2CppObject *)0x0) ||
                   (((pCVar11 == (CNDPAJOLKFN_o *)0x0 ||
                     (pIVar10 = pIVar6[4].klass, pIVar10 == (Il2CppClass *)0x0)) ||
                    (pSVar7 = (pMVar4->fields).KOANCCDDBDA,
                    pSVar7 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0))))
                goto LAB_032081e8;
                fVar12 = (pCVar11->fields).super.OHHDBINAJCB;
                fVar13 = (pCVar11->fields).super.JOLEIODMLFL;
                fVar18 = *(float *)&(pIVar10->_1).name;
                fVar16 = *(float *)((long)&(pIVar10->_1).name + 4);
                fVar14 = (pCVar11->fields).PPOPAMHBMGG;
                fVar17 = *(float *)&(pIVar10->_1).namespaze;
                pCVar8 = (CNDPAJOLKFN_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                    Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
                if (pCVar8 == (CNDPAJOLKFN_o *)0x0) goto LAB_032081e8;
                CNDPAJOLKFN__FOOHBJNHOKK(pCVar8,pCVar11,(MethodInfo *)0x0);
                pSVar7 = (pMVar4->fields).KOANCCDDBDA;
                if ((pSVar7 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) ||
                   (pCVar8 = (CNDPAJOLKFN_o *)
                             System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                        Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__
                                       ), pCVar8 == (CNDPAJOLKFN_o *)0x0)) goto LAB_032081e8;
                fVar18 = (fVar12 - fVar18) * fVar15;
                fVar13 = (fVar13 - fVar16) * fVar15;
                fVar12 = (fVar14 - fVar17) * fVar15;
                CNDPAJOLKFN__LOPALOLIHBH(pCVar8,fVar18,fVar13,fVar12,(MethodInfo *)0x0);
                if ((pMVar5 == (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0) ||
                   ((pSVar7 = (pMVar5->fields).KOANCCDDBDA,
                    pSVar7 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0 ||
                    (pCVar8 = (CNDPAJOLKFN_o *)
                              System_Collections_Generic_List<object>__get_Item
                                        ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                         Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__
                                        ), pCVar8 == (CNDPAJOLKFN_o *)0x0)))) goto LAB_032081e8;
                CNDPAJOLKFN__FOOHBJNHOKK(pCVar8,pCVar11,(MethodInfo *)0x0);
                pSVar7 = (pMVar5->fields).KOANCCDDBDA;
                if ((pSVar7 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) ||
                   (pCVar11 = (CNDPAJOLKFN_o *)
                              System_Collections_Generic_List<object>__get_Item
                                        ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                         Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__
                                        ), pCVar11 == (CNDPAJOLKFN_o *)0x0)) goto LAB_032081e8;
                CNDPAJOLKFN__LFENGGKOJDO(pCVar11,fVar18,fVar13,fVar12,(MethodInfo *)0x0);
                index = index + 1;
              } while (index < (pMVar4->fields).ONGLGHIKBJF);
            }
            return;
          }
        }
      }
    }
  }
LAB_032081e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

