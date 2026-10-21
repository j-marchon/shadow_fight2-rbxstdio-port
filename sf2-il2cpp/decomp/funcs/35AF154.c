// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$NJBBDBHJKNN @ RVA 0x35AF154

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__NJBBDBHJKNN
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  SFButton_o *pSVar4;
  IFFFKKMMKFO_o *pIVar5;
  UnityEngine_Events_UnityEvent_o *__this_02;
  float AOGPHAIDFAA;
  
  if ((DAT_04568e7a & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_JNHCLDEMMOM__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_1223);
    DAT_04568e7a = 1;
  }
  pNVar3 = (__this->fields)._chest;
  if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pNVar3->fields)._TexturePath,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._chest;
    if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,!bVar1,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar4 = (__this->fields)._chestHintButton;
        if ((pSVar4 == (SFButton_o *)0x0) ||
           (__this_01 = (pSVar4->fields).super.m_OnClick,
           __this_01 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) goto LAB_036af294;
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
        pSVar4 = (__this->fields)._chestHintButton;
        if (pSVar4 == (SFButton_o *)0x0) goto LAB_036af294;
        __this_02 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_02 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_036af294;
        UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
      }
      pIVar5 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
      if (pIVar5 != (IFFFKKMMKFO_o *)0x0) {
        AOGPHAIDFAA = 1.0;
        if ((pIVar5->fields).JOAHABGBLEF <= (pIVar5->fields).ECNFDCBBAEN) {
          pNVar2 = (__this->fields)._playerPosition;
          if (pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_036af294;
          (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                    (pNVar2,StringLiteral_1223,(pNVar2->klass->vtable)._75_set_text.method);
          AOGPHAIDFAA = 0.5;
        }
        LJLLAKHOFFF__IFBBIDIEBEL
                  ((UnityEngine_UI_Graphic_o *)(__this->fields)._chest,AOGPHAIDFAA,(MethodInfo *)0x0
                  );
        return;
      }
    }
  }
LAB_036af294:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

