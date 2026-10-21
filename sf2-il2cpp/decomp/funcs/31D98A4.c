// Nekki.SF2.GUI.Dialogs.Raids.RaidTopPlayerCell$$NOLAJAADKAL @ RVA 0x31D98A4

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell__NOLAJAADKAL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_String_o *pSVar3;
  PLIIGOCLJDL_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *pNVar4;
  SFButton_o *pSVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar7;
  
  if ((DAT_04566d0a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566d0a = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__NOLAJAADKAL
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)__this,(MethodInfo *)0x0);
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__IsFake
                    ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pSVar5 = (__this->fields).super._progressHintButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar5 = (__this->fields).super._progressHintButton;
    if ((pSVar5 == (SFButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pSVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032d9a00;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields).super.DICNIMJBGML;
  if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
    pNVar6 = (__this->fields)._playerDan;
    pSVar3 = System_Int32__ToString((int)pNVar4 + 0x30,(MethodInfo *)0x0);
    if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar6->klass->vtable)._75_set_text.methodPtr)
                (pNVar6,pSVar3,(pNVar6->klass->vtable)._75_set_text.method);
      pNVar7 = (__this->fields)._playerDanBack;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
      pNVar4 = (__this->fields).super.DICNIMJBGML;
      if (((pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) &&
          (__this_00 != (PLIIGOCLJDL_o *)0x0)) &&
         (pSVar3 = PLIIGOCLJDL__PAHKCILGFIK
                             (__this_00,(pNVar4->fields).AACMAAOJMFK,(MethodInfo *)0x0),
         pNVar7 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar7,pSVar3,(MethodInfo *)0x0);
        pNVar7 = (__this->fields)._linePic;
        if ((pNVar7 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_032d9a00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

