// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$POEHCBAHPED @ RVA 0x3456FF4

float Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__POEHCBAHPED
                (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
                JMDPBFOCHHP_FNILDHLJBBJ_o *GDGBNEPJEOO,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o **ppNVar2;
  JMDPBFOCHHP_o *pJVar3;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_Fields *pNVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
                    /* try { // try from 03556ffc to 03657003 has its CatchHandler @ 03557d68 */
                    /* try { // try from 03557008 to 0365700f has its CatchHandler @ 03557d64 */
                    /* try { // try from 03557020 to 03657027 has its CatchHandler @ 03557d60 */
  if ((DAT_045682d3 & 1) == 0) {
                    /* try { // try from 03557028 to 03657037 has its CatchHandler @ 03557d5c */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                );
                    /* try { // try from 0355703c to 03657043 has its CatchHandler @ 03558134 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Current__
                );
                    /* try { // try from 0355704c to 03657067 has its CatchHandler @ 03558130 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                );
                    /* try { // try from 03557070 to 03657077 has its CatchHandler @ 0355812c */
    DAT_045682d3 = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
                    /* try { // try from 03557080 to 03657087 has its CatchHandler @ 03557d58 */
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_TypeInfo
                                );
                    /* try { // try from 03557090 to 03657097 has its CatchHandler @ 03557c90 */
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_o *)0x0) {
    ppNVar2 = &(__this_00->fields).__4__this;
    *ppNVar2 = __this;
                    /* try { // try from 035570a8 to 036570af has its CatchHandler @ 03557c8c */
    thunk_FUN_01c20e04(ppNVar2,__this);
                    /* try { // try from 035570b4 to 036570bb has its CatchHandler @ 03557c88 */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (pJVar3 != (JMDPBFOCHHP_o *)0x0) {
                    /* try { // try from 035570cc to 036570d3 has its CatchHandler @ 03557c84 */
      pNVar4 = &__this_00->fields;
                    /* try { // try from 035570d4 to 036570f7 has its CatchHandler @ 03557ce8 */
      pNVar4->raidItems = (pJVar3->fields).OFMMMBIIDAE;
      thunk_FUN_01c20e04(pNVar4);
      if (pNVar4->raidItems == (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0) {
        fVar6 = 0.0;
      }
      else {
        if (GDGBNEPJEOO == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) goto LAB_035571f4;
                    /* try { // try from 035570f8 to 036570ff has its CatchHandler @ 03557d54 */
        fVar5 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL__JHIHBFFCHHP
                          (__this_00,(GDGBNEPJEOO->fields).GFBNJPMOEKD,2,(MethodInfo *)0x0);
        fVar6 = 1.0;
                    /* try { // try from 0355710c to 03657117 has its CatchHandler @ 03557c80 */
        if (fVar5 != 1.0) {
          __this_01 = (GDGBNEPJEOO->fields).BAPMMGFEIDM;
          if (__this_01 ==
              (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0)
          goto LAB_035571f4;
                    /* try { // try from 0355711c to 03657123 has its CatchHandler @ 03557c7c */
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_58,(System_Collections_Generic_List_object__o *)__this_01,
                     Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                    );
                    /* try { // try from 03557134 to 0365713b has its CatchHandler @ 03557c78 */
          fVar6 = 0.0;
                    /* try { // try from 03557140 to 03657147 has its CatchHandler @ 03557c74 */
          while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_58,
                                    Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                                   ), bVar1) {
                    /* try { // try from 03557158 to 0365715f has its CatchHandler @ 03557c70 */
                    /* try { // try from 03557160 to 0365716f has its CatchHandler @ 03557c6c */
            fVar7 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL__OBOLNPNGGBH
                              (__this_00,
                               (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)local_58.fields._current,
                               (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0,1.0,(MethodInfo *)0x0);
            if (fVar7 == 1.0) {
                    /* try { // try from 035571c0 to 036571c7 has its CatchHandler @ 03557cbc */
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                        );
              return 1.0;
            }
            fVar8 = fVar6 * (1.0 - fVar7);
                    /* try { // try from 03557174 to 0365717b has its CatchHandler @ 03557d50 */
            bVar1 = fVar6 != 0.0;
            fVar6 = 1.0 - fVar7;
            if (bVar1) {
              fVar6 = fVar8;
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_58,
                     Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                    );
                    /* try { // try from 0355719c to 036571bb has its CatchHandler @ 03557d4c */
          if (fVar6 != 0.0) {
            fVar6 = 1.0 - fVar6;
          }
          fVar6 = 1.0 - (1.0 - fVar5) * (1.0 - fVar6);
        }
      }
                    /* try { // try from 035571d8 to 036571df has its CatchHandler @ 03557cb8 */
                    /* try { // try from 035571e4 to 036571eb has its CatchHandler @ 03557cb4 */
      return fVar6;
    }
  }
LAB_035571f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

