// Nekki.SF2.GUI.ModuleHolder$$JLJABEJHDOM @ RVA 0x314DC90

void Nekki_SF2_GUI_ModuleHolder__JLJABEJHDOM
               (System_Collections_Generic_List_UIModule__o *DDAAFGGCAHK,
               System_Collections_Generic_List_UIModule__o *LKFALEIFDIO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_Component_o *__this;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_UIModule_o *item;
  Nekki_SF2_GUI_UIModule_array *pNVar4;
  int index;
  
  if ((DAT_045667e1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_get_Item__);
    DAT_045667e1 = 1;
  }
  if (DDAAFGGCAHK != (System_Collections_Generic_List_UIModule__o *)0x0) {
    if (0 < (DDAAFGGCAHK->fields)._size) {
      index = 0;
      do {
        __this = (UnityEngine_Component_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)DDAAFGGCAHK,index,
                            Method_System_Collections_Generic_List<UIModule>_get_Item__);
        if ((__this == (UnityEngine_Component_o *)0x0) ||
           (__this_00 = UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0),
           __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0324ddb8;
        bVar3 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
        if (bVar3) {
          item = (Nekki_SF2_GUI_UIModule_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)DDAAFGGCAHK,index,
                            Method_System_Collections_Generic_List<UIModule>_get_Item__);
          lVar2 = Method_System_Collections_Generic_List<UIModule>_Add__;
          if (LKFALEIFDIO == (System_Collections_Generic_List_UIModule__o *)0x0) goto LAB_0324ddb8;
          pNVar4 = (LKFALEIFDIO->fields)._items;
          (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
          if (pNVar4 == (Nekki_SF2_GUI_UIModule_array *)0x0) goto LAB_0324ddb8;
          uVar1 = (LKFALEIFDIO->fields)._size;
          if (uVar1 < (uint)pNVar4->max_length) {
            (LKFALEIFDIO->fields)._size = uVar1 + 1;
            pNVar4->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)LKFALEIFDIO,(Il2CppObject *)item
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
        index = index + 1;
      } while (index < (DDAAFGGCAHK->fields)._size);
    }
    return;
  }
LAB_0324ddb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

