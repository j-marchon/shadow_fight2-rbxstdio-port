// Nekki.SF2.GUI.Dialogs.SettingsDialog$$OAPBFDDGPDO @ RVA 0x3484DBC

void Nekki_SF2_GUI_Dialogs_SettingsDialog__OAPBFDDGPDO
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,bool ALMGEHNCGMD,MethodInfo *method)

{
  bool value;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pNVar1 = (__this->fields).btnSound;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    value = !ALMGEHNCGMD;
    UnityEngine_GameObject__SetActive(pUVar2,value,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).btnMusic;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,value,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).btnCredits;
      if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,value,(MethodInfo *)0x0);
        pNVar1 = (__this->fields).btnLanguage;
        if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,value,(MethodInfo *)0x0);
          pNVar1 = (__this->fields).btnSupport;
          if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

