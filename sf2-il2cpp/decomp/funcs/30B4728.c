// Nekki.SF2.GUI.TextPic$$MJBPNMOFPOJ @ RVA 0x30B4728

void Nekki_SF2_GUI_TextPic__MJBPNMOFPOJ
               (Nekki_SF2_GUI_TextPic_o *__this,AEGOLGIJEBI_MCGKJAGBFKP_o *ADOIANOKIIK,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_RectTransform_o *JJHEGPBBMLG;
  Nekki_SF2_GUI_Glyphs_Glyph_o *item;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  UnityEngine_UIVertex_array *KGGEIJMLEGC;
  
  if ((DAT_0456620f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_Add__);
    DAT_0456620f = 1;
  }
  JJHEGPBBMLG = UnityEngine_UI_Graphic__get_rectTransform
                          ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  KGGEIJMLEGC = (__this->fields).super.m_TempVerts;
  if ((Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo);
  }
  item = Nekki_SF2_GUI_Glyphs_Glyph__Create
                   ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,(UnityEngine_Transform_o *)JJHEGPBBMLG,
                    (UnityEngine_GameObject_array *)KGGEIJMLEGC,(MethodInfo *)0x0);
  if (item != (Nekki_SF2_GUI_Glyphs_Glyph_o *)0x0) {
    (*(item->klass->vtable)._5_ParseParams.methodPtr)
              (item,ADOIANOKIIK,(__this->fields)._OAFKPIMLHJE_k__BackingField,
               (item->klass->vtable)._5_ParseParams.method);
    lVar2 = Method_System_Collections_Generic_List<Glyph>_Add__;
    __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar3 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
          thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,item);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

