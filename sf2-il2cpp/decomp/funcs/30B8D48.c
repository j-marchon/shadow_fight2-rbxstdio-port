// Nekki.SF2.GUI.TextPic$$KBIGLOGHNNM @ RVA 0x30B8D48

void Nekki_SF2_GUI_TextPic__KBIGLOGHNNM(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Action_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *extraout_x1;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566209 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    DAT_04566209 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  lVar3 = *(long *)&(__this->fields).LINICNCLMBA;
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x15) == '\0')) {
    return;
  }
  __this_00 = (__this->fields).NFECDKAEFJL;
  if (__this_00 != (System_Action_o *)0x0) {
    iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__ILAMEAMIMMP
                      ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)__this_00,method);
    lVar3 = *(long *)&(__this->fields).LINICNCLMBA;
    if (iVar2 == 1) {
      if (lVar3 == 0) goto LAB_031b8e98;
      if (*(char *)(lVar3 + 0x14) == '\0') {
        return;
      }
    }
    else if (lVar3 == 0) goto LAB_031b8e98;
    fVar6 = *(float *)(lVar3 + 0x10);
    fVar4 = OMANDMDCGMF__LAGJEPOKPHD
                      ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL,
                       (MethodInfo *)0x0);
    fVar5 = UnityEngine_UI_Text__get_lineSpacing((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
    __this_01 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      if (fVar5 <= 1.0) {
        fVar5 = 1.0;
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,__this_01,Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
          return;
        }
        if (local_48.fields._current == (Il2CppObject *)0x0) break;
        if (local_48.fields._current[3].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        BOGDEGPCIJI__IAIOGBPAABH
                  ((BOGDEGPCIJI_o *)local_48.fields._current[3].klass,fVar6 * fVar4 * fVar5,
                   (MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_031b8e98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

