// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$ECAECIIFHDI @ RVA 0x330BB64

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__ECAECIIFHDI
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  UnityEngine_Events_UnityAction_o *call;
  CocosAnimation_o *pCVar2;
  
  if ((DAT_04567781 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_BNFALOJINFI__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567781 = 1;
  }
  pCVar2 = (__this->fields)._pergamentEffect;
  if ((pCVar2 != (CocosAnimation_o *)0x0) &&
     (pUVar1 = (pCVar2->fields).OnAnimationComplete,
     pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
    pCVar2 = (__this->fields)._pergamentEffect;
    if (pCVar2 != (CocosAnimation_o *)0x0) {
      pUVar1 = (pCVar2->fields).OnAnimationComplete;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(pUVar1,call,(MethodInfo *)0x0);
        pCVar2 = (__this->fields)._pergamentEffect;
        if (pCVar2 != (CocosAnimation_o *)0x0) {
          CocosAnimation__SetLastFrame(pCVar2,(MethodInfo *)0x0);
          pCVar2 = (__this->fields)._pergamentEffect;
          if (pCVar2 != (CocosAnimation_o *)0x0) {
            (pCVar2->fields)._FEBBHCOAEMI_k__BackingField = 1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

