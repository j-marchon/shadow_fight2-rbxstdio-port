// OPNFCOGALLI$$BIAPOHJPBCM @ RVA 0x3108610

void OPNFCOGALLI__BIAPOHJPBCM(OPNFCOGALLI_o *__this,MethodInfo *method)

{
  OPNFCOGALLI_o *__this_00;
  long lVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  OPNFCOGALLI_o *pOVar4;
  OPNFCOGALLI_o *pOVar5;
  CNDPAJOLKFN_o *pCVar6;
  CNDPAJOLKFN_o *pCVar7;
  FKGKLILLOBG_o *pFVar8;
  MBDJMJLHFOO_o *pMVar9;
  GBJGJEGPHKD_o *pGVar10;
  IEFEBEDLHNN_o *pIVar11;
  MBDJMJLHFOO_MJFFMMHJCNB_o *pMVar12;
  System_Collections_Generic_List_CNDPAJOLKFN__o *pSVar13;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_01;
  MethodInfo *in_x2;
  ECENNHNBAME_o *pEVar14;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar15;
  CNDPAJOLKFN_o *pCVar16;
  int32_t iVar17;
  ECENNHNBAME_KFMLLPPCPHI_o *pEVar18;
  float fVar19;
  float BCPIEFABCEC;
  float fVar20;
  int iVar21;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_0456651c & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    FUN_01bab630(&StringLiteral_3359);
    DAT_0456651c = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pEVar14 = (__this->fields).NDBPNFLAKDL;
  if (((pEVar14 == (ECENNHNBAME_o *)0x0) ||
      (pEVar15 = (pEVar14->fields).DMGLMCBIAGL, pEVar15 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0)) ||
     (pEVar18 = (pEVar15->fields).EJNDOMGCGFL, pEVar18 == (ECENNHNBAME_KFMLLPPCPHI_o *)0x0))
  goto LAB_03208be0;
  pOVar4 = OPNFCOGALLI__EOKACGOFPDN(__this,(pEVar18->fields).HGPLMIHMEBA,in_x2);
  pOVar5 = OPNFCOGALLI__EOKACGOFPDN(__this,(pEVar18->fields).AIJIIAOLNNJ,in_x2);
  pCVar6 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(pCVar6,(MethodInfo *)0x0);
  pCVar7 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(pCVar7,(MethodInfo *)0x0);
  __this_00 = __this;
  if (pOVar5 != (OPNFCOGALLI_o *)0x0) {
    __this_00 = pOVar5;
  }
  switch((pEVar18->fields).LBDADFDEMPE) {
  case 1:
    if (pOVar4 == (OPNFCOGALLI_o *)0x0) goto LAB_03208be0;
    if ((((pOVar4->fields).IOGCGDKKILK == false) ||
        (iVar17 = (pEVar18->fields).ADHOLLAMHDG, iVar17 < 0)) &&
       (iVar17 = (pEVar18->fields).HHLJNICBMDA, iVar17 < 0)) {
LAB_03208778:
      iVar17 = 0;
    }
    else {
      pMVar9 = (__this->fields).EJNOBBDDBDO;
      if ((pMVar9 == (MBDJMJLHFOO_o *)0x0) ||
         (pMVar12 = MBDJMJLHFOO__HBMICHOLLMF(pMVar9,2,(MethodInfo *)0x0),
         pMVar12 == (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0)) goto LAB_03208be0;
      if ((pMVar12->fields).ONGLGHIKBJF <= iVar17) goto LAB_03208778;
    }
    pMVar9 = (__this->fields).EJNOBBDDBDO;
    if (((pMVar9 == (MBDJMJLHFOO_o *)0x0) ||
        (pMVar12 = MBDJMJLHFOO__HBMICHOLLMF(pMVar9,2,(MethodInfo *)0x0),
        pMVar12 == (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0)) ||
       (pSVar13 = (pMVar12->fields).KOANCCDDBDA,
       pSVar13 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) goto LAB_03208be0;
    goto LAB_032087ec;
  case 2:
    if (pCVar6 == (CNDPAJOLKFN_o *)0x0) goto LAB_03208be0;
    CNDPAJOLKFN__DGLJCGNHLIG(pCVar6,(MethodInfo *)0x0);
    iVar21 = (__this->fields).DMJAJGGGHPF;
    in_x2 = (MethodInfo *)0x0;
    bVar3 = System_String__op_Equality
                      ((pEVar18->fields).OBBONHJFLBG,StringLiteral_3359,(MethodInfo *)0x0);
    lVar1 = 0x128;
    if ((iVar21 != 1) == bVar3) {
      lVar1 = 300;
    }
    (pCVar6->fields).super.OHHDBINAJCB = -*(float *)((long)&__this->klass + lVar1);
    break;
  case 3:
    if (pCVar6 == (CNDPAJOLKFN_o *)0x0) goto LAB_03208be0;
    CNDPAJOLKFN__DGLJCGNHLIG(pCVar6,(MethodInfo *)0x0);
    break;
  case 4:
    pMVar9 = (__this->fields).EJNOBBDDBDO;
    if (((pMVar9 == (MBDJMJLHFOO_o *)0x0) ||
        (pMVar12 = MBDJMJLHFOO__HBMICHOLLMF(pMVar9,2,(MethodInfo *)0x0),
        pMVar12 == (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0)) ||
       (pSVar13 = (pMVar12->fields).KOANCCDDBDA,
       pSVar13 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) goto LAB_03208be0;
    iVar17 = (__this->fields).NOEPMCHIBOL;
LAB_032087ec:
    pCVar16 = (CNDPAJOLKFN_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar13,iVar17,
                         Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    if (pCVar6 == (CNDPAJOLKFN_o *)0x0) goto LAB_03208be0;
    in_x2 = (MethodInfo *)0x0;
    CNDPAJOLKFN__FOOHBJNHOKK(pCVar6,pCVar16,(MethodInfo *)0x0);
  }
  switch((pEVar18->fields).LGNNMJOCKFL) {
  case 1:
    if (__this_00 == (OPNFCOGALLI_o *)0x0) goto LAB_03208be0;
    if (((__this_00->fields).IOGCGDKKILK == false) ||
       (iVar21 = (pEVar18->fields).DEDEEJDBALF, iVar21 < 0)) {
      iVar21 = (pEVar18->fields).AFHPNIKKMBM;
    }
    pIVar11 = OPNFCOGALLI__KEFBNMNGEEL(__this_00,iVar21,in_x2);
    if ((pIVar11 == (IEFEBEDLHNN_o *)0x0) || (pCVar7 == (CNDPAJOLKFN_o *)0x0)) goto LAB_03208be0;
    pCVar16 = (pIVar11->fields).CNMHHKAMGPI;
    goto LAB_032088dc;
  case 2:
    if (pCVar7 == (CNDPAJOLKFN_o *)0x0) goto LAB_03208be0;
    CNDPAJOLKFN__DGLJCGNHLIG(pCVar7,(MethodInfo *)0x0);
    iVar21 = (__this->fields).DMJAJGGGHPF;
    bVar3 = System_String__op_Equality
                      ((pEVar18->fields).CCFODMDLKFD,StringLiteral_3359,(MethodInfo *)0x0);
    lVar1 = 0x128;
    if ((iVar21 != 1) == bVar3) {
      lVar1 = 300;
    }
    (pCVar7->fields).super.OHHDBINAJCB = *(float *)((long)&__this->klass + lVar1);
    break;
  case 3:
    if ((__this_00 == (OPNFCOGALLI_o *)0x0) || (pCVar7 == (CNDPAJOLKFN_o *)0x0)) goto LAB_03208be0;
    pCVar16 = (__this_00->fields).NMLGPAGEDKH;
LAB_032088dc:
    CNDPAJOLKFN__FOOHBJNHOKK(pCVar7,pCVar16,(MethodInfo *)0x0);
    break;
  case 4:
    if (__this_00 == (OPNFCOGALLI_o *)0x0) goto LAB_03208be0;
    pIVar11 = (__this_00->fields).BAAPAKJGOMG;
    if (pIVar11 != (IEFEBEDLHNN_o *)0x0) {
      if (pCVar7 == (CNDPAJOLKFN_o *)0x0) goto LAB_03208be0;
      pCVar16 = (pIVar11->fields).CNMHHKAMGPI;
      goto LAB_032088dc;
    }
  }
  pFVar8 = (pEVar18->fields).IJILGOMOKCM;
  if (pFVar8 != (FKGKLILLOBG_o *)0x0) {
    if (pCVar7 == (CNDPAJOLKFN_o *)0x0) goto LAB_03208be0;
    fVar20 = (pCVar7->fields).super.OHHDBINAJCB;
    iVar21 = (__this->fields).DMJAJGGGHPF;
    fVar19 = FKGKLILLOBG__PPOKEOHAHFG(pFVar8,(__this->fields).KOHECBJAFKG,(MethodInfo *)0x0);
    (pCVar7->fields).super.OHHDBINAJCB = fVar20 + fVar19 * (float)iVar21;
  }
  pFVar8 = (pEVar18->fields).MECKAKAENEM;
  if (pFVar8 == (FKGKLILLOBG_o *)0x0) {
    if (pCVar7 == (CNDPAJOLKFN_o *)0x0) goto LAB_03208be0;
  }
  else {
    if (pCVar7 == (CNDPAJOLKFN_o *)0x0) goto LAB_03208be0;
    fVar20 = (pCVar7->fields).super.JOLEIODMLFL;
    fVar19 = FKGKLILLOBG__PPOKEOHAHFG(pFVar8,(__this->fields).KOHECBJAFKG,(MethodInfo *)0x0);
    (pCVar7->fields).super.JOLEIODMLFL = fVar20 + fVar19;
  }
  pCVar16 = (__this->fields).NMLGPAGEDKH;
  (__this->fields).BDLMOBMPOHM = (pCVar7->fields).super.OHHDBINAJCB;
  pCVar6 = CNDPAJOLKFN__MPOCFELGHDK(pCVar7,pCVar6,(MethodInfo *)0x0);
  if (pCVar16 != (CNDPAJOLKFN_o *)0x0) {
    CNDPAJOLKFN__FOOHBJNHOKK(pCVar16,pCVar6,(MethodInfo *)0x0);
    if ((pEVar18->fields).LBOJHMPHLGC == false) {
      pFVar8 = (pEVar18->fields).IJILGOMOKCM;
      if (pFVar8 == (FKGKLILLOBG_o *)0x0) {
        fVar19 = 0.0;
      }
      else {
        fVar19 = FKGKLILLOBG__PPOKEOHAHFG(pFVar8,(__this->fields).KOHECBJAFKG,(MethodInfo *)0x0);
      }
    }
    else {
      pCVar6 = (__this->fields).NMLGPAGEDKH;
      if (pCVar6 == (CNDPAJOLKFN_o *)0x0) goto LAB_03208be0;
      fVar19 = (pCVar6->fields).super.OHHDBINAJCB;
    }
    if ((pEVar18->fields).FPPCPCFBFCL == false) {
      pFVar8 = (pEVar18->fields).MECKAKAENEM;
      if (pFVar8 == (FKGKLILLOBG_o *)0x0) {
        fVar20 = 0.0;
      }
      else {
        fVar20 = FKGKLILLOBG__PPOKEOHAHFG(pFVar8,(__this->fields).KOHECBJAFKG,(MethodInfo *)0x0);
      }
    }
    else {
      pCVar6 = (__this->fields).NMLGPAGEDKH;
      if (pCVar6 == (CNDPAJOLKFN_o *)0x0) goto LAB_03208be0;
      fVar20 = (pCVar6->fields).super.JOLEIODMLFL;
    }
    if ((pEVar18->fields).ICPKNBPKPIF == false) {
      BCPIEFABCEC = 0.0;
    }
    else {
      pCVar6 = (__this->fields).NMLGPAGEDKH;
      if (pCVar6 == (CNDPAJOLKFN_o *)0x0) goto LAB_03208be0;
      BCPIEFABCEC = (pCVar6->fields).PPOPAMHBMGG;
    }
    pMVar9 = (__this->fields).EJNOBBDDBDO;
    if (pMVar9 != (MBDJMJLHFOO_o *)0x0) {
      MBDJMJLHFOO__GHKNFJJOIDM(pMVar9,fVar19,fVar20,BCPIEFABCEC,(MethodInfo *)0x0);
      bVar3 = System_String__IsNullOrEmpty((pEVar18->fields).GOJLAPEHHAM,(MethodInfo *)0x0);
      if (bVar3) {
        return;
      }
      pGVar10 = (__this->fields).KOHECBJAFKG;
      if (((pGVar10 != (GBJGJEGPHKD_o *)0x0) &&
          (pIVar11 = GBJGJEGPHKD__OCJAHBKIFNO
                               (pGVar10,(pEVar18->fields).GOJLAPEHHAM,(MethodInfo *)0x0),
          pIVar11 != (IEFEBEDLHNN_o *)0x0)) &&
         (pMVar9 = (__this->fields).EJNOBBDDBDO, pMVar9 != (MBDJMJLHFOO_o *)0x0)) {
        iVar17 = (pIVar11->fields).FLDBGCIKMKA;
        pMVar12 = MBDJMJLHFOO__HBMICHOLLMF(pMVar9,2,(MethodInfo *)0x0);
        if ((pMVar12 != (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0) &&
           (pSVar13 = (pMVar12->fields).KOANCCDDBDA,
           pSVar13 != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) {
          pCVar6 = (CNDPAJOLKFN_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar13,iVar17,
                              Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
          pCVar7 = CNDPAJOLKFN__MPOCFELGHDK(pCVar6,(pIVar11->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
          pCVar16 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
          CNDPAJOLKFN___ctor(pCVar16,pCVar7,(MethodInfo *)0x0);
          pCVar6 = CNDPAJOLKFN__MPOCFELGHDK(pCVar6,(pIVar11->fields).BJKKHONDAKP,(MethodInfo *)0x0);
          pCVar7 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
          CNDPAJOLKFN___ctor(pCVar7,pCVar6,(MethodInfo *)0x0);
          pGVar10 = (__this->fields).KOHECBJAFKG;
          if ((pGVar10 != (GBJGJEGPHKD_o *)0x0) &&
             (__this_01 = GBJGJEGPHKD__HMAAHELNECD(pGVar10,(MethodInfo *)0x0),
             __this_01 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
                       Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
            local_70.fields._index = local_88.fields._index;
            local_70.fields._version = local_88.fields._version;
            local_70.fields._list = local_88.fields._list;
            local_70.fields._current = local_88.fields._current;
            while( true ) {
              bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_70,
                                 Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__
                                );
              pIVar2 = local_70.fields._current;
              if (!bVar3) {
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__)
                ;
                return;
              }
              if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (local_70.fields._current[3].monitor == (CNDPAJOLKFN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              CNDPAJOLKFN__LFENGGKOJDO
                        (local_70.fields._current[3].monitor,pCVar16,(MethodInfo *)0x0);
              if (pIVar2[4].klass == (Il2CppClass *)0x0) break;
              CNDPAJOLKFN__LFENGGKOJDO((CNDPAJOLKFN_o *)pIVar2[4].klass,pCVar7,(MethodInfo *)0x0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
      }
    }
  }
LAB_03208be0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

