// FCJBEKHDLAF$$GHJKEOGGFBM @ RVA 0x33E9CE0

void FCJBEKHDLAF__GHJKEOGGFBM(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar3;
  PJKHAJKEHEL_o *pPVar4;
  OLKKAIFGGAK_o *pOVar5;
  BEPJMNAHCAD_o *__this_00;
  MMDDDDFHOLG_o *__this_01;
  IPPEHAJADOO_o *__this_02;
  FCJBEKHDLAF_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_x2;
  MethodInfo *pMVar6;
  AFFHKININGD_o *pAVar7;
  JIMKCICMMIL_o *pJVar8;
  OLKKAIFGGAK_o **ppOVar9;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar10;
  PJKHAJKEHEL_o **ppPVar11;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567edd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567edd = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pAVar7 = (__this->fields).FBFPLEFCDOK;
  if (pAVar7 != (AFFHKININGD_o *)0x0) {
    if ((pAVar7->fields).JDNKKGPNHPB == 0) {
      return;
    }
    (__this->fields).KPNMLAECCEE = false;
    (__this->fields).DFMCHFJOPIP = false;
    FCJBEKHDLAF__EJPACOMGKAD(__this,method);
    pJVar8 = (__this->fields).ODIAFMNGOLA;
    if (pJVar8 != (JIMKCICMMIL_o *)0x0) {
      (pJVar8->fields).ODIAFMNGOLA = 0;
      ppOVar9 = &(__this->fields).CLEKIBBCAOJ;
      FCJBEKHDLAF__CABNLDNOLDM(__this,*ppOVar9,in_x2);
      pSVar3 = (__this->fields).DFGLEOANOFI;
      if (pSVar3 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_88,(System_Collections_Generic_List_object__o *)pSVar3,
                   Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
        local_70.fields._index = local_88.fields._index;
        local_70.fields._version = local_88.fields._version;
        local_70.fields._list = local_88.fields._list;
        local_70.fields._current = local_88.fields._current;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_70,
                                  Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__
                                 ), pIVar1 = local_70.fields._current, bVar2) {
          if ((PJKHAJKEHEL_o *)local_70.fields._current == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          ((PJKHAJKEHEL_Fields *)((long)local_70.fields._current + 0x10))->GPLLAHCFFIH = 0;
          PJKHAJKEHEL__AGEFBLEDMBG((PJKHAJKEHEL_o *)local_70.fields._current,1.0,(MethodInfo *)0x0);
          *(bool_conflict *)((long)&pIVar1[0x11].klass + 2) = true;
          *(bool_conflict *)((long)&pIVar1[0x11].klass + 3) = false;
          ((PJKHAJKEHEL_Fields *)((long)pIVar1 + 0x10))->JDEPMLCEDJO = false;
          *(int32_t *)&pIVar1[0x10].monitor = 0;
          *(bool_conflict *)((long)&pIVar1[0x10].monitor + 4) = false;
          *(bool_conflict *)((long)&pIVar1[0x10].monitor + 5) = false;
          *(bool_conflict *)((long)&pIVar1[0x10].monitor + 6) = false;
          *(bool_conflict *)((long)&pIVar1[0x10].monitor + 7) = true;
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
        pSVar3 = (__this->fields).DFGLEOANOFI;
        if (pSVar3 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
          pMVar6 = Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__;
          pPVar4 = (PJKHAJKEHEL_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,0,
                              (MethodInfo_26E4ADC *)
                              Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
          ppPVar11 = &(__this->fields).JEDELFOBLEN;
          *ppPVar11 = pPVar4;
          thunk_FUN_01c20e04(ppPVar11,pPVar4);
          if (*ppPVar11 != (PJKHAJKEHEL_o *)0x0) {
            (__this->fields).JJDMOAJJGFG = ((*ppPVar11)->fields).DNAFFNAIDLB;
            thunk_FUN_01c20e04();
            (__this->fields).CLFDJLLDNGD = 0;
            pOVar5 = FCJBEKHDLAF__OCJCMHLABBF(__this,(__this->fields).JEDELFOBLEN,pMVar6);
            (__this->fields).CLEKIBBCAOJ = pOVar5;
            thunk_FUN_01c20e04(ppOVar9,pOVar5);
            FCJBEKHDLAF__ILNOJCFNNHP(__this,method_00);
            pOVar5 = (__this->fields).LAMENNMGPBN;
            if ((pOVar5 != (OLKKAIFGGAK_o *)0x0) &&
               (pPVar4 = (pOVar5->fields).FAPMJJBOFEF, pPVar4 != (PJKHAJKEHEL_o *)0x0)) {
              PJKHAJKEHEL__AGEFBLEDMBG(pPVar4,1.0,(MethodInfo *)0x0);
              (pPVar4->fields).GPLLAHCFFIH = 0;
              __this_00 = (__this->fields).FAJCMHDLBEJ;
              if (__this_00 != (BEPJMNAHCAD_o *)0x0) {
                BEPJMNAHCAD__HCKFFOOHHMA(__this_00,false,(MethodInfo *)0x0);
                __this_01 = (__this->fields).POEGCOJFMDB;
                if (__this_01 != (MMDDDDFHOLG_o *)0x0) {
                  MMDDDDFHOLG__BMJDNNBOAFL(__this_01,(__this->fields).IILLHHPGGKA,(MethodInfo *)0x0)
                  ;
                  __this_02 = (__this->fields).JJPMCDACBFG;
                  if (__this_02 != (IPPEHAJADOO_o *)0x0) {
                    IPPEHAJADOO__DBGHGKLANPG
                              (__this_02,(__this->fields).IILLHHPGGKA,(MethodInfo *)0x0);
                    pNVar10 = (__this->fields).HIBPKNAIPLH;
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pMVar6 = (MethodInfo *)0x0;
                    bVar2 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (!bVar2) {
LAB_034e9f68:
                      FCJBEKHDLAF__KENPEBLGMIN(__this,0,pMVar6);
                      FCJBEKHDLAF__DKNNDNIGMIM(__this,method_02);
                      return;
                    }
                    pNVar10 = (__this->fields).HIBPKNAIPLH;
                    if (pNVar10 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                      Nekki_SF2_GUI_Fight_PreFight__Reset(pNVar10,(MethodInfo *)0x0);
                      pNVar10 = (__this->fields).HIBPKNAIPLH;
                      if (pNVar10 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                        Nekki_SF2_GUI_Fight_PreFight__InitPreFight
                                  (pNVar10,(GOJLGHMMDBO_o *)0x0,(GOJLGHMMDBO_o *)0x0,
                                   (MethodInfo *)0x0);
                        pNVar10 = (__this->fields).HIBPKNAIPLH;
                        bVar2 = FCJBEKHDLAF__PCBHNKCHOCN(__this_03,method_01);
                        if (pNVar10 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                          pMVar6 = (MethodInfo *)0x0;
                          Nekki_SF2_GUI_Fight_PreFight__ViewerPauseVisible
                                    (pNVar10,bVar2,(MethodInfo *)0x0);
                          goto LAB_034e9f68;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

