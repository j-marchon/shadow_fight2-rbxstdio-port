// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$AHPALLMCHON @ RVA 0x344E174

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__AHPALLMCHON
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  CocosAnimation_o *pCVar2;
  
  if ((DAT_0456828c & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_DNANDMDABDA__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456828c = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__GOLKBFHLOBJ(__this,method);
  pCVar2 = (__this->fields)._picRubySale;
  if ((pCVar2 != (CocosAnimation_o *)0x0) &&
     (pUVar1 = (pCVar2->fields).OnAnimationComplete,
     pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
    pCVar2 = (__this->fields)._picRubySale;
    if (pCVar2 != (CocosAnimation_o *)0x0) {
      pUVar1 = (pCVar2->fields).OnAnimationComplete;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(pUVar1,call,(MethodInfo *)0x0);
        pCVar2 = (__this->fields)._picRubySale;
        if (pCVar2 != (CocosAnimation_o *)0x0) {
          CocosAnimation__SetFramesRange(pCVar2,0,-1,(MethodInfo *)0x0);
          pCVar2 = (__this->fields)._picRubySale;
          if (pCVar2 != (CocosAnimation_o *)0x0) {
            (pCVar2->fields)._PPEGDOHGLJJ_k__BackingField = 0.03;
            CocosAnimation__SetFirstFrame(pCVar2,(MethodInfo *)0x0);
            pCVar2 = (__this->fields)._picRubySale;
            if (pCVar2 != (CocosAnimation_o *)0x0) {
              (pCVar2->fields)._FEBBHCOAEMI_k__BackingField = 1;
              (pCVar2->fields)._NOAJIBNJKPE_k__BackingField = true;
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

