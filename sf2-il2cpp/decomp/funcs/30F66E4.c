// Nekki.SF2.GUI.Dialogs.NotificationsGame$$GKFNLJGEFOE @ RVA 0x30F66E4

void Nekki_SF2_GUI_Dialogs_NotificationsGame__GKFNLJGEFOE
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,bool OPCNIHNILAF,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  
  (__this->fields).BDDIHIFJADE = OPCNIHNILAF;
  if (!OPCNIHNILAF) {
    __this_00 = (__this->fields)._renderRoot;
    if ((__this_00 == (UnityEngine_RectTransform_o *)0x0) ||
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_GameObject_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    if ((__this->fields).ONFGAANLDKH == false) {
      Nekki_SF2_GUI_Dialogs_NotificationsGame__LFLEKGKEMDG
                (__this,(__this->fields).OLBPOBHFADF,method_00);
    }
    (__this->fields).OLBPOBHFADF = false;
  }
  return;
}

