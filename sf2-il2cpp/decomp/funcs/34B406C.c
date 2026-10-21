// UIFigures.UIFrameRectBorder$$OnPopulateMesh @ RVA 0x34B406C

void UIFigures_UIFrameRectBorder__OnPopulateMesh
               (UIFigures_UIFrameRectBorder_o *__this,UnityEngine_UI_VertexHelper_o *BALEEENOIJA,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_RectTransform_o *pUVar3;
  System_Collections_Generic_List_Vector2__o *pSVar4;
  UnityEngine_Vector2_array *pUVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector2_o item;
  UnityEngine_Vector2_o item_00;
  UnityEngine_Vector2_o item_01;
  UnityEngine_Vector2_o item_02;
  UnityEngine_Vector2_o item_03;
  UnityEngine_Vector2_o item_04;
  UnityEngine_Vector2_o item_05;
  UnityEngine_Vector2_o item_06;
  UnityEngine_Rect_o UVar15;
  UnityEngine_Rect_o UVar16;
  UnityEngine_Color_o GKBNFBINIIP;
  ulong uVar10;
  
  if ((DAT_04568574 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>_Clear__);
    DAT_04568574 = 1;
  }
  UIFigures_UIFigure__OnPopulateMesh((UIFigures_UIFigure_o *)__this,BALEEENOIJA,(MethodInfo *)0x0);
  pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    UVar15 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UVar16 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
      pSVar4 = *(System_Collections_Generic_List_Vector2__o **)&(__this->fields)._AngelSize;
      if (pSVar4 != (System_Collections_Generic_List_Vector2__o *)0x0) {
        fVar6 = (__this->fields).super.INCPCFENLPJ.fields.y;
        pUVar5 = (pSVar4->fields)._items;
        (pSVar4->fields)._size = 0;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 2;
        if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
          fVar6 = fVar6 * 0.5;
          fVar13 = UVar16.fields.m_Height * 0.5 - fVar6;
          if ((int)pUVar5->max_length == 0) {
            System_Collections_Generic_List<Vector2>__AddWithResize
                      (pSVar4,(UnityEngine_Vector2_o)((ulong)(uint)fVar13 << 0x20),
                       *(MethodInfo_2759B90 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          else {
            (pSVar4->fields)._size = 1;
            pUVar5->m_Items[0].fields.x = 0.0;
            pUVar5->m_Items[0].fields.y = fVar13;
          }
          lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
          pSVar4 = *(System_Collections_Generic_List_Vector2__o **)&(__this->fields)._AngelSize;
          if (pSVar4 != (System_Collections_Generic_List_Vector2__o *)0x0) {
            fVar7 = (__this->fields).super.INCPCFENLPJ.fields.x;
            fVar9 = (__this->fields).super.INCPCFENLPJ.fields.y;
            pUVar5 = (pSVar4->fields)._items;
            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
            if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
              uVar12 = 0xbf000000;
              uVar1 = (pSVar4->fields)._size;
              fVar6 = UVar15.fields.m_Width * 0.5 - fVar6;
              item.fields.x = fVar6 - (fVar7 + fVar9 * -0.5 * 0.585786);
              if (uVar1 < (uint)pUVar5->max_length) {
                (pSVar4->fields)._size = uVar1 + 1;
                pUVar5->m_Items[(int)uVar1].fields.x = item.fields.x;
                pUVar5->m_Items[(int)uVar1].fields.y = fVar13;
              }
              else {
                item.fields.y = fVar13;
                System_Collections_Generic_List<Vector2>__AddWithResize
                          (pSVar4,item,
                           *(MethodInfo_2759B90 **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
              pSVar4 = *(System_Collections_Generic_List_Vector2__o **)&(__this->fields)._AngelSize;
              if (pSVar4 != (System_Collections_Generic_List_Vector2__o *)0x0) {
                fVar7 = (__this->fields).super.INCPCFENLPJ.fields.x;
                fVar9 = (__this->fields).super.INCPCFENLPJ.fields.y;
                pUVar5 = (pSVar4->fields)._items;
                (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                  uVar1 = (pSVar4->fields)._size;
                  item_00.fields.y = fVar13 - (fVar7 + fVar9 * -0.5 * 0.585786);
                  if (uVar1 < (uint)pUVar5->max_length) {
                    (pSVar4->fields)._size = uVar1 + 1;
                    pUVar5->m_Items[(int)uVar1].fields.x = fVar6;
                    pUVar5->m_Items[(int)uVar1].fields.y = item_00.fields.y;
                  }
                  else {
                    item_00.fields.x = fVar6;
                    System_Collections_Generic_List<Vector2>__AddWithResize
                              (pSVar4,item_00,
                               *(MethodInfo_2759B90 **)
                                (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
                  pSVar4 = *(System_Collections_Generic_List_Vector2__o **)
                            &(__this->fields)._AngelSize;
                  if (pSVar4 != (System_Collections_Generic_List_Vector2__o *)0x0) {
                    fVar7 = (__this->fields).super.INCPCFENLPJ.fields.x;
                    fVar9 = (__this->fields).super.INCPCFENLPJ.fields.y;
                    pUVar5 = (pSVar4->fields)._items;
                    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                    if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                      uVar1 = (pSVar4->fields)._size;
                      item_01.fields.y = (fVar7 + fVar9 * -0.5 * 0.585786) - fVar13;
                      if (uVar1 < (uint)pUVar5->max_length) {
                        (pSVar4->fields)._size = uVar1 + 1;
                        pUVar5->m_Items[(int)uVar1].fields.x = fVar6;
                        pUVar5->m_Items[(int)uVar1].fields.y = item_01.fields.y;
                      }
                      else {
                        item_01.fields.x = fVar6;
                        System_Collections_Generic_List<Vector2>__AddWithResize
                                  (pSVar4,item_01,
                                   *(MethodInfo_2759B90 **)
                                    (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
                      pSVar4 = *(System_Collections_Generic_List_Vector2__o **)
                                &(__this->fields)._AngelSize;
                      if (pSVar4 != (System_Collections_Generic_List_Vector2__o *)0x0) {
                        fVar7 = (__this->fields).super.INCPCFENLPJ.fields.x;
                        fVar9 = (__this->fields).super.INCPCFENLPJ.fields.y;
                        pUVar5 = (pSVar4->fields)._items;
                        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                        if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                          uVar1 = (pSVar4->fields)._size;
                          fVar14 = -fVar13;
                          item_02.fields.x = fVar6 - (fVar7 + fVar9 * -0.5 * 0.585786);
                          if (uVar1 < (uint)pUVar5->max_length) {
                            (pSVar4->fields)._size = uVar1 + 1;
                            pUVar5->m_Items[(int)uVar1].fields.x = item_02.fields.x;
                            pUVar5->m_Items[(int)uVar1].fields.y = fVar14;
                          }
                          else {
                            item_02.fields.y = fVar14;
                            System_Collections_Generic_List<Vector2>__AddWithResize
                                      (pSVar4,item_02,
                                       *(MethodInfo_2759B90 **)
                                        (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
                          pSVar4 = *(System_Collections_Generic_List_Vector2__o **)
                                    &(__this->fields)._AngelSize;
                          if (pSVar4 != (System_Collections_Generic_List_Vector2__o *)0x0) {
                            fVar7 = (__this->fields).super.INCPCFENLPJ.fields.x;
                            fVar9 = (__this->fields).super.INCPCFENLPJ.fields.y;
                            pUVar5 = (pSVar4->fields)._items;
                            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                            if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                              uVar1 = (pSVar4->fields)._size;
                              item_03.fields.x = (fVar7 + fVar9 * -0.5 * 0.585786) - fVar6;
                              if (uVar1 < (uint)pUVar5->max_length) {
                                (pSVar4->fields)._size = uVar1 + 1;
                                pUVar5->m_Items[(int)uVar1].fields.x = item_03.fields.x;
                                pUVar5->m_Items[(int)uVar1].fields.y = fVar14;
                              }
                              else {
                                item_03.fields.y = fVar14;
                                System_Collections_Generic_List<Vector2>__AddWithResize
                                          (pSVar4,item_03,
                                           *(MethodInfo_2759B90 **)
                                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
                              pSVar4 = *(System_Collections_Generic_List_Vector2__o **)
                                        &(__this->fields)._AngelSize;
                              if (pSVar4 != (System_Collections_Generic_List_Vector2__o *)0x0) {
                                fVar7 = (__this->fields).super.INCPCFENLPJ.fields.x;
                                fVar9 = (__this->fields).super.INCPCFENLPJ.fields.y;
                                pUVar5 = (pSVar4->fields)._items;
                                (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                                if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                                  uVar1 = (pSVar4->fields)._size;
                                  fVar14 = -fVar6;
                                  item_04.fields.y = (fVar7 + fVar9 * -0.5 * 0.585786) - fVar13;
                                  if (uVar1 < (uint)pUVar5->max_length) {
                                    (pSVar4->fields)._size = uVar1 + 1;
                                    pUVar5->m_Items[(int)uVar1].fields.x = fVar14;
                                    pUVar5->m_Items[(int)uVar1].fields.y = item_04.fields.y;
                                  }
                                  else {
                                    item_04.fields.x = fVar14;
                                    System_Collections_Generic_List<Vector2>__AddWithResize
                                              (pSVar4,item_04,
                                               *(MethodInfo_2759B90 **)
                                                (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                                  }
                                  lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
                                  pSVar4 = *(System_Collections_Generic_List_Vector2__o **)
                                            &(__this->fields)._AngelSize;
                                  if (pSVar4 != (System_Collections_Generic_List_Vector2__o *)0x0) {
                                    fVar7 = (__this->fields).super.INCPCFENLPJ.fields.x;
                                    fVar9 = (__this->fields).super.INCPCFENLPJ.fields.y;
                                    pUVar5 = (pSVar4->fields)._items;
                                    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                                    if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                                      uVar1 = (pSVar4->fields)._size;
                                      item_05.fields.y = fVar13 - (fVar7 + fVar9 * -0.5 * 0.585786);
                                      if (uVar1 < (uint)pUVar5->max_length) {
                                        (pSVar4->fields)._size = uVar1 + 1;
                                        pUVar5->m_Items[(int)uVar1].fields.x = fVar14;
                                        pUVar5->m_Items[(int)uVar1].fields.y = item_05.fields.y;
                                      }
                                      else {
                                        item_05.fields.x = fVar14;
                                        System_Collections_Generic_List<Vector2>__AddWithResize
                                                  (pSVar4,item_05,
                                                   *(MethodInfo_2759B90 **)
                                                    (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) +
                                                    0x70));
                                      }
                                      lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
                                      pSVar4 = *(System_Collections_Generic_List_Vector2__o **)
                                                &(__this->fields)._AngelSize;
                                      if (pSVar4 != (System_Collections_Generic_List_Vector2__o *)
                                                    0x0) {
                                        fVar7 = (__this->fields).super.INCPCFENLPJ.fields.x;
                                        fVar9 = (__this->fields).super.INCPCFENLPJ.fields.y;
                                        pUVar5 = (pSVar4->fields)._items;
                                        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                                        if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                                          uVar11 = 0xbf000000;
                                          uVar1 = (pSVar4->fields)._size;
                                          fVar9 = fVar9 * -0.5 * 0.585786;
                                          uVar10 = (ulong)(uint)fVar9;
                                          item_06.fields.x = (fVar7 + fVar9) - fVar6;
                                          if (uVar1 < (uint)pUVar5->max_length) {
                                            (pSVar4->fields)._size = uVar1 + 1;
                                            pUVar5->m_Items[(int)uVar1].fields.x = item_06.fields.x;
                                            pUVar5->m_Items[(int)uVar1].fields.y = fVar13;
                                          }
                                          else {
                                            item_06.fields.y = fVar13;
                                            uVar10 = (ulong)(uint)fVar13;
                                            System_Collections_Generic_List<Vector2>__AddWithResize
                                                      (pSVar4,item_06,
                                                       *(MethodInfo_2759B90 **)
                                                        (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) +
                                                        0x70));
                                          }
                                          lVar2 = 
                                          Method_System_Collections_Generic_List<Vector2>_Add__;
                                          pSVar4 = *(System_Collections_Generic_List_Vector2__o **)
                                                    &(__this->fields)._AngelSize;
                                          if (pSVar4 != (System_Collections_Generic_List_Vector2__o
                                                         *)0x0) {
                                            pUVar5 = (pSVar4->fields)._items;
                                            (pSVar4->fields)._version =
                                                 (pSVar4->fields)._version + 1;
                                            if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
                                              uVar1 = (pSVar4->fields)._size;
                                              if (uVar1 < (uint)pUVar5->max_length) {
                                                (pSVar4->fields)._size = uVar1 + 1;
                                                pUVar5->m_Items[(int)uVar1].fields.x = 0.0;
                                                pUVar5->m_Items[(int)uVar1].fields.y = fVar13;
                                              }
                                              else {
                                                uVar10 = (ulong)(uint)fVar13;
                                                System_Collections_Generic_List<Vector2>__AddWithResize
                                                          (pSVar4,(UnityEngine_Vector2_o)
                                                                  ((ulong)(uint)fVar13 << 0x20),
                                                           *(MethodInfo_2759B90 **)
                                                            (*(long *)(*(long *)(lVar2 + 0x20) +
                                                                      0xc0) + 0x70));
                                              }
                                              pSVar4 = *(System_Collections_Generic_List_Vector2__o
                                                         **)&(__this->fields)._AngelSize;
                                              fVar6 = (__this->fields).super.INCPCFENLPJ.fields.y;
                                              uVar8 = (*(__this->klass->vtable)._22_get_color.
                                                        methodPtr)(__this,(__this->klass->vtable).
                                                                          _22_get_color.method);
                                              GKBNFBINIIP.fields.g = (undefined4)uVar10;
                                              GKBNFBINIIP.fields.r = (float)uVar8;
                                              GKBNFBINIIP.fields.b = (undefined4)uVar11;
                                              GKBNFBINIIP.fields.a = (undefined4)uVar12;
                                              DDFDPLHKGKB__GBCBKEDFNGJ
                                                        (BALEEENOIJA,pSVar4,fVar6,GKBNFBINIIP,false,
                                                         (MethodInfo *)0x0);
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

