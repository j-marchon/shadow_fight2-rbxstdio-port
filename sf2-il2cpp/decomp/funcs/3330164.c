// Nekki.SF2.GUI.Pvp.PlayerSelector$$SetSize @ RVA 0x3330164

void Nekki_SF2_GUI_Pvp_PlayerSelector__SetSize
               (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,UnityEngine_Vector2_o FDFANDCCJAG,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_RectTransform_o *__this_00;
  UIFigures_UILine_o *pUVar3;
  System_Collections_Generic_List_Vector2__o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_x2;
  UnityEngine_Vector2_array *pUVar5;
  bool_conflict *pbVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector2_o item;
  UnityEngine_Vector2_o item_00;
  UnityEngine_Vector2_o item_01;
  UnityEngine_Vector2_o item_02;
  UnityEngine_Vector2_o item_03;
  UnityEngine_Vector2_o item_04;
  UnityEngine_Vector2_o item_05;
  UnityEngine_Vector2_o item_06;
  
  if ((DAT_04567902 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Vector2>_TypeInfo);
    DAT_04567902 = 1;
  }
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,
                         Method_UnityEngine_Component_GetComponent<RectTransform>__);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_sizeDelta(__this_00,FDFANDCCJAG,(MethodInfo *)0x0);
    (__this->fields).KKPJEFOMLBP = false;
    pUVar3 = Nekki_SF2_GUI_Pvp_PlayerSelector__PDGEDEIGEHM(__this,method_00);
    if (pUVar3 != (UIFigures_UILine_o *)0x0) {
      fVar10 = *(float *)&(pUVar3->fields)._Points;
      pUVar3 = Nekki_SF2_GUI_Pvp_PlayerSelector__PDGEDEIGEHM(__this,method_01);
      pSVar4 = (System_Collections_Generic_List_Vector2__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<Vector2>_TypeInfo);
      System_Collections_Generic_List<Vector2>___ctor
                (pSVar4,Method_System_Collections_Generic_List<Vector2>__ctor__);
      lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
      if (pSVar4 != (System_Collections_Generic_List_Vector2__o *)0x0) {
        pUVar5 = (pSVar4->fields)._items;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
          uVar1 = (pSVar4->fields)._size;
          fVar7 = FDFANDCCJAG.fields.x * 0.5;
          fVar8 = -(fVar10 * 0.5);
          if (uVar1 < (uint)pUVar5->max_length) {
            (pSVar4->fields)._size = uVar1 + 1;
            pUVar5->m_Items[(int)uVar1].fields.x = fVar7;
            pUVar5->m_Items[(int)uVar1].fields.y = fVar8;
          }
          else {
            item.fields.y = fVar8;
            item.fields.x = fVar7;
            System_Collections_Generic_List<Vector2>__AddWithResize
                      (pSVar4,item,
                       *(MethodInfo_2759B90 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
          pUVar5 = (pSVar4->fields)._items;
          (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
          if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
            uVar1 = (pSVar4->fields)._size;
            fVar10 = fVar10 * 0.5;
            if (uVar1 < (uint)pUVar5->max_length) {
              (pSVar4->fields)._size = uVar1 + 1;
              pUVar5->m_Items[(int)uVar1].fields.x = fVar10;
              pUVar5->m_Items[(int)uVar1].fields.y = fVar8;
            }
            else {
              item_00.fields.y = fVar8;
              item_00.fields.x = fVar10;
              System_Collections_Generic_List<Vector2>__AddWithResize
                        (pSVar4,item_00,
                         *(MethodInfo_2759B90 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
            pUVar5 = (pSVar4->fields)._items;
            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
            if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
              uVar1 = (pSVar4->fields)._size;
              fVar9 = fVar10 - FDFANDCCJAG.fields.y;
              if (uVar1 < (uint)pUVar5->max_length) {
                (pSVar4->fields)._size = uVar1 + 1;
                pUVar5->m_Items[(int)uVar1].fields.x = fVar10;
                pUVar5->m_Items[(int)uVar1].fields.y = fVar9;
              }
              else {
                item_01.fields.y = fVar9;
                item_01.fields.x = fVar10;
                System_Collections_Generic_List<Vector2>__AddWithResize
                          (pSVar4,item_01,
                           *(MethodInfo_2759B90 **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
              pUVar5 = (pSVar4->fields)._items;
              (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
              if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                uVar1 = (pSVar4->fields)._size;
                if (uVar1 < (uint)pUVar5->max_length) {
                  (pSVar4->fields)._size = uVar1 + 1;
                  pUVar5->m_Items[(int)uVar1].fields.x = fVar7;
                  pUVar5->m_Items[(int)uVar1].fields.y = fVar9;
                }
                else {
                  item_02.fields.y = fVar9;
                  item_02.fields.x = fVar7;
                  System_Collections_Generic_List<Vector2>__AddWithResize
                            (pSVar4,item_02,
                             *(MethodInfo_2759B90 **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                if (pUVar3 != (UIFigures_UILine_o *)0x0) {
                  pbVar6 = &(pUVar3->fields)._SingleTexturCord;
                  *(System_Collections_Generic_List_Vector2__o **)pbVar6 = pSVar4;
                  thunk_FUN_01c20e04(pbVar6,pSVar4);
                  pUVar3 = Nekki_SF2_GUI_Pvp_PlayerSelector__GCPGIJOGPIP(__this,method_02);
                  pSVar4 = (System_Collections_Generic_List_Vector2__o *)
                           thunk_FUN_01bda818(System_Collections_Generic_List<Vector2>_TypeInfo);
                  System_Collections_Generic_List<Vector2>___ctor
                            (pSVar4,Method_System_Collections_Generic_List<Vector2>__ctor__);
                  lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
                  if (pSVar4 != (System_Collections_Generic_List_Vector2__o *)0x0) {
                    pUVar5 = (pSVar4->fields)._items;
                    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                    if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                      uVar1 = (pSVar4->fields)._size;
                      if (uVar1 < (uint)pUVar5->max_length) {
                        (pSVar4->fields)._size = uVar1 + 1;
                        pUVar5->m_Items[(int)uVar1].fields.x = fVar7;
                        pUVar5->m_Items[(int)uVar1].fields.y = fVar8;
                      }
                      else {
                        item_03.fields.y = fVar8;
                        item_03.fields.x = fVar7;
                        System_Collections_Generic_List<Vector2>__AddWithResize
                                  (pSVar4,item_03,
                                   *(MethodInfo_2759B90 **)
                                    (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
                      pUVar5 = (pSVar4->fields)._items;
                      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                      if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                        uVar1 = (pSVar4->fields)._size;
                        fVar10 = FDFANDCCJAG.fields.x - fVar10;
                        if (uVar1 < (uint)pUVar5->max_length) {
                          (pSVar4->fields)._size = uVar1 + 1;
                          pUVar5->m_Items[(int)uVar1].fields.x = fVar10;
                          pUVar5->m_Items[(int)uVar1].fields.y = fVar8;
                        }
                        else {
                          item_04.fields.y = fVar8;
                          item_04.fields.x = fVar10;
                          System_Collections_Generic_List<Vector2>__AddWithResize
                                    (pSVar4,item_04,
                                     *(MethodInfo_2759B90 **)
                                      (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
                        pUVar5 = (pSVar4->fields)._items;
                        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                        if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                          uVar1 = (pSVar4->fields)._size;
                          if (uVar1 < (uint)pUVar5->max_length) {
                            (pSVar4->fields)._size = uVar1 + 1;
                            pUVar5->m_Items[(int)uVar1].fields.x = fVar10;
                            pUVar5->m_Items[(int)uVar1].fields.y = fVar9;
                          }
                          else {
                            item_05.fields.y = fVar9;
                            item_05.fields.x = fVar10;
                            System_Collections_Generic_List<Vector2>__AddWithResize
                                      (pSVar4,item_05,
                                       *(MethodInfo_2759B90 **)
                                        (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
                          pUVar5 = (pSVar4->fields)._items;
                          (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                          if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                            uVar1 = (pSVar4->fields)._size;
                            if (uVar1 < (uint)pUVar5->max_length) {
                              (pSVar4->fields)._size = uVar1 + 1;
                              pUVar5->m_Items[(int)uVar1].fields.x = fVar7;
                              pUVar5->m_Items[(int)uVar1].fields.y = fVar9;
                            }
                            else {
                              item_06.fields.y = fVar9;
                              item_06.fields.x = fVar7;
                              System_Collections_Generic_List<Vector2>__AddWithResize
                                        (pSVar4,item_06,
                                         *(MethodInfo_2759B90 **)
                                          (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                            }
                            if (pUVar3 != (UIFigures_UILine_o *)0x0) {
                              pbVar6 = &(pUVar3->fields)._SingleTexturCord;
                              *(System_Collections_Generic_List_Vector2__o **)pbVar6 = pSVar4;
                              thunk_FUN_01c20e04(pbVar6,pSVar4);
                              Nekki_SF2_GUI_Pvp_PlayerSelector__SelectCurrentItem
                                        (__this,false,in_x2);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

