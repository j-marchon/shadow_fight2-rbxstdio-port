// FFFAKMHNGKI$$NAJLKMODAKH @ RVA 0x33FB2DC

void FFFAKMHNGKI__NAJLKMODAKH(FFFAKMHNGKI_o *__this,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar3;
  System_Collections_Generic_List_object__o *__this_00;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *pUVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_04567fb7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04567fb7 = 1;
    method = extraout_x1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  auVar5._8_8_ = method;
  auVar5._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar5 = FUN_01b81620(lVar2,method);
  }
  lVar2 = *(long *)(*(long *)(auVar5._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2,auVar5._8_8_);
  }
  pUVar4 = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    pUVar4 = *(UnityEngine_Object_o **)(**(long **)(lVar2 + 0xb8) + 0x178);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((**(long **)(lVar2 + 0xb8) != 0) &&
       (pNVar3 = *(Nekki_SF2_GUI_Shop_ItemsPanel_o **)(**(long **)(lVar2 + 0xb8) + 0x178),
       pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0)) {
      bVar1 = Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToLastItemWithoutEnchantments
                        (pNVar3,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      if ((**(long **)(lVar2 + 0xb8) != 0) &&
         (lVar2 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x178), lVar2 != 0)) {
        __this_00 = *(System_Collections_Generic_List_object__o **)(lVar2 + 0x70);
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          return;
        }
        if ((__this_00->fields)._size < 1) {
          return;
        }
        IKKAMAMLIKA = (HOOAAGABMBL_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (__this_00,0,
                                 Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
        AMIINPEKKFB__KMJPPCLIEDG(IKKAMAMLIKA,false,false,(MethodInfo *)0x0);
        lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
            (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
          Nekki_SF2_GUI_Shop_ShopScene__RefreshItems
                    ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                     (MethodInfo *)0x0);
          lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620();
          }
          if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
              (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
            Nekki_SF2_GUI_Shop_ShopScene__Refresh
                      ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                       (MethodInfo *)0x0);
            lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_01b81620();
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_01b81620();
            }
            if ((**(long **)(lVar2 + 0xb8) != 0) &&
               (pNVar3 = *(Nekki_SF2_GUI_Shop_ItemsPanel_o **)(**(long **)(lVar2 + 0xb8) + 0x178),
               pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0)) {
              Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToLastItemWithoutEnchantments
                        (pNVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

