// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$BNFALOJINFI @ RVA 0x330C220

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__BNFALOJINFI
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  CocosAnimation_o *pCVar1;
  
  Nekki_SF2_GUI_Menu_MenuAdvertisingButton__MLOOLFNKCKA(__this,method);
  pCVar1 = (__this->fields)._pergamentEffect;
  if ((pCVar1 != (CocosAnimation_o *)0x0) &&
     (__this_00 = (pCVar1->fields).OnAnimationComplete,
     __this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._pergamentEffect;
    if (pCVar1 != (CocosAnimation_o *)0x0) {
      (pCVar1->fields)._NOAJIBNJKPE_k__BackingField = false;
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

