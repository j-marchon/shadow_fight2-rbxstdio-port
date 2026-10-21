// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToItem @ RVA 0x310E1A8

void Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,System_String_o *JEPIGCLHAMI,
               float GGMALJLKHHB,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t JDEFJPHCNMM;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar5;
  UnityEngine_UI_Slider_o *pUVar6;
  Nekki_SF2_GUI_TableView_o *__this_00;
  Il2CppObject *pIVar7;
  Il2CppObject *item;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566562 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    DAT_04566562 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  bVar4 = PCOEHCPGBBG__BDLEIEHBFAD(JEPIGCLHAMI,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  pSVar5 = (__this->fields).BAADKBDJJPJ;
  if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar5,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    pIVar3 = (Il2CppObject *)0x0;
    while (pIVar7 = pIVar3,
          bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                            ), pIVar3 = local_60.fields._current, item = pIVar7, bVar4) {
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar4 = System_String__op_Equality
                        (local_60.fields._current[1].monitor,JEPIGCLHAMI,(MethodInfo *)0x0);
      item = pIVar3;
      if (bVar4) break;
      if (pIVar3[1].monitor == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar4 = System_String__StartsWith(pIVar3[1].monitor,JEPIGCLHAMI,(MethodInfo *)0x0);
      if (!bVar4) {
        pIVar3 = pIVar7;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    if (item == (Il2CppObject *)0x0) {
      return;
    }
    pSVar5 = (__this->fields).BAADKBDJJPJ;
    if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      JDEFJPHCNMM = System_Collections_Generic_List<object>__IndexOf
                              ((System_Collections_Generic_List_object__o *)pSVar5,item,
                               Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
      __this_00 = (__this->fields)._TableView;
      if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
        Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,JDEFJPHCNMM,GGMALJLKHHB,(MethodInfo *)0x0);
        pSVar5 = (__this->fields).BAADKBDJJPJ;
        if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
          iVar1 = (pSVar5->fields)._size;
          pUVar6 = (__this->fields)._slider;
          iVar2 = iVar1 + -1;
          if (iVar2 == 0 || iVar1 < 1) {
            if (pUVar6 != (UnityEngine_UI_Slider_o *)0x0) {
              (*(pUVar6->klass->vtable)._48_SetValueWithoutNotify.methodPtr)
                        (0,pUVar6,(pUVar6->klass->vtable)._48_SetValueWithoutNotify.method);
              return;
            }
          }
          else if (pUVar6 != (UnityEngine_UI_Slider_o *)0x0) {
            (*(pUVar6->klass->vtable)._48_SetValueWithoutNotify.methodPtr)
                      ((ulong)(uint)((float)JDEFJPHCNMM / (float)iVar2),pUVar6,
                       (pUVar6->klass->vtable)._48_SetValueWithoutNotify.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

