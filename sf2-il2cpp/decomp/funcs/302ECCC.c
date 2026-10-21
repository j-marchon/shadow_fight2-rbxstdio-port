// Nekki.SF2.GUI.SimpleScroll$$GetSelectedItemAndLogicId @ RVA 0x302ECCC

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_SimpleScroll__GetSelectedItemAndLogicId
          (Nekki_SF2_GUI_SimpleScroll_o *__this,int32_t *OGPGLGPMEPD,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollItem_o *x;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_Object_o *x_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  int index;
  
  method_00 = (MethodInfo *)OGPGLGPMEPD;
  if ((DAT_04565cdc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565cdc = 1;
    method_00 = extraout_x1;
  }
  *OGPGLGPMEPD = -1;
  x = Nekki_SF2_GUI_SimpleScroll__MOKNJIIEIMG(__this,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return x;
  }
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return x;
      }
      x_00 = (UnityEngine_Object_o *)
             System_Collections_Generic_List<object>__get_Item
                       (__this_00,index,
                        Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)x,(MethodInfo *)0x0);
      if (bVar1) {
        *OGPGLGPMEPD = index;
        return x;
      }
      __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_object__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

