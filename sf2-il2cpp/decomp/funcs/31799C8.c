// Nekki.SF2.GUI.Dialogs.StrangerDialog$$DBAFLMPFDKB @ RVA 0x31799C8

void Nekki_SF2_GUI_Dialogs_StrangerDialog__DBAFLMPFDKB
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  ProgressBar_o *pPVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  BHEDGAKGKPO_StaticFields *pBVar4;
  
  if ((DAT_04566980 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_04566980 = 1;
  }
  pPVar1 = (__this->fields)._difficult;
  if (pPVar1 != (ProgressBar_o *)0x0) {
    (*(pPVar1->klass->vtable)._11_SetValueBorders.methodPtr)
              (0,0x42c80000,pPVar1,(pPVar1->klass->vtable)._11_SetValueBorders.method);
    pPVar1 = (__this->fields)._difficult;
    if ((pPVar1 != (ProgressBar_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pPVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).JCLHNHKKPNP,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._difficultLabel;
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__Clear(pNVar3,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._difficultLabel;
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar3,0x67,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._difficultLabel;
          if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            pBVar4 = BHEDGAKGKPO_TypeInfo->static_fields;
            (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
                      ((pBVar4->FHIAKPJBBCB).fields.r,(pBVar4->FHIAKPJBBCB).fields.g,
                       (pBVar4->FHIAKPJBBCB).fields.b,(pBVar4->FHIAKPJBBCB).fields.a,pNVar3,
                       (pNVar3->klass->vtable)._23_set_color.method);
            pNVar3 = (__this->fields)._difficultLabel;
            if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive
                        (pUVar2,(__this->fields).JCLHNHKKPNP,(MethodInfo *)0x0);
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

