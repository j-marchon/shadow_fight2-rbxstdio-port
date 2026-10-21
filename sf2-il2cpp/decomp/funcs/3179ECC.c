// Nekki.SF2.GUI.Dialogs.StrangerDialog$$HDECGIDPOPB @ RVA 0x3179ECC

LabelButton_o *
Nekki_SF2_GUI_Dialogs_StrangerDialog__HDECGIDPOPB
          (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,bool ANNEHDEEFJK,MethodInfo *method)

{
  bool bVar1;
  ButtonWithIcon_o *pBVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (ANNEHDEEFJK) {
    pBVar2 = (__this->fields)._storeButton;
    if ((pBVar2 != (ButtonWithIcon_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pBVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (bVar1) {
LAB_03279ef8:
        return (LabelButton_o *)(__this->fields)._storeButton;
      }
      pBVar2 = (__this->fields)._acceptButton;
      if ((pBVar2 != (ButtonWithIcon_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pBVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
        if (bVar1) {
LAB_03279f94:
          return (LabelButton_o *)(__this->fields)._acceptButton;
        }
        pBVar2 = (__this->fields)._rejectButton;
        if ((pBVar2 != (ButtonWithIcon_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pBVar2,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
                    /* try { // try from 03279f64 to 03379f8f has its CatchHandler @ 0327a194 */
          if (!bVar1) {
            return (LabelButton_o *)0x0;
          }
          goto LAB_03279f20;
        }
      }
    }
  }
  else {
    pBVar2 = (__this->fields)._rejectButton;
                    /* try { // try from 03279f10 to 03379f2b has its CatchHandler @ 0327a188 */
    if ((pBVar2 != (ButtonWithIcon_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pBVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (bVar1) {
LAB_03279f20:
        return (LabelButton_o *)(__this->fields)._rejectButton;
      }
      pBVar2 = (__this->fields)._acceptButton;
      if ((pBVar2 != (ButtonWithIcon_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pBVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
        if (bVar1) goto LAB_03279f94;
        pBVar2 = (__this->fields)._storeButton;
                    /* try { // try from 03279fa8 to 03379fc7 has its CatchHandler @ 0327a184 */
        if ((pBVar2 != (ButtonWithIcon_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pBVar2,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
          if (!bVar1) {
            return (LabelButton_o *)0x0;
          }
          goto LAB_03279ef8;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03279fcc to 03379fd7 has its CatchHandler @ 0327a180 */
  FUN_01bab8c8();
}

