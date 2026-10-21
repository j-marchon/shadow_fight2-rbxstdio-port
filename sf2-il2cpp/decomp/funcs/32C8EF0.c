// Nekki.SF2.GUI.Map.LampsPanel$$CheckOpenZones @ RVA 0x32C8EF0

void Nekki_SF2_GUI_Map_LampsPanel__CheckOpenZones
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,
               System_Collections_Generic_List_ZoneScrollItem__o *HLJMHAHBDBA,MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  UnityEngine_UI_Button_o *item;
  Nekki_SF2_GUI_ResolutionImage_o *item_00;
  System_Collections_Generic_List_Button__o *pSVar6;
  System_Collections_Generic_List_ResolutionImage__o *pSVar7;
  UnityEngine_UI_Button_array *pUVar8;
  Nekki_SF2_GUI_ResolutionImage_array *pNVar9;
  int index;
  Il2CppClass *BHHBEIACGPB;
  System_Collections_Generic_List_Button__o *__this_00;
  System_Collections_Generic_List_ResolutionImage__o *__this_01;
  
  if ((DAT_04567507 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_get_Item__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_TypeInfo);
    DAT_04567507 = 1;
  }
  pSVar6 = (__this->fields).FGFAMIEFDEO;
  if (pSVar6 != (System_Collections_Generic_List_Button__o *)0x0) {
    iVar1 = (pSVar6->fields)._size;
    (pSVar6->fields)._size = 0;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar7 = (__this->fields).GENBELDCMGN;
    if (pSVar7 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
      iVar1 = (pSVar7->fields)._size;
      (pSVar7->fields)._size = 0;
      (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      if (HLJMHAHBDBA != (System_Collections_Generic_List_ZoneScrollItem__o *)0x0) {
        if (0 < (HLJMHAHBDBA->fields)._size) {
          index = 0;
          do {
            pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)HLJMHAHBDBA,index,
                                Method_System_Collections_Generic_List<ZoneScrollItem>_get_Item__);
            if ((pIVar5 == (Il2CppObject *)0x0) ||
               (BHHBEIACGPB = pIVar5[0x14].klass, BHHBEIACGPB == (Il2CppClass *)0x0))
            goto LAB_033c91a4;
            if (*(char *)&(BHHBEIACGPB->_1).name == '\0') {
              if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar4 = Nekki_SF2_GUI_Map_MapScene__IsZoneOpen
                                ((MEJIKMPNBNL_o *)BHHBEIACGPB,(MethodInfo *)0x0);
              if (!bVar4) {
                return;
              }
              if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar4 = Nekki_SF2_GUI_Map_MapScene__IsZoneHaveDontCompleteBattle
                                ((MEJIKMPNBNL_o *)BHHBEIACGPB,(MethodInfo *)0x0);
              if (bVar4) {
                pSVar6 = (__this->fields).NPKEJHGOGOE;
                if (pSVar6 == (System_Collections_Generic_List_Button__o *)0x0) goto LAB_033c91a4;
                __this_00 = (__this->fields).FGFAMIEFDEO;
                item = (UnityEngine_UI_Button_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar6,index,
                                  Method_System_Collections_Generic_List<Button>_get_Item__);
                lVar3 = Method_System_Collections_Generic_List<Button>_Add__;
                if (__this_00 == (System_Collections_Generic_List_Button__o *)0x0)
                goto LAB_033c91a4;
                pUVar8 = (__this_00->fields)._items;
                (__this_00->fields)._version = (__this_00->fields)._version + 1;
                if (pUVar8 == (UnityEngine_UI_Button_array *)0x0) goto LAB_033c91a4;
                uVar2 = (__this_00->fields)._size;
                if (uVar2 < (uint)pUVar8->max_length) {
                  (__this_00->fields)._size = uVar2 + 1;
                  pUVar8->m_Items[(int)uVar2] = item;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                pSVar7 = (__this->fields).GOAMNFEGHIB;
                if (pSVar7 == (System_Collections_Generic_List_ResolutionImage__o *)0x0)
                goto LAB_033c91a4;
                __this_01 = (__this->fields).GENBELDCMGN;
                item_00 = (Nekki_SF2_GUI_ResolutionImage_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                     Method_System_Collections_Generic_List<ResolutionImage>_get_Item__
                                    );
                lVar3 = Method_System_Collections_Generic_List<ResolutionImage>_Add__;
                if (__this_01 == (System_Collections_Generic_List_ResolutionImage__o *)0x0)
                goto LAB_033c91a4;
                pNVar9 = (__this_01->fields)._items;
                (__this_01->fields)._version = (__this_01->fields)._version + 1;
                if (pNVar9 == (Nekki_SF2_GUI_ResolutionImage_array *)0x0) goto LAB_033c91a4;
                uVar2 = (__this_01->fields)._size;
                if (uVar2 < (uint)pNVar9->max_length) {
                  (__this_01->fields)._size = uVar2 + 1;
                  pNVar9->m_Items[(int)uVar2] = item_00;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_01,
                             (Il2CppObject *)item_00,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            index = index + 1;
          } while (index < (HLJMHAHBDBA->fields)._size);
        }
        return;
      }
    }
  }
LAB_033c91a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

