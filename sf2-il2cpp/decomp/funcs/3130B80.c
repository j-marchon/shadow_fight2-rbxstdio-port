// Nekki.SF2.GUI.Fight.EndPvpFightContent$$OAFJJEGHHJK @ RVA 0x3130B80

void Nekki_SF2_GUI_Fight_EndPvpFightContent__OAFJJEGHHJK
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,bool KKIPDEIHMDG,MethodInfo *method
               )

{
  LabelButton_o *pLVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pLVar1 = (__this->fields)._buttonExit;
  if ((pLVar1 != (LabelButton_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pLVar1 = (__this->fields)._buttonReplay;
    if ((pLVar1 != (LabelButton_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

