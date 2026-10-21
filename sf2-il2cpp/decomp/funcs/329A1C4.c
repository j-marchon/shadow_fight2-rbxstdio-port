// OMANDMDCGMF$$LAGJEPOKPHD @ RVA 0x329A1C4

float OMANDMDCGMF__LAGJEPOKPHD(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *__this;
  undefined8 uVar2;
  MethodInfo *in_x5;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar3;
  float fVar4;
  undefined1 auVar5 [16];
  UnityEngine_Bounds_o UStack_50;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = MMEECJEKHGB;
  if ((DAT_04567384 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
    auVar5 = FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Count__);
    DAT_04567384 = 1;
  }
  uVar2 = auVar5._0_8_;
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) &&
     (pSVar3 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField,
     pSVar3 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0)) {
    fVar4 = 0.0;
    if (3 < (pSVar3->fields)._size) {
      __this = (MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField;
      uVar2 = 0;
      if (__this == (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0)
      goto LAB_0339a2e0;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_38,(System_Collections_Generic_List_object__o *)__this,
                 Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
      fVar4 = 0.0;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_38,
                                Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__
                               ), bVar1) {
        OMANDMDCGMF__MLCFOLPGDBO
                  (&UStack_50,MMEECJEKHGB,
                   (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)local_38.fields._current,
                   (System_Collections_Generic_HashSet_char__o *)0x0,
                   (System_Collections_Generic_HashSet_char__o *)0x0,
                   (System_Collections_Generic_HashSet_char__o *)0x0,in_x5);
        if (fVar4 <= UStack_50.fields.m_Extents.fields.y + UStack_50.fields.m_Extents.fields.y) {
          fVar4 = UStack_50.fields.m_Extents.fields.y + UStack_50.fields.m_Extents.fields.y;
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_38,
                 Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__);
    }
    return fVar4;
  }
LAB_0339a2e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar5._8_8_);
}

