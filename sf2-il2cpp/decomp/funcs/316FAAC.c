// RaidInfoPrize.Prize$$GIENGNEGHPJ @ RVA 0x316FAAC

void RaidInfoPrize_Prize__GIENGNEGHPJ(RaidInfoPrize_Prize_o *__this,MethodInfo *method)

{
  JKDFEBLBMOF_o **ppJVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  BHEDGAKGKPO_StaticFields *pBVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  
  if ((DAT_04566919 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566919 = 1;
  }
  ppJVar1 = &(__this->fields)._RaidReward_k__BackingField;
  *ppJVar1 = (JKDFEBLBMOF_o *)0x0;
  thunk_FUN_01c20e04(ppJVar1,0);
  ppJVar1 = &(__this->fields)._LastRaidReward_k__BackingField;
  *ppJVar1 = (JKDFEBLBMOF_o *)0x0;
  thunk_FUN_01c20e04(ppJVar1,0);
  (__this->fields)._RaidSize_k__BackingField = 0;
  pNVar4 = (__this->fields).LineLabel;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
    (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
              ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
               (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar4,
               (pNVar4->klass->vtable)._23_set_color.method);
    pNVar4 = (__this->fields).LineLabel;
    if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__Clear(pNVar4,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).PrizeLabel;
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
        (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                  ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                   (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar4,
                   (pNVar4->klass->vtable)._23_set_color.method);
        pNVar4 = (__this->fields).PrizeLabel;
        if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__Clear(pNVar4,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).Line;
          if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,StringLiteral_1,(MethodInfo *)0x0);
            pNVar2 = (__this->fields).Line;
            if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
               (__this_00 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
               __this_00 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

