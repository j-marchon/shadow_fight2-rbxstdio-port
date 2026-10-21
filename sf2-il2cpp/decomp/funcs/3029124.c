// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$KGHBEACKHIB @ RVA 0x3029124

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__KGHBEACKHIB
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,int64_t ECLENFDGNKL,
               MethodInfo *method)

{
  uint32_t uVar1;
  bool value;
  System_String_o *pSVar2;
  JMDPBFOCHHP_o *pJVar3;
  int64_t iVar4;
  UnityEngine_GameObject_o *pUVar5;
  JMDPBFOCHHP_NMAJABPDEPE_o *pJVar6;
  LabelButton_o *pLVar7;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  int local_34;
  
  if ((DAT_04565cac & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&StringLiteral_2086);
    FUN_01bab630(&StringLiteral_2429);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565cac = 1;
  }
  local_34 = 0;
  pNVar8 = (__this->fields)._beforeNextTaskLbl;
  if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = NGFEKJBMGEB__BCGDPKJNJCH
                     (ECLENFDGNKL,true,true,0xe0f < ECLENFDGNKL,0x1517f < ECLENFDGNKL,
                      StringLiteral_2086,true,true,true,true,StringLiteral_1,StringLiteral_1,
                      StringLiteral_1,StringLiteral_1,(MethodInfo *)0x0);
  if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
              (pNVar8,pSVar2,(pNVar8->klass->vtable)._75_set_text.method);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((pJVar3 != (JMDPBFOCHHP_o *)0x0) &&
       (pJVar6 = (pJVar3->fields)._IGLEEEJGEEJ_k__BackingField,
       pJVar6 != (JMDPBFOCHHP_NMAJABPDEPE_o *)0x0)) {
      uVar1 = (pJVar6->fields).OAFBLBIBJBG;
      pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if ((pJVar3 != (JMDPBFOCHHP_o *)0x0) &&
         (pJVar6 = (pJVar3->fields)._IGLEEEJGEEJ_k__BackingField,
         pJVar6 != (JMDPBFOCHHP_NMAJABPDEPE_o *)0x0)) {
        value = false;
        if ((uVar1 != 0) && ((pJVar6->fields).DCOMFGPIBOE != 0)) {
          iVar4 = GALHNMPIEHA__EEADODOOCCB((__this->fields).NCJONEIOCML,(MethodInfo *)0x0);
          local_34 = (int)iVar4;
          if (((__this->fields).LIIAOOJGEML != local_34) &&
             ((__this->fields).LIIAOOJGEML = local_34, 0 < local_34)) {
            pLVar7 = (__this->fields)._btnSkipCooldown;
            pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
            pSVar2 = System_String__Concat(StringLiteral_2429,pSVar2,(MethodInfo *)0x0);
            if (pLVar7 == (LabelButton_o *)0x0) goto LAB_03129344;
            LabelButton__set_Text(pLVar7,pSVar2,(MethodInfo *)0x0);
          }
          value = local_34 != 0;
        }
        pLVar7 = (__this->fields)._btnSkipCooldown;
        if ((pLVar7 != (LabelButton_o *)0x0) &&
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar7,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar5,value,(MethodInfo *)0x0);
          pNVar8 = (__this->fields)._getTaskNowLbl;
          if ((pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
             pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar5,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_03129344:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

