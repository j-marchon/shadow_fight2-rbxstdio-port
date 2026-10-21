// Nekki.SF2.GUI.Fight.ComboModel$$MFPOPOLAEHM @ RVA 0x332C2A8

void Nekki_SF2_GUI_Fight_ComboModel__MFPOPOLAEHM
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *pSVar6;
  Il2CppClass *pIVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_Object_array *pSVar9;
  long in_d1;
  uint uVar10;
  UnityEngine_Rect_o UVar11;
  UnityEngine_Vector2_o PNAINFFCAJP;
  UnityEngine_Vector2_o PNAINFFCAJP_00;
  UnityEngine_Vector3_o UVar12;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045678cd & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ComboModel_IADNCANFNJH>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045678cd = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ComboModel_IADNCANFNJH>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>__ctor__);
  pSVar6 = (__this->fields).EGHLGEIJLAM;
  if (pSVar6 != (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)pSVar6,
               Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
LAB_0342c3d0:
    bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_MoveNext__
                      );
    pIVar3 = local_80.fields._current;
    uVar10 = (uint)((ulong)in_d1 >> 0x20);
    if (bVar4) {
      if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((*(char *)((long)&local_80.fields._current[1].monitor + 5) != '\0') ||
         ((__this->fields).JBKPKLGIMOK == false)) {
        iVar1 = *(int *)&local_80.fields._current[1].monitor;
        pIVar7 = local_80.fields._current[1].klass;
        *(undefined1 *)((long)&local_80.fields._current[1].monitor + 4) = 0;
        if (iVar1 < 1) {
          if (pIVar7 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar8 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pIVar7,(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UVar12 = UnityEngine_Transform__get_localPosition(pUVar8,(MethodInfo *)0x0);
          PNAINFFCAJP_00.fields.y = UVar12.fields.y;
          if (pIVar3[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8(UVar12.fields.x,CONCAT44(uVar10,PNAINFFCAJP_00.fields.y),UVar12.fields.z);
          }
          __this_01 = Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform
                                ((Nekki_SF2_GUI_Fight_ComboItem_o *)pIVar3[1].klass,
                                 (MethodInfo *)0x0);
          if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UVar11 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
          PNAINFFCAJP_00.fields.x = -UVar11.fields.m_Width;
          in_d1 = (ulong)uVar10 << 0x20;
          bVar4 = Nekki_SF2_GUI_Fight_ComboModel__MoveTo
                            (__this,(Nekki_SF2_GUI_Fight_ComboItem_o *)pIVar3[1].klass,
                             PNAINFFCAJP_00,30.0,in_x2);
          lVar2 = Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Add__;
          if (bVar4) {
            if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = (__this_00->fields)._items;
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pSVar9 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar10 = (__this_00->fields)._size;
            if (uVar10 < (uint)pSVar9->max_length) {
              (__this_00->fields)._size = uVar10 + 1;
              pSVar9->m_Items[(int)uVar10] = pIVar3;
              thunk_FUN_01c20e04(pSVar9->m_Items + (int)uVar10,pIVar3);
            }
            else {
              in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,pIVar3,(MethodInfo_26E4DAC *)in_x2);
            }
          }
        }
        else {
          if (pIVar7 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar8 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pIVar7,(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UVar12 = UnityEngine_Transform__get_localPosition(pUVar8,(MethodInfo *)0x0);
          PNAINFFCAJP.fields.y = UVar12.fields.y;
          PNAINFFCAJP.fields.x = (__this->fields).GDODLGBHLCD;
          in_d1 = (ulong)uVar10 << 0x20;
          bVar4 = Nekki_SF2_GUI_Fight_ComboModel__MoveTo
                            (__this,(Nekki_SF2_GUI_Fight_ComboItem_o *)pIVar3[1].klass,PNAINFFCAJP,
                             30.0,in_x2);
          if (bVar4) {
            if (*(int *)&pIVar3[2].klass == 4) {
              if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              iVar5 = MGNPHCAAEIO__PCJHAMFGJLP((MethodInfo *)0x0);
              if (iVar5 != 1) goto LAB_0342c3d0;
            }
            iVar1 = *(int *)&pIVar3[1].monitor;
            *(undefined1 *)((long)&pIVar3[1].monitor + 4) = 1;
            *(int *)&pIVar3[1].monitor = iVar1 + -1;
          }
        }
      }
      goto LAB_0342c3d0;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,
               Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_Dispose__);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,__this_00,
                 Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_MoveNext__
                          );
        pIVar3 = local_80.fields._current;
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_Dispose__
                    );
          return;
        }
        pSVar6 = (__this->fields).EGHLGEIJLAM;
        if (pSVar6 == (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar4 = System_Collections_Generic_List<object>__Remove
                          ((System_Collections_Generic_List_object__o *)pSVar6,
                           local_80.fields._current,
                           Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Remove__);
        if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8(bVar4);
        }
        pIVar7 = pIVar3[1].klass;
        if (pIVar7 == (Il2CppClass *)0x0) break;
        LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pIVar7,(MethodInfo *)0x0);
        Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

