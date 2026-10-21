// Nekki.SF2.GUI.TextPic$$GEDECBAJOBH @ RVA 0x30B7A30

void Nekki_SF2_GUI_TextPic__GEDECBAJOBH(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Action_o *pSVar3;
  System_Collections_Generic_List_Bounds__o *GAPOMBJDGMG;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  float fVar4;
  UnityEngine_Vector2_o UVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566205 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    DAT_04566205 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
  *(undefined4 *)((long)&(__this->fields).POHAMNFPKNM + 4) = 0x3f800000;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,__this_00,Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__),
          bVar1) {
      Nekki_SF2_GUI_TextPic__IHAENEAJGBH
                (__this,(Nekki_SF2_GUI_Glyphs_Glyph_o *)local_48.fields._current,in_x2);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    iVar2 = UnityEngine_UI_Text__get_horizontalOverflow
                      ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
    if (iVar2 == 0) {
      pSVar3 = (__this->fields).NFECDKAEFJL;
      if (pSVar3 == (System_Action_o *)0x0) goto LAB_031b7b90;
      iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__HHLLNMFOMGD
                        ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)pSVar3,method_00);
      if (0 < iVar2) {
        GAPOMBJDGMG = OMANDMDCGMF__GNPDINFDHKG
                                ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL
                                 ,(MethodInfo *)0x0);
        Nekki_SF2_GUI_TextPic__IMOIFLIIIAI(__this,GAPOMBJDGMG,in_x2);
        if (*(char *)&(__this->fields).POHAMNFPKNM != '\0') {
          pSVar3 = (__this->fields).NFECDKAEFJL;
          UVar5 = Nekki_SF2_GUI_TextPic__get_GenerationGeometryBounds(__this,method_01);
          iVar2 = UnityEngine_UI_Text__get_alignment
                            ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
          UVar5.fields.y = (float)((ulong)UVar5.fields >> 0x20);
          fVar4 = OMANDMDCGMF__AKJLNDMOICM
                            ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)pSVar3,
                             (System_Collections_Generic_IList_Bounds__o *)GAPOMBJDGMG,UVar5,iVar2,
                             (MethodInfo *)0x0);
          *(float *)((long)&(__this->fields).POHAMNFPKNM + 4) = fVar4;
        }
      }
    }
    return;
  }
LAB_031b7b90:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

