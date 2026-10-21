// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$AEDCNNNBBPJ @ RVA 0x34562C4

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__AEDCNNNBBPJ
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
               JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *PBDIPLHDHHD,float KAFHJNFHFHL,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this_00;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *__this_01;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_Collections_Generic_List_DDMHMABAHHD__o *GHAAKPDHIJJ;
  int index;
  System_String_o *CNIELFLIKJB;
  float fVar2;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  
                    /* try { // try from 035562e8 to 036562f3 has its CatchHandler @ 03558098 */
  if ((DAT_045682d0 & 1) == 0) {
                    /* try { // try from 035562f8 to 036562ff has its CatchHandler @ 03558094 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                );
                    /* try { // try from 03556310 to 03656317 has its CatchHandler @ 03558090 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Current__
                );
                    /* try { // try from 0355631c to 03656323 has its CatchHandler @ 0355808c */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
                    /* try { // try from 03556334 to 0365633b has its CatchHandler @ 03558088 */
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
                    /* try { // try from 0355633c to 0365634b has its CatchHandler @ 03558084 */
    DAT_045682d0 = 1;
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  if ((PBDIPLHDHHD != (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) &&
     (GHAAKPDHIJJ = (PBDIPLHDHHD->fields).GFBNJPMOEKD,
     GHAAKPDHIJJ != (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0)) {
                    /* try { // try from 03556358 to 0365637b has its CatchHandler @ 03558198 */
    if (0 < (GHAAKPDHIJJ->fields)._size) {
      index = 0;
      do {
        method_00 = Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__;
        __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,index,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
        if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0) goto LAB_03556438;
        CNIELFLIKJB = (System_String_o *)(__this_00->fields).super.super.super.super.m_CachedPtr;
        fVar2 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__HMECCPGJAHJ
                          (__this_00,GHAAKPDHIJJ,
                           *(float *)((long)&(__this_00->fields).super.m_CancellationTokenSource + 4
                                     ),method_00);
                    /* try { // try from 035563a0 to 036563bb has its CatchHandler @ 035581b4 */
        Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__MOONCCCJECI
                  (__this,(DDMHMABAHHD_o *)__this_00,CNIELFLIKJB,fVar2 * KAFHJNFHFHL,in_x3);
        index = index + 1;
      } while (index < (GHAAKPDHIJJ->fields)._size);
    }
    __this_01 = (PBDIPLHDHHD->fields).BAPMMGFEIDM;
    if (__this_01 != (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0)
    {
                    /* try { // try from 035563c8 to 036563cf has its CatchHandler @ 03558080 */
                    /* try { // try from 035563e0 to 036563e7 has its CatchHandler @ 03557f48 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                );
                    /* try { // try from 035563ec to 036563f3 has its CatchHandler @ 03557f44 */
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_68,
                                Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                               ), bVar1) {
                    /* try { // try from 03556404 to 0365640b has its CatchHandler @ 03557f40 */
        Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__FillContainerItemChances
                  (__this,(JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)local_68.fields._current,
                   PBDIPLHDHHD,KAFHJNFHFHL,in_x3);
                    /* try { // try from 0355640c to 0365641b has its CatchHandler @ 03557f3c */
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_68,
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                );
                    /* try { // try from 03556428 to 0365644b has its CatchHandler @ 03558194 */
      return;
    }
  }
LAB_03556438:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

