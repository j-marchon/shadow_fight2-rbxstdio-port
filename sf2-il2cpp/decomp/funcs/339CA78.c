// Nekki.SF2.GUI.Map.BattlePrizeElement$$BGFNABFMNIN @ RVA 0x339CA78

void Nekki_SF2_GUI_Map_BattlePrizeElement__BGFNABFMNIN
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  MethodInfo *extraout_x1;
  BHEDGAKGKPO_StaticFields *pBVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04567c8b & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_04567c8b = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._value;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo,method);
  }
  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pBVar2 = BHEDGAKGKPO_TypeInfo->static_fields;
    (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
              ((pBVar2->FHIAKPJBBCB).fields.r,(pBVar2->FHIAKPJBBCB).fields.g,
               (pBVar2->FHIAKPJBBCB).fields.b,(pBVar2->FHIAKPJBBCB).fields.a,pNVar3,
               (pNVar3->klass->vtable)._23_set_color.method);
    pNVar1 = (__this->fields)._icon;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
      (__this->fields).CKPLHEOCNEC = -1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

