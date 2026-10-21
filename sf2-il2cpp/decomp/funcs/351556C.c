// Nekki.SF2.GUI.Common.Hints.HintList$$SetHintGroupHints @ RVA 0x351556C

void Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupHints
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t AEIKGKKKFMM,
               System_Collections_Generic_List_MIBHAJBEMIK__o *LMAPGNIDHFE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this_00;
  System_Collections_Generic_List_T__o *__this_01;
  MethodInfo *method_00;
  
                    /* catch() { ... } // from try @ 03615560 with catch @ 0361558c */
  method_00 = (MethodInfo *)LMAPGNIDHFE;
  if ((DAT_04568920 & 1) == 0) {
                    /* try { // try from 0361559c to 037155a3 has its CatchHandler @ 036155b8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_AddRange__);
                    /* try { // try from 036155a4 to 037155af has its CatchHandler @ 03615234 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Clear__);
                    /* try { // try from 036155b0 to 037155b7 has its CatchHandler @ 036155b8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0361559c with catch @ 036155b8
                       catch(type#2 @ 00000000) { ... } // from try @ 036155b0 with catch @ 036155b8
                        */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568920 = 1;
  }
  __this_00 = Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByID(__this,AEIKGKKKFMM,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    return;
  }
                    /* try { // try from 03615614 to 037157a3 has its CatchHandler @ 03615614
                       catch() { ... } // from try @ 03615614 with catch @ 03615614
                       catch() { ... } // from try @ 03615870 with catch @ 03615614
                       catch() { ... } // from try @ 036158a0 with catch @ 03615614
                       catch() { ... } // from try @ 036158ec with catch @ 03615614
                       catch() { ... } // from try @ 03615920 with catch @ 03615614
                       catch() { ... } // from try @ 0361596c with catch @ 03615614
                       catch() { ... } // from try @ 036159a4 with catch @ 03615614 */
  if ((__this_00 != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) &&
     (__this_01 = (System_Collections_Generic_List_T__o *)(__this_00->fields)._DefaultHintIDs,
     __this_01 != (System_Collections_Generic_List_T__o *)0x0)) {
    (__this_01->fields)._size = 0;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    System_Collections_Generic_List<Int32Enum>__AddRange
              (__this_01,(System_Collections_Generic_IEnumerable_T__o *)LMAPGNIDHFE,
               Method_System_Collections_Generic_List<MIBHAJBEMIK>_AddRange__);
    Nekki_SF2_GUI_Common_Hints_HintGroup__RefreshHintIDs(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

