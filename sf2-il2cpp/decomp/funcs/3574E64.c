// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$HLDACDDIGJM @ RVA 0x3574E64

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__HLDACDDIGJM
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,
               Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB,JMDPBFOCHHP_FNILDHLJBBJ_o *GDGBNEPJEOO,
               MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *__this_00;
  Il2CppObject *pIVar3;
  HOOAAGABMBL_o *pHVar4;
  JMDPBFOCHHP_o *__this_01;
  System_Collections_Generic_List_DDMHMABAHHD__o *pSVar5;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_02;
  HBNENINHPGF_o *pHVar6;
  DOPEEDABNEK_o *__this_03;
  System_String_o *pSVar7;
  System_String_o **ppSVar8;
  Il2CppClass *KGLJICLJHEL;
  
  if ((DAT_04568c7d & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Count__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Item__
                );
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14101);
    FUN_01bab630(&StringLiteral_14092);
    __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)FUN_01bab630(&StringLiteral_9084);
    DAT_04568c7d = 1;
  }
  if (IEPECMCLKJB == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03675178;
  pfVar1 = &(IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier;
  uVar2 = StringLiteral_14092._4_4_;
  (IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14092;
  (IEPECMCLKJB->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar2;
  __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)thunk_FUN_01c20e04(pfVar1);
  if (GDGBNEPJEOO == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) goto LAB_03675178;
  __this_00 = (GDGBNEPJEOO->fields).BAPMMGFEIDM;
  __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
  if (__this_00 == (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0)
  goto LAB_03675178;
  if ((__this_00->fields)._size < 1) {
LAB_03674fe4:
    pSVar5 = (GDGBNEPJEOO->fields).GFBNJPMOEKD;
    __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
    if (pSVar5 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) goto LAB_03675178;
    if (0 < (pSVar5->fields)._size) {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,0,
                          Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03675178;
      KGLJICLJHEL = pIVar3[1].klass;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (__this_02 == (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) goto LAB_03675178;
      pHVar6 = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO
                         (__this_02,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
      if (pHVar6 != (HBNENINHPGF_o *)0x0) {
        ppSVar8 = &(pHVar6->fields)._PGCEKJLODEJ_k__BackingField;
        goto LAB_036750f0;
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04563eaa == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (__this_03 == (DOPEEDABNEK_o *)0x0) goto LAB_03675178;
      pHVar4 = DOPEEDABNEK__CKKIPBAIEMN(__this_03,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
      if (pHVar4 != (HOOAAGABMBL_o *)0x0) goto LAB_036750c4;
      pSVar5 = (GDGBNEPJEOO->fields).GFBNJPMOEKD;
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (pSVar5 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) goto LAB_03675178;
    }
    if (0 < (pSVar5->fields)._size) {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,0,
                          Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (pIVar3 == (Il2CppObject *)0x0) {
LAB_03675178:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8(__this);
      }
      pSVar5 = (GDGBNEPJEOO->fields).GFBNJPMOEKD;
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (pSVar5 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) goto LAB_03675178;
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,0,
                          Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03675178;
      if (*(int *)((long)&pIVar3[2].klass + 4) == 1) {
        ppSVar8 = (System_String_o **)&StringLiteral_14101;
        goto LAB_036750f0;
      }
    }
    ppSVar8 = (System_String_o **)&StringLiteral_9084;
  }
  else {
    pIVar3 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,0,
                        Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Item__
                       );
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)
             HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((pIVar3 == (Il2CppObject *)0x0) ||
       (__this == (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0)) goto LAB_03675178;
    pHVar4 = (HOOAAGABMBL_o *)
             JMDPBFOCHHP__DIFLKMKBENA
                       ((JMDPBFOCHHP_o *)__this,pIVar3[2].monitor,false,(MethodInfo *)0x0);
    if (pHVar4 == (HOOAAGABMBL_o *)0x0) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (__this_01 == (JMDPBFOCHHP_o *)0x0) goto LAB_03675178;
      pHVar4 = (HOOAAGABMBL_o *)
               JMDPBFOCHHP__DIFLKMKBENA
                         (__this_01,(GDGBNEPJEOO->fields).JFDGLPNMELO,false,(MethodInfo *)0x0);
      if (pHVar4 == (HOOAAGABMBL_o *)0x0) goto LAB_03674fe4;
    }
LAB_036750c4:
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
    *(System_String_o **)pfVar1 = pSVar7;
    thunk_FUN_01c20e04(pfVar1,pSVar7);
    ppSVar8 = &(pHVar4->fields)._GPEFIOMJHNN_k__BackingField;
  }
LAB_036750f0:
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName(IEPECMCLKJB,*ppSVar8,(MethodInfo *)0x0);
  return;
}

