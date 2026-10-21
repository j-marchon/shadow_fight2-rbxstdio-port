// FCJBEKHDLAF$$DKNNDNIGMIM @ RVA 0x33EA18C

void FCJBEKHDLAF__DKNNDNIGMIM(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  PJKHAJKEHEL_o *KCHOEJOHIMM;
  PJKHAJKEHEL_o *JEDELFOBLEN;
  uint uVar1;
  bool bVar2;
  int32_t iVar3;
  CMAACCOMHBJ_o *__this_00;
  System_Action_BFMEMCBCKLK__o *pSVar4;
  MethodInfo *in_x6;
  AFFHKININGD_o *pAVar5;
  JIMKCICMMIL_o *pJVar6;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar7;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar8;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar9;
  System_Collections_Generic_List_PJKHAJKEHEL__o *DFGLEOANOFI;
  
  if ((DAT_04567ef0 & 1) == 0) {
    FUN_01bab630(&System_Action<BFMEMCBCKLK>_TypeInfo);
    FUN_01bab630(&CMAACCOMHBJ_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_FCJBEKHDLAF_GFAIICJOKFI__);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6312);
    FUN_01bab630(&StringLiteral_6311);
    DAT_04567ef0 = 1;
  }
  pJVar6 = (__this->fields).ODIAFMNGOLA;
  if (pJVar6 != (JIMKCICMMIL_o *)0x0) {
    (pJVar6->fields).BLGIPOEBHGA = false;
    pAVar5 = (__this->fields).FBFPLEFCDOK;
    if (pAVar5 != (AFFHKININGD_o *)0x0) {
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pAVar5->fields).GENLHJOKOIJ.fields,(MethodInfo *)0x0);
      (pJVar6->fields).JLGJOLIMJKB = iVar3;
      pJVar6 = (__this->fields).ODIAFMNGOLA;
      if (pJVar6 != (JIMKCICMMIL_o *)0x0) {
        (pJVar6->fields).LFJGFLNMBMC = 0;
        pAVar5 = (__this->fields).FBFPLEFCDOK;
        if (pAVar5 != (AFFHKININGD_o *)0x0) {
          iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (pAVar5->fields).NHNNEADDBDB.fields,(MethodInfo *)0x0);
          (pJVar6->fields).OBOADGAKAHJ = iVar3;
          pAVar5 = (__this->fields).FBFPLEFCDOK;
          if ((pAVar5 != (AFFHKININGD_o *)0x0) &&
             (pJVar6 = (__this->fields).ODIAFMNGOLA, pJVar6 != (JIMKCICMMIL_o *)0x0)) {
            (pJVar6->fields).FIICJBPKIJA = (pAVar5->fields).JDNKKGPNHPB == 0x14;
            __this_00 = (CMAACCOMHBJ_o *)thunk_FUN_01bda818(CMAACCOMHBJ_TypeInfo);
            CMAACCOMHBJ___ctor(__this_00,(MethodInfo *)0x0);
            pAVar5 = (__this->fields).FBFPLEFCDOK;
            KCHOEJOHIMM = (__this->fields).KCHOEJOHIMM;
            JEDELFOBLEN = (__this->fields).JEDELFOBLEN;
            DFGLEOANOFI = (__this->fields).DFGLEOANOFI;
            iVar3 = (__this->fields).CLFDJLLDNGD;
            if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            FCJBEKHDLAF__IBPFFBENEIN
                      (pAVar5,KCHOEJOHIMM,JEDELFOBLEN,DFGLEOANOFI,iVar3,__this_00,in_x6);
            pNVar9 = (__this->fields).HIBPKNAIPLH;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (!bVar2) {
              return;
            }
            if ((__this_00 != (CMAACCOMHBJ_o *)0x0) &&
               (pNVar9 = (__this->fields).HIBPKNAIPLH,
               pNVar9 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0)) {
              Nekki_SF2_GUI_Fight_PreFight__ViewerInit
                        (pNVar9,(__this->fields).ODIAFMNGOLA,(__this->fields).KCHOEJOHIMM,
                         (__this->fields).JEDELFOBLEN,(__this_00->fields).CJEBOKPPFDK,
                         (MethodInfo *)0x0);
              pAVar5 = (__this->fields).FBFPLEFCDOK;
              if (pAVar5 != (AFFHKININGD_o *)0x0) {
                uVar1 = (pAVar5->fields).JDNKKGPNHPB;
                if ((uVar1 < 0x16) && ((1 << (ulong)(uVar1 & 0x1f) & 0x200404U) != 0)) {
                  (__this_00->fields).BLOEBCBBGBK = false;
                }
                pNVar9 = (__this->fields).HIBPKNAIPLH;
                if (pNVar9 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                  Nekki_SF2_GUI_Fight_PreFight__CreateVS
                            (pNVar9,(__this->fields).KCHOEJOHIMM,(__this_00->fields).PNOOBNMLMAC,
                             (__this_00->fields).DHKKFLABKEF,(__this_00->fields).DIOPDIKJLCA,
                             (__this_00->fields).BLOEBCBBGBK,(__this_00->fields).EOGKCNNHPFL,
                             (__this_00->fields).HIOHGCIKLNF,(MethodInfo *)0x0);
                  pNVar9 = (__this->fields).HIBPKNAIPLH;
                  if (pNVar9 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                    pNVar7 = (pNVar9->fields).FLKPJPEAJAJ;
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    bVar2 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    pNVar8 = (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0;
                    if (bVar2) {
                      pNVar9 = (__this->fields).HIBPKNAIPLH;
                      if ((pNVar9 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) ||
                         (pNVar7 = (pNVar9->fields).FLKPJPEAJAJ,
                         pNVar7 == (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0)) goto LAB_034ea598;
                      pNVar8 = (pNVar7->fields).leftModel;
                    }
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    bVar2 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar2) {
                      pSVar4 = (System_Action_BFMEMCBCKLK__o *)
                               thunk_FUN_01bda818(System_Action<BFMEMCBCKLK>_TypeInfo);
                      System_Action<object>___ctor();
                      if (pNVar8 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_034ea598;
                      Nekki_SF2_GUI_Fight_ScreenModel__add_OnStyleChange
                                (pNVar8,pSVar4,(MethodInfo *)0x0);
                    }
                    else {
                      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      UnityEngine_Debug__LogError(StringLiteral_6312,(MethodInfo *)0x0);
                    }
                    pNVar9 = (__this->fields).HIBPKNAIPLH;
                    if (pNVar9 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                      pNVar7 = (pNVar9->fields).FLKPJPEAJAJ;
                      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      bVar2 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      pNVar8 = (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0;
                      if (bVar2) {
                        pNVar9 = (__this->fields).HIBPKNAIPLH;
                        if ((pNVar9 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) ||
                           (pNVar7 = (pNVar9->fields).FLKPJPEAJAJ,
                           pNVar7 == (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0)) goto LAB_034ea598;
                        pNVar8 = (pNVar7->fields).rightModel;
                      }
                      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      bVar2 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if (!bVar2) {
                        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        UnityEngine_Debug__LogError(StringLiteral_6311,(MethodInfo *)0x0);
                        return;
                      }
                      pSVar4 = (System_Action_BFMEMCBCKLK__o *)
                               thunk_FUN_01bda818(System_Action<BFMEMCBCKLK>_TypeInfo);
                      System_Action<object>___ctor();
                      if (pNVar8 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
                        Nekki_SF2_GUI_Fight_ScreenModel__add_OnStyleChange
                                  (pNVar8,pSVar4,(MethodInfo *)0x0);
                        return;
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
LAB_034ea598:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

