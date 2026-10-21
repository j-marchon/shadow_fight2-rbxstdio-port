// Nekki.SF2.GUI.Fight.EndFightContent$$OAFJJEGHHJK @ RVA 0x309CB40

void Nekki_SF2_GUI_Fight_EndFightContent__OAFJJEGHHJK
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,bool KKIPDEIHMDG,MethodInfo *method)

{
  LabelButton_o *pLVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pLVar1 = (__this->fields)._buttonOk;
  if ((pLVar1 != (LabelButton_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pLVar1 = (__this->fields)._buttonVideoAD;
    if ((pLVar1 != (LabelButton_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).IHCIPEGHIDM,(MethodInfo *)0x0);
      pLVar1 = (__this->fields)._buttonRetry;
      if ((pLVar1 != (LabelButton_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).GOAJIJFCOJD,(MethodInfo *)0x0);
        pLVar1 = (__this->fields)._buttonShop;
        if ((pLVar1 != (LabelButton_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).OODOHJNONAO,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

