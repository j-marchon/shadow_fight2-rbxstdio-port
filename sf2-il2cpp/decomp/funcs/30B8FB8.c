// Nekki.SF2.GUI.TextPic$$GetPresentedQuadImages @ RVA 0x30B8FB8

System_Collections_Generic_List_ResolutionImage__o *
Nekki_SF2_GUI_TextPic__GetPresentedQuadImages
          (Nekki_SF2_GUI_TextPic_o *__this,bool CHBLGJGLBAE,MethodInfo *method)

{
  int32_t capacity;
  byte bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Collections_Generic_List_ResolutionImage__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *pNVar5;
  Nekki_SF2_GUI_ResolutionImage_array *pNVar6;
  UnityEngine_Object_o *x;
  UnityEngine_Object_c *pUVar7;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_0456620d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_ImageGlyph_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<ResolutionImage>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456620d = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pNVar5 = (__this->fields).NMHDAIIIHFP;
  if (pNVar5 != (Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *)0x0) {
    capacity = *(int32_t *)&pNVar5[1].klass;
    __this_00 = (System_Collections_Generic_List_ResolutionImage__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<ResolutionImage>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,capacity,
               Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
    __this_01 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,__this_01,Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      do {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
          return __this_00;
        }
        if ((UnityEngine_Object_o *)local_70.fields._current == (UnityEngine_Object_o *)0x0) {
LAB_031b9124:
          x = (UnityEngine_Object_o *)0x0;
        }
        else {
          bVar1 = (Nekki_SF2_GUI_Glyphs_ImageGlyph_TypeInfo->_2).naturalAligment;
          if ((((UnityEngine_Object_c *)(local_70.fields._current)->klass)->_2).naturalAligment <
              bVar1) goto LAB_031b9124;
          x = (UnityEngine_Object_o *)local_70.fields._current;
          if ((((UnityEngine_Object_c *)(local_70.fields._current)->klass)->_2).typeHierarchy
              [(ulong)bVar1 - 1] != (Il2CppClass *)Nekki_SF2_GUI_Glyphs_ImageGlyph_TypeInfo) {
            x = (UnityEngine_Object_o *)0x0;
          }
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar7 = x[3].klass;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          lVar3 = Method_System_Collections_Generic_List<ResolutionImage>_Add__;
          if (bVar4 || CHBLGJGLBAE) {
            if (__this_00 == (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pUVar7 = x[3].klass;
            pNVar6 = (__this_00->fields)._items;
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pNVar6 == (Nekki_SF2_GUI_ResolutionImage_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pNVar6->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pNVar6->m_Items[(int)uVar2] = (Nekki_SF2_GUI_ResolutionImage_o *)pUVar7;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (Il2CppObject *)pUVar7,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

