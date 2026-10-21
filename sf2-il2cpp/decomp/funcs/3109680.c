// OPNFCOGALLI$$CNJDMGLAFNA @ RVA 0x3109680

void OPNFCOGALLI__CNJDMGLAFNA(OPNFCOGALLI_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int32_t index;
  bool bVar3;
  bool bVar4;
  GBJGJEGPHKD_o *pGVar5;
  IEFEBEDLHNN_o *pIVar6;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  MBDJMJLHFOO_MJFFMMHJCNB_o *pMVar7;
  System_Collections_Generic_List_CNDPAJOLKFN__o *pSVar8;
  Il2CppObject *pIVar9;
  OPNFCOGALLI_o *pOVar10;
  MBDJMJLHFOO_o *pMVar11;
  ECENNHNBAME_o *pEVar12;
  int JJMCKHDALCF;
  int iVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_04566529 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_04566529 = 1;
  }
  pOVar10 = (__this->fields).DPNACGKHLGD;
  fVar14 = 0.0;
  if (pOVar10 == (OPNFCOGALLI_o *)0x0) {
LAB_032096f0:
    bVar3 = false;
  }
  else {
    pEVar12 = (__this->fields).NDBPNFLAKDL;
    if (pEVar12 == (ECENNHNBAME_o *)0x0) goto LAB_032098a8;
    if ((pEVar12->fields).LIAEJLADLPH == false) goto LAB_032096f0;
    fVar14 = (pOVar10->fields).JDKMKKIDECK;
    bVar3 = true;
  }
  pMVar11 = (__this->fields).EJNOBBDDBDO;
  if (pMVar11 != (MBDJMJLHFOO_o *)0x0) {
    iVar13 = (__this->fields).BPIIACENHPE;
    JJMCKHDALCF = iVar13 + 2;
    if ((pMVar11->fields).MONBPDGKCOM + -1 < JJMCKHDALCF) {
LAB_03209714:
      (__this->fields).JDKMKKIDECK = 0.0;
      return;
    }
    pGVar5 = (__this->fields).KOHECBJAFKG;
    if (pGVar5 != (GBJGJEGPHKD_o *)0x0) {
      iVar1 = (__this->fields).GMJBKKIOMCB;
      iVar2 = (__this->fields).FHJCJEMBKMP;
      pIVar6 = GBJGJEGPHKD__ILECMJOENMK(pGVar5,(MethodInfo *)0x0);
      pGVar5 = (__this->fields).KOHECBJAFKG;
      if (pGVar5 != (GBJGJEGPHKD_o *)0x0) {
        if (pIVar6 == (IEFEBEDLHNN_o *)0x0) {
          __this_00 = GBJGJEGPHKD__HMAAHELNECD(pGVar5,(MethodInfo *)0x0);
          if (__this_00 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) goto LAB_032098a8;
          pIVar6 = (IEFEBEDLHNN_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,0,
                              Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
        }
        else {
          pIVar6 = GBJGJEGPHKD__ILECMJOENMK(pGVar5,(MethodInfo *)0x0);
        }
        if ((pIVar6 != (IEFEBEDLHNN_o *)0x0) &&
           (pMVar11 = (__this->fields).EJNOBBDDBDO, pMVar11 != (MBDJMJLHFOO_o *)0x0)) {
          index = (pIVar6->fields).FLDBGCIKMKA;
          pMVar7 = MBDJMJLHFOO__HBMICHOLLMF(pMVar11,JJMCKHDALCF,(MethodInfo *)0x0);
          if ((pMVar7 != (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0) &&
             (((pSVar8 = (pMVar7->fields).KOANCCDDBDA,
               pSVar8 != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0 &&
               (pIVar9 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar8,index,
                                    Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__),
               pIVar9 != (Il2CppObject *)0x0)) &&
              (pEVar12 = (__this->fields).NDBPNFLAKDL, pEVar12 != (ECENNHNBAME_o *)0x0)))) {
            fVar15 = *(float *)&pIVar9[1].klass;
            bVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                               (pEVar12->fields).OEGKFPBBLEP.fields,(MethodInfo *)0x0);
            if (!bVar3 && ((bVar4 ^ 0xffU) & 1) == 0) {
              return;
            }
            if (!bVar3) {
              fVar14 = (__this->fields).GOIHMJKAHJN + (float)iVar1;
              if ((fVar14 <= fVar15) &&
                 (fVar14 = (__this->fields).AOOIIDBOANJ - (float)iVar2, fVar15 <= fVar14))
              goto LAB_03209714;
              fVar14 = fVar15 - fVar14;
              (__this->fields).JDKMKKIDECK = fVar14;
              if (fVar14 == 0.0) {
                return;
              }
            }
            pMVar11 = (__this->fields).EJNOBBDDBDO;
            if (pMVar11 != (MBDJMJLHFOO_o *)0x0) {
              iVar1 = (pMVar11->fields).MONBPDGKCOM;
              iVar13 = iVar13 + 4;
              if (iVar13 <= iVar1) {
                iVar1 = iVar13;
              }
              if (iVar1 <= JJMCKHDALCF) {
                return;
              }
              while (pMVar7 = MBDJMJLHFOO__HBMICHOLLMF(pMVar11,JJMCKHDALCF,(MethodInfo *)0x0),
                    pMVar7 != (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0) {
                if (0 < (pMVar7->fields).ONGLGHIKBJF) {
                  iVar13 = 0;
                  do {
                    pSVar8 = (pMVar7->fields).KOANCCDDBDA;
                    if ((pSVar8 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) ||
                       (pIVar9 = System_Collections_Generic_List<object>__get_Item
                                           ((System_Collections_Generic_List_object__o *)pSVar8,
                                            iVar13,
                                            Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__
                                           ), pIVar9 == (Il2CppObject *)0x0)) goto LAB_032098a8;
                    iVar13 = iVar13 + 1;
                    *(float *)&pIVar9[1].klass = *(float *)&pIVar9[1].klass - fVar14;
                  } while (iVar13 < (pMVar7->fields).ONGLGHIKBJF);
                }
                JJMCKHDALCF = JJMCKHDALCF + 1;
                if (JJMCKHDALCF == iVar1) {
                  return;
                }
                pMVar11 = (__this->fields).EJNOBBDDBDO;
                if (pMVar11 == (MBDJMJLHFOO_o *)0x0) break;
              }
            }
          }
        }
      }
    }
  }
LAB_032098a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

