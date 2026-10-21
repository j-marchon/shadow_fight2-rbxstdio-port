// Nekki.SF2.GUI.Shop.Scroll$$GetItems @ RVA 0x34AA27C

System_Collections_Generic_List_BaseScrollItem__o *
Nekki_SF2_GUI_Shop_Scroll__GetItems(Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_BaseScrollItem__o *__this_00;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar2;
  
  if ((DAT_0456851d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456851d = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).ECEJKFAFODM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).ECEJKFAFODM;
    if (pNVar2 == (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (pNVar2->fields)._Items;
  }
  else {
    __this_00 = (System_Collections_Generic_List_BaseScrollItem__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
  }
  return __this_00;
}

