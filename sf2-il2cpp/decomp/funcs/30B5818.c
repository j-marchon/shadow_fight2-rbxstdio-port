// Nekki.SF2.GUI.TextPic$$GetPresentedPrefabs @ RVA 0x30B5818

System_Collections_Generic_List_GameObject__o *
Nekki_SF2_GUI_TextPic__GetPresentedPrefabs
          (Nekki_SF2_GUI_TextPic_o *__this,bool CHBLGJGLBAE,MethodInfo *method)

{
  int32_t capacity;
  byte bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *pNVar5;
  UnityEngine_GameObject_array *pUVar6;
  UnityEngine_Object_o *x;
  UnityEngine_Object_c *pUVar7;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045661fb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<GameObject>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_PrefabGlyph_TypeInfo);
    DAT_045661fb = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pNVar5 = (__this->fields).NMHDAIIIHFP;
  if (pNVar5 != (Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *)0x0) {
    capacity = *(int32_t *)&pNVar5[1].klass;
    __this_00 = (System_Collections_Generic_List_GameObject__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<GameObject>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,capacity,
               Method_System_Collections_Generic_List<GameObject>__ctor__);
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
                    /* try { // try from 031b5a54 to 032b5a6b has its CatchHandler @ 031b5e50 */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
                    /* try { // try from 031b5a6c to 032b5b8f has its CatchHandler @ 031b57ec */
          return __this_00;
        }
        if ((UnityEngine_Object_o *)local_70.fields._current == (UnityEngine_Object_o *)0x0) {
LAB_031b5984:
          x = (UnityEngine_Object_o *)0x0;
        }
        else {
          bVar1 = (Nekki_SF2_GUI_Glyphs_PrefabGlyph_TypeInfo->_2).naturalAligment;
          if ((((UnityEngine_Object_c *)(local_70.fields._current)->klass)->_2).naturalAligment <
              bVar1) goto LAB_031b5984;
          x = (UnityEngine_Object_o *)local_70.fields._current;
          if ((((UnityEngine_Object_c *)(local_70.fields._current)->klass)->_2).typeHierarchy
              [(ulong)bVar1 - 1] != (Il2CppClass *)Nekki_SF2_GUI_Glyphs_PrefabGlyph_TypeInfo) {
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
                    /* try { // try from 031b59c8 to 032b59eb has its CatchHandler @ 031b5a3c */
          pUVar7 = x[3].klass;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          lVar3 = Method_System_Collections_Generic_List<GameObject>_Add__;
          if (bVar4 || CHBLGJGLBAE) {
                    /* try { // try from 031b59f4 to 032b59ff has its CatchHandler @ 031b5a38 */
            if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pUVar7 = x[3].klass;
            pUVar6 = (__this_00->fields)._items;
                    /* try { // try from 031b5a04 to 032b5a1b has its CatchHandler @ 031b5a34 */
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pUVar6 == (UnityEngine_GameObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pUVar6->max_length) {
                    /* try { // try from 031b5a2c to 032b5a2f has its CatchHandler @ 031b5a38 */
              (__this_00->fields)._size = uVar2 + 1;
                    /* try { // try from 031b5a30 to 032b5a53 has its CatchHandler @ 031b57ec */
              pUVar6->m_Items[(int)uVar2] = (UnityEngine_GameObject_o *)pUVar7;
                    /* catch() { ... } // from try @ 031b5a04 with catch @ 031b5a34 */
              thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 031b59f4 with catch @ 031b5a38
                       catch() { ... } // from try @ 031b5a2c with catch @ 031b5a38 */
            }
            else {
                    /* catch() { ... } // from try @ 031b59c8 with catch @ 031b5a3c */
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

