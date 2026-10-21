// Nekki.SF2.GUI.Shop.InfoPanelContent$$ECPADJDPHLL @ RVA 0x3009810

void Nekki_SF2_GUI_Shop_InfoPanelContent__ECPADJDPHLL
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  System_Func_IconLabelButton__bool__o **ppSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Comparison_IconLabelButton__o **ppSVar2;
  SFButton_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  float fVar4;
  System_Collections_Generic_List_IconLabelButton__o *CJNHFNHJHPE;
  int iVar5;
  System_Func_IconLabelButton__bool__o *CPECAEHDDDB;
  System_Comparison_IconLabelButton__o *comparison;
  float fVar6;
  float fVar7;
  UnityEngine_Vector2_o MJBMLNKAPGC;
  UnityEngine_Vector2_o PGFAIJMMOHJ;
  
  if ((DAT_04565b59 & 1) == 0) {
    FUN_01bab630(&System_Comparison<IconLabelButton>_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_ADHEKCHLKFA<IconLabelButton>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<IconLabelButton>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_PHPELPFMOII<IconLabelButton>__);
    FUN_01bab630(&System_Func<IconLabelButton,_bool>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IconLabelButton>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IconLabelButton>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IconLabelButton>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_AIBGCCPEGJG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_OFLICMNNNPA__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo);
    DAT_04565b59 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (__this->fields).PGCBEJGMIMA;
  if ((Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  CPECAEHDDDB = Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->static_fields->__9__64_0;
  if (CPECAEHDDDB == (System_Func_IconLabelButton__bool__o *)0x0) {
    if ((Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo,method);
    }
    CPECAEHDDDB = (System_Func_IconLabelButton__bool__o *)
                  thunk_FUN_01bda818(System_Func<IconLabelButton,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->static_fields->__9__64_0;
    *ppSVar1 = CPECAEHDDDB;
    thunk_FUN_01c20e04(ppSVar1,CPECAEHDDDB);
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              DJNBJHPDKDP__ADHEKCHLKFA<object>
                        ((System_Collections_Generic_List_T__o *)CJNHFNHJHPE,
                         (System_Func_T__bool__o *)CPECAEHDDDB,
                         Method_DJNBJHPDKDP_ADHEKCHLKFA<IconLabelButton>__);
  if ((Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo);
  }
  comparison = Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->static_fields->__9__64_1;
  if (comparison == (System_Comparison_IconLabelButton__o *)0x0) {
    if ((Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo);
    }
    comparison = (System_Comparison_IconLabelButton__o *)
                 thunk_FUN_01bda818(System_Comparison<IconLabelButton>_TypeInfo);
    System_Comparison<object>___ctor();
    ppSVar2 = &Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->static_fields->__9__64_1;
    *ppSVar2 = comparison;
    thunk_FUN_01c20e04(ppSVar2,comparison);
  }
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__Sort
              (__this_00,(System_Comparison_T__o *)comparison,
               Method_System_Collections_Generic_List<IconLabelButton>_Sort__);
    iVar5 = (__this_00->fields)._size;
    if (iVar5 < 2) {
      pSVar3 = (SFButton_o *)
               DJNBJHPDKDP__PHPELPFMOII<object>
                         ((System_Collections_Generic_List_T__o *)__this_00,
                          Method_DJNBJHPDKDP_PHPELPFMOII<IconLabelButton>__);
      if (pSVar3 != (SFButton_o *)0x0) {
        fVar6 = 0.0;
        fVar7 = 20.0;
        fVar4 = 320.0;
LAB_03109aa8:
        MJBMLNKAPGC.fields.y = fVar7;
        MJBMLNKAPGC.fields.x = fVar6;
        PGFAIJMMOHJ.fields.y = fVar4;
        PGFAIJMMOHJ.fields.x = 540.0;
        SFButton__CreateAdditionalTouchZone(pSVar3,PGFAIJMMOHJ,MJBMLNKAPGC,(MethodInfo *)0x0);
        return;
      }
    }
    else if (iVar5 == 2) {
      pSVar3 = (SFButton_o *)
               DJNBJHPDKDP__PHPELPFMOII<object>
                         ((System_Collections_Generic_List_T__o *)__this_00,
                          Method_DJNBJHPDKDP_PHPELPFMOII<IconLabelButton>__);
      if (pSVar3 != (SFButton_o *)0x0) {
        SFButton__CreateAdditionalTouchZone
                  (pSVar3,(UnityEngine_Vector2_o)0x4334000044070000,
                   (UnityEngine_Vector2_o)0x41c8000000000000,(MethodInfo *)0x0);
        pSVar3 = (SFButton_o *)
                 DJNBJHPDKDP__KIKGKKGDCKK<object>
                           ((System_Collections_Generic_List_T__o *)__this_00,
                            Method_DJNBJHPDKDP_KIKGKKGDCKK<IconLabelButton>__);
        if (pSVar3 != (SFButton_o *)0x0) {
          fVar7 = -25.0;
          fVar4 = 180.0;
          fVar6 = -0.0;
          goto LAB_03109aa8;
        }
      }
    }
    else {
      iVar5 = 1;
      while (pSVar3 = (SFButton_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (__this_00,iVar5,
                                 Method_System_Collections_Generic_List<IconLabelButton>_get_Item__)
            , pSVar3 != (SFButton_o *)0x0) {
        SFButton__CreateAdditionalTouchZone
                  (pSVar3,(UnityEngine_Vector2_o)0x430c000044070000,(UnityEngine_Vector2_o)0x0,
                   (MethodInfo *)0x0);
        iVar5 = iVar5 + 1;
        if ((__this_00->fields)._size + -1 <= iVar5) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

