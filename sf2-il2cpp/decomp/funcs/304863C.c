// Nekki.SF2.GUI.Dialogs.Raids.SeasFinChestContent$$Init @ RVA 0x304863C

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__Init
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *__this,
               JMDPBFOCHHP_FNILDHLJBBJ_o *GDGBNEPJEOO,MethodInfo *method)

{
  System_String_o *EELDDPEAGGA;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  CocosAnimation_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  JMDPBFOCHHP_FNILDHLJBBJ_o *pJVar1;
  SFButton_o *pSVar2;
  UnityEngine_Events_UnityEvent_o *__this_03;
  JMDPBFOCHHP_FNILDHLJBBJ_o **ppJVar3;
  
  if ((DAT_04565dfa & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_21095);
    FUN_01bab630(&StringLiteral_16226);
    DAT_04565dfa = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,false,1,StringLiteral_9679,
             false,1,StringLiteral_3640,(MethodInfo *)0x0);
  ppJVar3 = &(__this->fields).KBMOPEKFNNN;
  *ppJVar3 = GDGBNEPJEOO;
  thunk_FUN_01c20e04(ppJVar3,GDGBNEPJEOO);
  if (*ppJVar3 != (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) {
    EELDDPEAGGA = System_String__Concat
                            (StringLiteral_21095,((*ppJVar3)->fields).HILNENCJHMI,
                             StringLiteral_16226,(MethodInfo *)0x0);
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo);
    }
    PNLFHHJGDLI__CJKCKACIIHK(EELDDPEAGGA,false,1.0,1.0,(MethodInfo *)0x0);
    pJVar1 = (__this->fields).KBMOPEKFNNN;
    if ((pJVar1 == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) ||
       (__this_00 = (__this->fields)._picChest, __this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0)
       ) goto LAB_03148814;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName
              (__this_00,(pJVar1->fields).KDHKFELBFJN,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields)._chestAnimation;
  if ((__this_01 != (CocosAnimation_o *)0x0) &&
     (__this_02 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
     __this_02 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._showChestRewardBtn;
    if (pSVar2 != (SFButton_o *)0x0) {
      __this_03 = (UnityEngine_Events_UnityEvent_o *)(pSVar2->fields).super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
        pSVar2 = (__this->fields)._showChestRewardBtn;
        if (pSVar2 != (SFButton_o *)0x0) {
          UnityEngine_UI_Selectable__set_interactable
                    ((UnityEngine_UI_Selectable_o *)pSVar2,false,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__MLPCOKOBCLM(__this,method_00);
          Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__EELNMLDFJDN(__this,method_01);
          Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__OIHPDGOBHEM(__this,method_02);
          return;
        }
      }
    }
  }
LAB_03148814:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

