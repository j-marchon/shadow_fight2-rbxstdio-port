// Nekki.SF2.GUI.Scenes.LoaderScreen$$MJBGODLMBGP @ RVA 0x2FF4E4C

void Nekki_SF2_GUI_Scenes_LoaderScreen__MJBGODLMBGP
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  Nekki_SF2_GUI_Fight_VsScreen_o *pNVar1;
  
  pNVar1 = (__this->fields).PNGEFADJKCH;
  if ((pNVar1 != (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0) &&
     (__this_00 = (pNVar1->fields).DALFPNPJBCO, __this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)
     ) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    (__this->fields).IHEIBDOIGAE = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

