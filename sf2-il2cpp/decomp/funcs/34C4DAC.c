// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$.ctor @ RVA 0x34C4DAC

void Nekki_SF2_GUI_Shop_PropertiesPanelContent___ctor
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Graphic__o *__this_00;
  System_Collections_Generic_List_Graphic__o **ppSVar1;
  UnityEngine_Events_UnityEvent_o *pUVar2;
  UnityEngine_Events_UnityEvent_o **ppUVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456862b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Graphic>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Graphic>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_0456862b = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_Graphic__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Graphic>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Graphic>__ctor__);
  ppSVar1 = &(__this->fields).PMHLGLALHLH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  pUVar2 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar2,(MethodInfo *)0x0);
  ppUVar3 = &(__this->fields)._OnForgeOpenButtonClicked;
  *ppUVar3 = pUVar2;
  thunk_FUN_01c20e04(ppUVar3,pUVar2);
  pUVar2 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar2,(MethodInfo *)0x0);
  ppUVar3 = &(__this->fields)._OnForgeCloseButtonClicked;
  *ppUVar3 = pUVar2;
  thunk_FUN_01c20e04(ppUVar3,pUVar2);
  pUVar2 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar2,(MethodInfo *)0x0);
  ppUVar3 = &(__this->fields)._OnEnchantApplyButtonClicked;
  *ppUVar3 = pUVar2;
  thunk_FUN_01c20e04(ppUVar3,pUVar2);
  pUVar2 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar2,(MethodInfo *)0x0);
  ppUVar3 = &(__this->fields)._OnSkipDeliveryButtonClicked;
  *ppUVar3 = pUVar2;
  thunk_FUN_01c20e04(ppUVar3,pUVar2);
  pUVar2 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar2,(MethodInfo *)0x0);
  ppUVar3 = &(__this->fields)._OnSkipDeliveryForADButtonClicked;
  *ppUVar3 = pUVar2;
  thunk_FUN_01c20e04(ppUVar3,pUVar2);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

