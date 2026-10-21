// Nekki.SF2.GUI.Common.PerkUI$$OnReturnToPool @ RVA 0x33F5DCC

void Nekki_SF2_GUI_Common_PerkUI__OnReturnToPool
               (Nekki_SF2_GUI_Common_PerkUI_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  Nekki_SF2_GUI_Common_TouchHandler_o *pNVar1;
  
  pNVar1 = (__this->fields)._Button;
  if ((pNVar1 != (Nekki_SF2_GUI_Common_TouchHandler_o *)0x0) &&
     (__this_00 = (pNVar1->fields).OMEOMGINDAD, __this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)
     ) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

