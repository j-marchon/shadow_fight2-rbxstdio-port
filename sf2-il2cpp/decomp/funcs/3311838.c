// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$ChangeHintDescriptionParent @ RVA 0x3311838

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ChangeHintDescriptionParent
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,
               UnityEngine_Transform_o *IFFKONPAKOP,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  __this_00 = (__this->fields)._hintDescriptionRoot;
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent(__this_01,IFFKONPAKOP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

