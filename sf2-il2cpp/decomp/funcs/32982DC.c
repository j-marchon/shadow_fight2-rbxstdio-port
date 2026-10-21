// OMANDMDCGMF$$AKJLNDMOICM @ RVA 0x32982DC

float OMANDMDCGMF__AKJLNDMOICM
                (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,float MJCBABPPIAD,
                int32_t NJLNDHBHPMK,MethodInfo *method)

{
  Il2CppObject *NFNNIOEGDBG;
  bool bVar1;
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *__this;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  float CHOCOAGNFDD;
  float fVar2;
  UnityEngine_Vector3_o PCLFHFELAII;
  UnityEngine_Bounds_o local_a0;
  UnityEngine_Bounds_o local_88;
  UnityEngine_Vector3_Fields local_70 [2];
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_0456737b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
    DAT_0456737b = 1;
  }
  CHOCOAGNFDD = (float)NEON_fminnm(MJCBABPPIAD,0x3f800000);
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  bVar1 = Util__JFJCDAJGFKD(CHOCOAGNFDD,1.0,0.01,(MethodInfo *)0x0);
  fVar2 = 1.0;
  if (!bVar1) {
    if ((MMEECJEKHGB == (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) ||
       (__this = (MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField,
       __this == (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_58,
                              Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__
                             ), NFNNIOEGDBG = local_58.fields._current, bVar1) {
      method_00 = (MethodInfo *)0x0;
      OMANDMDCGMF__MLCFOLPGDBO
                (&local_88,MMEECJEKHGB,
                 (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)local_58.fields._current,
                 (System_Collections_Generic_HashSet_char__o *)0x0,
                 (System_Collections_Generic_HashSet_char__o *)0x0,
                 (System_Collections_Generic_HashSet_char__o *)0x0,in_x5);
      local_70[0].z = local_88.fields.m_Center.fields.z;
      local_70[1].x = local_88.fields.m_Extents.fields.x;
      local_70[0].x = local_88.fields.m_Center.fields.x;
      local_70[0].y = local_88.fields.m_Center.fields.y;
      local_70[1].y = local_88.fields.m_Extents.fields.y;
      local_70[1].z = local_88.fields.m_Extents.fields.z;
      local_a0.fields.m_Center.fields.z = local_88.fields.m_Center.fields.z;
      local_a0.fields.m_Extents.fields.x = local_88.fields.m_Extents.fields.x;
      local_a0.fields.m_Center.fields.x = local_88.fields.m_Center.fields.x;
      local_a0.fields.m_Center.fields.y = local_88.fields.m_Center.fields.y;
      local_a0.fields.m_Extents.fields.y = local_88.fields.m_Extents.fields.y;
      local_a0.fields.m_Extents.fields.z = local_88.fields.m_Extents.fields.z;
      PCLFHFELAII = OMANDMDCGMF__IMPBHOBAEEI(NJLNDHBHPMK,&local_a0,method_00);
      OMANDMDCGMF__ILJGHDGPDEP
                (MMEECJEKHGB,(Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)NFNNIOEGDBG,CHOCOAGNFDD,
                 PCLFHFELAII,method_00);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_58,
               Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__);
    fVar2 = CHOCOAGNFDD;
  }
  return fVar2;
}

