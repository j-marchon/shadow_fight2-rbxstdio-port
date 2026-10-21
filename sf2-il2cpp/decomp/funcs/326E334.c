// Nekki.SF2.GUI.Shop.CheatsPanel$$.ctor @ RVA 0x326E334

void Nekki_SF2_GUI_Shop_CheatsPanel___ctor
               (Nekki_SF2_GUI_Shop_CheatsPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  UnityEngine_Events_UnityEvent_o **ppUVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567204 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_04567204 = 1;
    method = extraout_x1;
  }
  (__this->fields).addMoneyCount = 1000000;
  (__this->fields).addBonusCount = 1000000;
  (__this->fields).addCurrencyCount = 1000000;
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).OnShowCheats;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).OnHideCheats;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).OnAddLevel;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

