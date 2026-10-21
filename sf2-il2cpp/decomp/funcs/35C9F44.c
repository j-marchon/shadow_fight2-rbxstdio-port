// RaidInfo$$Init @ RVA 0x35C9F44

void RaidInfo__Init(RaidInfo_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  ProgressBar_o *pPVar2;
  BHEDGAKGKPO_StaticFields *pBVar3;
  
  if ((DAT_04568f91 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&StringLiteral_11988);
    DAT_04568f91 = 1;
  }
  pNVar1 = (__this->fields)._shieldName;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar1,StringLiteral_11988,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._shieldName;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                 (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
      pNVar1 = (__this->fields)._shieldValue;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__Clear(pNVar1,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._shieldValue;
        if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
          (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                    ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                     (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar1,
                     (pNVar1->klass->vtable)._23_set_color.method);
          pNVar1 = (__this->fields)._raidSizeLabel;
          if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            Nekki_SF2_GUI_LabelAlias__Clear(pNVar1,(MethodInfo *)0x0);
            pNVar1 = (__this->fields)._raidSizeLabel;
            if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
              (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                        ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                         (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar1,
                         (pNVar1->klass->vtable)._23_set_color.method);
              pNVar1 = (__this->fields)._raidRandomRuleLabel;
              if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                Nekki_SF2_GUI_LabelAlias__Clear(pNVar1,(MethodInfo *)0x0);
                pNVar1 = (__this->fields)._raidRandomRuleLabel;
                if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
                  (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                            ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                             (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar1,
                             (pNVar1->klass->vtable)._23_set_color.method);
                  pNVar1 = (__this->fields)._timeLabel;
                  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
                    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                              ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                               (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar1,
                               (pNVar1->klass->vtable)._23_set_color.method);
                    pNVar1 = (__this->fields)._timeLabel;
                    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      Nekki_SF2_GUI_LabelAlias__Clear(pNVar1,(MethodInfo *)0x0);
                      pPVar2 = (__this->fields)._shieldBar;
                      if (pPVar2 != (ProgressBar_o *)0x0) {
                        (*(pPVar2->klass->vtable)._11_SetValueBorders.methodPtr)
                                  (0,0x3f800000,pPVar2,
                                   (pPVar2->klass->vtable)._11_SetValueBorders.method);
                        pPVar2 = (__this->fields)._shieldBar;
                        if (pPVar2 != (ProgressBar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036ca0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*(pPVar2->klass->vtable)._8_SetValue.methodPtr)
                                    (0x3f800000,0,pPVar2,0,
                                     (pPVar2->klass->vtable)._8_SetValue.method);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

