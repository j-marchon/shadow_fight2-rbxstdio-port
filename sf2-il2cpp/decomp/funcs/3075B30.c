// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$JFNBGKMIBPD @ RVA 0x3075B30

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__JFNBGKMIBPD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,bool PCAIKIGGBMJ,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pNVar1 = (__this->fields)._tsRollLeftBorder;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,PCAIKIGGBMJ,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._tsRollRightBorder;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,PCAIKIGGBMJ,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._tsRollTopLeftBorder;
      if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,PCAIKIGGBMJ,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._tsRollTopRightBorder;
        if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,PCAIKIGGBMJ,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._tsBottomTraceryLeft;
          if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,PCAIKIGGBMJ,(MethodInfo *)0x0);
            pNVar1 = (__this->fields)._tsBottomTraceryRight;
            if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar2,PCAIKIGGBMJ,(MethodInfo *)0x0);
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

