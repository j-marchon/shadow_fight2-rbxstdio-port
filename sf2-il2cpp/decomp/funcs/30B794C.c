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

