// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToBestPaymentItem @ RVA 0x310F4C4

bool Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToBestPaymentItem
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  long lVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  undefined1 auVar4 [16];
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566573 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&StringLiteral_4204);
    DAT_04566573 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  auVar4._8_8_ = method;
  auVar4._0_8_ = lVar3;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    auVar4 = FUN_01b81620(lVar3,method);
  }
  lVar3 = *(long *)(*(long *)(auVar4._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620(lVar3,auVar4._8_8_);
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    if (*(int *)(**(long **)(lVar3 + 0xb8) + 0x218) == 5) {
      __this_00 = (__this->fields).BAADKBDJJPJ;
      if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0320f640;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
      do {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                          );
        pIVar1 = local_48.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
          goto LAB_0320f620;
        }
        if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_48.fields._current[1].monitor == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        method_00 = (MethodInfo *)0x0;
        bVar2 = System_String__Contains
                          (local_48.fields._current[1].monitor,StringLiteral_4204,(MethodInfo *)0x0)
        ;
      } while (!bVar2);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem(__this,pIVar1[1].monitor,0.0,method_00);
      bVar2 = true;
    }
    else {
LAB_0320f620:
      bVar2 = false;
    }
    return bVar2;
  }
LAB_0320f640:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

