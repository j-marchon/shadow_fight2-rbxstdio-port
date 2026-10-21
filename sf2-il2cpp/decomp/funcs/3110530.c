// Nekki.SF2.GUI.Dialogs.ExitDialog$$GKPJMHOFIOO @ RVA 0x3110530

void Nekki_SF2_GUI_Dialogs_ExitDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_ExitDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  BHEDGAKGKPO_StaticFields *pBVar3;
  ONDBPECEKAJ_o *pOVar4;
  
  if ((DAT_0456657c & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_0456657c = 1;
  }
  pNVar1 = (__this->fields)._text;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    UnityEngine_UI_Text__set_alignment((UnityEngine_UI_Text_o *)pNVar1,4,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._text;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionX(pUVar2,0.0,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._text;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionY(pUVar2,0.0,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._text;
        if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar1,0x67,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._text;
          if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
            (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                      ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                       (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar1,
                       (pNVar1->klass->vtable)._23_set_color.method);
            pOVar4 = (__this->fields).LHNINNECGJF;
            if ((pOVar4 != (ONDBPECEKAJ_o *)0x0) &&
               (pNVar1 = (__this->fields)._text, pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
              Nekki_SF2_GUI_LabelAlias__set_Alias
                        (pNVar1,(pOVar4->fields).GEFDCAHIPNO,(MethodInfo *)0x0);
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

