// Nekki.SF2.GUI.Common.MenuControls.EBHCGCMCBML$$BFPFOFJOOIA @ RVA 0x300F694

void Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__BFPFOFJOOIA
               (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *__this,int32_t ABACOMLKIAJ,
               int32_t AAJGEHHPMGH,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_RuntimeTypeHandle_o handle;
  long lVar3;
  int32_t iVar4;
  System_Type_o *enumType;
  System_Array_o *__this_00;
  System_Boolean_array *item;
  Il2CppObject *pIVar5;
  System_Boolean_array_array *pSVar6;
  System_Collections_Generic_List_bool____o *__this_01;
  
  if ((DAT_04565ba0 & 1) == 0) {
    FUN_01bab630(&bool___TypeInfo);
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&FBBNEILNOKK_var);
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>_get_Item__);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04565ba0 = 1;
  }
  __this_01 = (__this->fields).MFKHOLCJNKE;
  if (__this_01 != (System_Collections_Generic_List_bool____o *)0x0) {
    iVar1 = (__this_01->fields)._size;
    handle.fields.value =
         (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)FBBNEILNOKK_var;
    while (FBBNEILNOKK_var = (Il2CppType *)handle.fields.value, iVar1 <= ABACOMLKIAJ) {
      if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Enum_TypeInfo);
      }
      __this_00 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
      if (__this_00 == (System_Array_o *)0x0) goto LAB_0310f878;
      iVar4 = System_Array__get_Length(__this_00,(MethodInfo *)0x0);
      item = (System_Boolean_array *)FUN_01bab718(bool___TypeInfo,iVar4);
      lVar3 = Method_System_Collections_Generic_List<bool[]>_Add__;
      pSVar6 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pSVar6 == (System_Boolean_array_array *)0x0) goto LAB_0310f878;
      uVar2 = (__this_01->fields)._size;
      if (uVar2 < (uint)pSVar6->max_length) {
        (__this_01->fields)._size = uVar2 + 1;
        pSVar6->m_Items[(int)uVar2] = item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      __this_01 = (__this->fields).MFKHOLCJNKE;
      if (__this_01 == (System_Collections_Generic_List_bool____o *)0x0) goto LAB_0310f878;
      handle.fields.value =
           (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)FBBNEILNOKK_var;
      iVar1 = (__this_01->fields)._size;
    }
    pIVar5 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_01,ABACOMLKIAJ,
                        Method_System_Collections_Generic_List<bool[]>_get_Item__);
    if (pIVar5 != (Il2CppObject *)0x0) {
      if ((uint)AAJGEHHPMGH < *(uint *)&pIVar5[1].monitor) {
        *(undefined1 *)((long)&pIVar5[2].klass + (long)AAJGEHHPMGH) = 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_0310f878:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

