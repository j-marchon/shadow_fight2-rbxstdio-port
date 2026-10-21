// OJHODFIGFMA$$JNPDHEDIOPF @ RVA 0x323FEFC

float OJHODFIGFMA__JNPDHEDIOPF
                (OJHODFIGFMA_o *__this,System_String_o *JHJCKAHONIO,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *__this_00;
  int index;
  float fVar3;
  
  if ((DAT_04567090 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_get_Item__);
                    /* try { // try from 0333ff44 to 03440097 has its CatchHandler @ 0333ff44
                       catch() { ... } // from try @ 0333ff44 with catch @ 0333ff44
                       catch() { ... } // from try @ 033400c0 with catch @ 0333ff44
                       catch() { ... } // from try @ 03340124 with catch @ 0333ff44
                       catch() { ... } // from try @ 03340148 with catch @ 0333ff44
                       catch() { ... } // from try @ 03340430 with catch @ 0333ff44
                       catch() { ... } // from try @ 033404bc with catch @ 0333ff44
                       catch() { ... } // from try @ 033404d0 with catch @ 0333ff44
                       catch() { ... } // from try @ 03340504 with catch @ 0333ff44 */
    DAT_04567090 = 1;
  }
  if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045669da == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
    DAT_045669da = '\x01';
  }
  if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields->CAGNGFDHPGF;
  if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
    if (0 < (__this_00->fields)._size) {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_get_Item__
                           );
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03340020;
        bVar1 = System_String__op_Equality
                          ((System_String_o *)pIVar2[1].klass,JHJCKAHONIO,(MethodInfo *)0x0);
        if (bVar1) {
          return *(float *)&pIVar2[1].monitor;
        }
        index = index + 1;
      } while (index < (__this_00->fields)._size);
    }
    fVar3 = PCOEHCPGBBG__OFFODGKLGOP(JHJCKAHONIO,0.0,(MethodInfo *)0x0);
    return fVar3;
  }
LAB_03340020:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

