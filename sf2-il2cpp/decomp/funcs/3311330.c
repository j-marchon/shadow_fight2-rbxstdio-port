// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$DMJHAJBLHFH @ RVA 0x3311330

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__DMJHAJBLHFH
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,bool CCOCAIEPCOJ,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_List_object__o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this_01;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  int index;
  
  if ((DAT_045677b4 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045677b4 = 1;
  }
  pNVar3 = (__this->fields)._scroll;
  if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    index = 0;
    do {
      __this_00 = *(System_Collections_Generic_List_object__o **)&(pNVar3->fields)._snapEase;
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) break;
      if ((__this_00->fields)._size <= index) {
        return;
      }
      __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)
                  System_Collections_Generic_List<object>__get_Item
                            (__this_00,index,
                             Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
      if (__this_01 == (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) {
LAB_034113f0:
        __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0;
      }
      else {
        bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_TypeInfo->_2).naturalAligment;
        if ((((Il2CppClass *)__this_01->klass)->_2).naturalAligment < bVar1) goto LAB_034113f0;
        if ((((Il2CppClass *)__this_01->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_TypeInfo) {
          __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0;
        }
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        if (__this_01 == (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) break;
        Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__VisibleGlow
                  (__this_01,CCOCAIEPCOJ,(MethodInfo *)0x0);
      }
      pNVar3 = (__this->fields)._scroll;
      index = index + 1;
    } while (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

