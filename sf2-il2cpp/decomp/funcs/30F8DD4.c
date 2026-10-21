// Nekki.SF2.GUI.Shop.ParametersPanelContent$$.ctor @ RVA 0x30F8DD4

void Nekki_SF2_GUI_Shop_ParametersPanelContent___ctor
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Graphic__o *__this_00;
  System_Collections_Generic_List_Graphic__o **ppSVar1;
  KKEKJDLEJIL_o *__this_01;
  KKEKJDLEJIL_o **ppKVar2;
  System_Collections_Generic_List_BaseScrollItem__o *__this_02;
  System_Collections_Generic_List_BaseScrollItem__o **ppSVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566485 & 1) == 0) {
    FUN_01bab630(&KKEKJDLEJIL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Graphic>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<Graphic>_TypeInfo);
    DAT_04566485 = 1;
    method = extraout_x1;
  }
  (__this->fields)._ScrollAnimationDelay = 0.5;
  (__this->fields)._ScrollAnimationDuration = 6.0;
  __this_00 = (System_Collections_Generic_List_Graphic__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Graphic>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Graphic>__ctor__);
  ppSVar1 = &(__this->fields).PMHLGLALHLH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (KKEKJDLEJIL_o *)thunk_FUN_01bda818(KKEKJDLEJIL_TypeInfo);
  KKEKJDLEJIL___ctor(__this_01,(MethodInfo *)0x0);
  ppKVar2 = &(__this->fields).MLHJCGAAFFG;
  *ppKVar2 = __this_01;
  thunk_FUN_01c20e04(ppKVar2,__this_01);
  __this_02 = (System_Collections_Generic_List_BaseScrollItem__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
  ppSVar3 = &(__this->fields).DNHMKKDMGFA;
  *ppSVar3 = __this_02;
  thunk_FUN_01c20e04(ppSVar3,__this_02);
  Nekki_SF2_GUI_Shop_SidePanelContent___ctor
            ((Nekki_SF2_GUI_Shop_SidePanelContent_o *)__this,(MethodInfo *)0x0);
  return;
}

