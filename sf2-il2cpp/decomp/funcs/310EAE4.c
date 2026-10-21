// Nekki.SF2.GUI.Shop.ItemsPanel$$.ctor @ RVA 0x310EAE4

void Nekki_SF2_GUI_Shop_ItemsPanel___ctor
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_o *__this_00;
  Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_o **ppNVar1;
  Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_o *__this_01;
  Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_o **ppNVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  UnityEngine_Events_UnityEvent_o **ppUVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_02;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar5;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566569 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_04566569 = 1;
    method = extraout_x1;
  }
  (__this->fields)._InactiveCellOpacity = 0.5;
  (__this->fields)._ActiveCellOpacity = 1.0;
  __this_00 = (Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_TypeInfo,method);
  Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI___ctor(__this_00,(MethodInfo *)0x0);
  ppNVar1 = &(__this->fields)._OnItemSelected;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_TypeInfo);
  Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG___ctor(__this_01,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields)._OnItemDoubleClick;
  *ppNVar2 = __this_01;
  thunk_FUN_01c20e04(ppNVar2,__this_01);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields)._OnDragBegin;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields)._OnDragEnd;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  (__this->fields).PMDCABLGDGF = true;
  (__this->fields).HGCMLPDPFIK.fields.x = 0.0;
  (__this->fields).HGCMLPDPFIK.fields.y = 0.0;
  __this_02 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar5 = &(__this->fields).BAADKBDJJPJ;
  *ppSVar5 = __this_02;
  thunk_FUN_01c20e04(ppSVar5,__this_02);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

