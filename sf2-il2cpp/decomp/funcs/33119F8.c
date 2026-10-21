// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$.cctor @ RVA 0x33119F8

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer___cctor(MethodInfo *method)

{
  UnityEngine_WaitForSeconds_o *__this;
  
  if ((DAT_045677b6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_045677b6 = 1;
  }
  __this = (UnityEngine_WaitForSeconds_o *)thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(__this,1.0,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo->static_fields->NBCLELLNCLA = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo->static_fields,__this);
  return;
}

