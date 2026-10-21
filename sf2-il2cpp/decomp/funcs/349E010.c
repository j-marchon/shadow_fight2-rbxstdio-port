// Nekki.SF2.GUI.Map.MapPanel$$GetZones @ RVA 0x349E010

System_Collections_Generic_List_ZoneScrollItem__o *
Nekki_SF2_GUI_Map_MapPanel__GetZones(Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Collections_Generic_List_ZoneScrollItem__o *__this_00;
  Nekki_SF2_GUI_Shop_Scroll_o *__this_01;
  System_Collections_Generic_List_BaseScrollItem__o *__this_02;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *item;
  Nekki_SF2_GUI_Map_ZoneScrollItem_array *pNVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568484 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ZoneScrollItem>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo);
    DAT_04568484 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_ZoneScrollItem__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ZoneScrollItem>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ZoneScrollItem>__ctor__);
  __this_01 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if ((__this_01 == (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) ||
     (__this_02 = Nekki_SF2_GUI_Shop_Scroll__GetItems(__this_01,(MethodInfo *)0x0),
     __this_02 == (System_Collections_Generic_List_BaseScrollItem__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
  do {
    bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__)
    ;
    lVar3 = Method_System_Collections_Generic_List<ZoneScrollItem>_Add__;
    if (!bVar4) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,
                 Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
      return __this_00;
    }
    if (__this_00 == (System_Collections_Generic_List_ZoneScrollItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_48.fields._current ==
        (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
LAB_0359e140:
      item = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
    }
    else {
      bVar1 = (Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo->_2).naturalAligment;
      if ((((Nekki_SF2_GUI_Map_ZoneScrollItem_c *)(local_48.fields._current)->klass)->_2).
          naturalAligment < bVar1) goto LAB_0359e140;
      item = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_48.fields._current;
      if ((((Nekki_SF2_GUI_Map_ZoneScrollItem_c *)(local_48.fields._current)->klass)->_2).
          typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo) {
        item = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
      }
    }
    pNVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pNVar5 == (Nekki_SF2_GUI_Map_ZoneScrollItem_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pNVar5->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      pNVar5->m_Items[(int)uVar2] = item;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
}

