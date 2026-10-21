// Nekki.SF2.GUI.Shop.InfoPanelContent$$.ctor @ RVA 0x300AAE0

void Nekki_SF2_GUI_Shop_InfoPanelContent___ctor
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_InfoPanelContent_MPOFOFAICOB_o *__this_00;
  Nekki_SF2_GUI_Shop_InfoPanelContent_MPOFOFAICOB_o **ppNVar1;
  System_Collections_Generic_List_IconLabelButton__o *__this_01;
  System_Collections_Generic_List_IconLabelButton__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565b5f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IconLabelButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IconLabelButton>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_InfoPanelContent_MPOFOFAICOB_TypeInfo);
    DAT_04565b5f = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Shop_InfoPanelContent_MPOFOFAICOB_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_InfoPanelContent_MPOFOFAICOB_TypeInfo,method);
  Nekki_SF2_GUI_Shop_InfoPanelContent_MPOFOFAICOB___ctor(__this_00,(MethodInfo *)0x0);
  ppNVar1 = &(__this->fields).updateEvent;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_IconLabelButton__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IconLabelButton>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IconLabelButton>__ctor__);
  ppSVar2 = &(__this->fields).PGCBEJGMIMA;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  Nekki_SF2_GUI_Shop_SidePanelContent___ctor
            ((Nekki_SF2_GUI_Shop_SidePanelContent_o *)__this,(MethodInfo *)0x0);
  return;
}

