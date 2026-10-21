// Nekki.SF2.GUI.Dialogs.StrangerDialog$$KAJLGLEKLCE @ RVA 0x317A020

void Nekki_SF2_GUI_Dialogs_StrangerDialog__KAJLGLEKLCE
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ProgressBar_o *pPVar3;
  System_String_array *pSVar4;
  uint uVar5;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *__this_01;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  uint uVar6;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566984 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                );
                    /* try { // try from 0327a06c to 0337a15b has its CatchHandler @ 03279bc8 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_get_Item__);
    DAT_04566984 = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (0.0 <= (__this->fields).JMLOHCGHBIJ) {
    if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (DAT_045669da == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
      DAT_045669da = '\x01';
      method = extraout_x1_01;
    }
    if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo,method);
    }
    __this_01 = Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields->CAGNGFDHPGF;
    if (__this_01 != (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,0,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_get_Item__
                         );
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__)
      ;
      uVar6 = 0;
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      uVar5 = 0;
                    /* try { // try from 0327a15c to 0337a15f has its CatchHandler @ 0327a190 */
                    /* try { // try from 0327a160 to 0337a163 has its CatchHandler @ 0327a18c */
                    /* try { // try from 0327a164 to 0337a16b has its CatchHandler @ 0327a19c */
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_50,
                                Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                               ), bVar1) {
                    /* try { // try from 0327a16c to 0337a16f has its CatchHandler @ 03279bc8 */
                    /* try { // try from 0327a170 to 0337a173 has its CatchHandler @ 0327a17c */
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 0327a174 to 0337a1bb has its CatchHandler @ 03279bc8 */
                    /* catch() { ... } // from try @ 0327a170 with catch @ 0327a17c */
                    /* catch() { ... } // from try @ 03279fcc with catch @ 0327a180 */
        if (*(float *)&local_50.fields._current[1].monitor < (__this->fields).JMLOHCGHBIJ) {
                    /* catch() { ... } // from try @ 03279fa8 with catch @ 0327a184 */
          if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* catch() { ... } // from try @ 03279f10 with catch @ 0327a188 */
                    /* catch() { ... } // from try @ 0327a160 with catch @ 0327a18c */
                    /* catch() { ... } // from try @ 0327a15c with catch @ 0327a190 */
          if (*(float *)&pIVar2[1].monitor < *(float *)&local_50.fields._current[1].monitor) {
                    /* catch() { ... } // from try @ 03279f64 with catch @ 0327a194 */
                    /* catch() { ... } // from try @ 03279e14 with catch @ 0327a198 */
            pIVar2 = local_50.fields._current;
            uVar6 = uVar5;
          }
        }
                    /* catch() { ... } // from try @ 0327a164 with catch @ 0327a19c */
        uVar5 = uVar5 + 1;
                    /* catch() { ... } // from try @ 03279e78 with catch @ 0327a1a0 */
      }
                    /* catch() { ... } // from try @ 0327a010 with catch @ 0327a1a4 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                );
      pPVar3 = (__this->fields)._difficult;
                    /* try { // try from 0327a1bc to 0337a1bf has its CatchHandler @ 0327a1d4 */
      if (pPVar3 != (ProgressBar_o *)0x0) {
        __this_02 = (pPVar3->fields).Stripe;
                    /* catch() { ... } // from try @ 0327a1bc with catch @ 0327a1d4 */
        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar4 = BHEDGAKGKPO_TypeInfo->static_fields->IAJCJOECCFO;
        if (pSVar4 != (System_String_array *)0x0) {
          if ((uint)pSVar4->max_length <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          if (__this_02 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (__this_02,pSVar4->m_Items[(int)uVar6],(MethodInfo *)0x0);
            if (pIVar2 == (Il2CppObject *)0x0) {
                    /* try { // try from 0327a248 to 0337a24f has its CatchHandler @ 0327a250 */
                    /* catch() { ... } // from try @ 0327a214 with catch @ 0327a250
                       catch() { ... } // from try @ 0327a248 with catch @ 0327a250 */
              return;
            }
                    /* try { // try from 0327a214 to 0337a23b has its CatchHandler @ 0327a250 */
            pPVar3 = (__this->fields)._difficult;
            if (pPVar3 != (ProgressBar_o *)0x0) {
              (*(pPVar3->klass->vtable)._7_set_Value.methodPtr)
                        (0x42c80000,pPVar3,(pPVar3->klass->vtable)._7_set_Value.method);
              __this_00 = (__this->fields)._difficultLabel;
              if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0327a23c to 0337a247 has its CatchHandler @ 03279bc8 */
                Nekki_SF2_GUI_LabelAlias__set_Alias
                          (__this_00,(System_String_o *)pIVar2[1].klass,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

