// TypeDefIndex 978
// Namespace: 
// private class TextPic.ABOHOFBMBHP
// Fields:
//   private readonly List<Glyph> CNFAHCPFONL; // 0x10

// ===== public void LLCONNGHGKD()  [RVA 0x30B5614]
// Nekki.SF2.GUI.TextPic.ABOHOFBMBHP$$LLCONNGHGKD @ RVA 0x30B5614

void Nekki_SF2_GUI_TextPic_ABOHOFBMBHP__LLCONNGHGKD
               (Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_Glyph__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456621b & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<Glyph>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456621b = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).CNFAHCPFONL,
                     Method_DJNBJHPDKDP_OBECCOPBADO<Glyph>__);
  if (bVar1) {
    return;
  }
  pSVar2 = (__this->fields).CNFAHCPFONL;
  if (pSVar2 != (System_Collections_Generic_List_Glyph__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_50,
                              Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__),
          __this_00 = local_50.fields._current, bVar1) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        if ((Nekki_SF2_GUI_Glyphs_Glyph_o *)__this_00 == (Nekki_SF2_GUI_Glyphs_Glyph_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        Nekki_SF2_GUI_Glyphs_Glyph__Destroy
                  ((Nekki_SF2_GUI_Glyphs_Glyph_o *)__this_00,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    pSVar2 = (__this->fields).CNFAHCPFONL;
    if (pSVar2 != (System_Collections_Generic_List_Glyph__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (length < 1) {
        return;
      }
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30B4E40]
// Nekki.SF2.GUI.TextPic.ABOHOFBMBHP$$.ctor @ RVA 0x30B4E40

void Nekki_SF2_GUI_TextPic_ABOHOFBMBHP___ctor
               (Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Glyph__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456621c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Glyph>_TypeInfo);
    DAT_0456621c = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_Glyph__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Glyph>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Glyph>__ctor__);
  (__this->fields).CNFAHCPFONL = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void ILKDIPBPEDL()  [RVA 0x30B97BC]
// Nekki.SF2.GUI.TextPic.ABOHOFBMBHP$$ILKDIPBPEDL @ RVA 0x30B97BC

void Nekki_SF2_GUI_TextPic_ABOHOFBMBHP__ILKDIPBPEDL
               (Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_Glyph__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_0456621d & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_Clear__);
    DAT_0456621d = 1;
  }
  pSVar1 = (__this->fields).CNFAHCPFONL;
  if (pSVar1 != (System_Collections_Generic_List_Glyph__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void ECKFHNINNIN(Glyph GMKMNGAHIME)  [RVA 0x30B794C]
// Nekki.SF2.GUI.TextPic.ABOHOFBMBHP$$ECKFHNINNIN @ RVA 0x30B794C

void Nekki_SF2_GUI_TextPic_ABOHOFBMBHP__ECKFHNINNIN
               (Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *__this,
               Nekki_SF2_GUI_Glyphs_Glyph_o *GMKMNGAHIME,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_Glyph__o *pSVar4;
  Nekki_SF2_GUI_Glyphs_Glyph_array *pNVar5;
  
  if ((DAT_0456621e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_Contains__);
    DAT_0456621e = 1;
  }
  pSVar4 = (__this->fields).CNFAHCPFONL;
  if (pSVar4 != (System_Collections_Generic_List_Glyph__o *)0x0) {
    bVar3 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)pSVar4,
                       (Il2CppObject *)GMKMNGAHIME,
                       Method_System_Collections_Generic_List<Glyph>_Contains__);
    lVar2 = Method_System_Collections_Generic_List<Glyph>_Add__;
    if (bVar3) {
      return;
    }
    pSVar4 = (__this->fields).CNFAHCPFONL;
    if (pSVar4 != (System_Collections_Generic_List_Glyph__o *)0x0) {
      pNVar5 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pNVar5 != (Nekki_SF2_GUI_Glyphs_Glyph_array *)0x0) {
        uVar1 = (pSVar4->fields)._size;
        if (uVar1 < (uint)pNVar5->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pNVar5->m_Items[(int)uVar1] = GMKMNGAHIME;
          thunk_FUN_01c20e04(pNVar5->m_Items + (int)uVar1,GMKMNGAHIME);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)GMKMNGAHIME,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

