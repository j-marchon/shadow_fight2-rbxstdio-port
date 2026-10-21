// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyDialog$$HOHPCNNNAHG @ RVA 0x32BB9D4

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__HOHPCNNNAHG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_o *__this,BPBGAAHBFKH_o *IHBNELGLLEB,
               MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *__this_00;
  BDMABHJEEGD_o *JOBNGBCPEGO;
  MethodInfo *in_x3;
  int index;
  
                    /* try { // try from 033bb9e8 to 034bb9ef has its CatchHandler @ 033bbae4 */
  if ((DAT_04567496 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 033bba04 to 034bba0b has its CatchHandler @ 033bbabc */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__);
                    /* try { // try from 033bba1c to 034bba23 has its CatchHandler @ 033bbad8 */
    FUN_01bab630(&StringLiteral_10835);
    DAT_04567496 = 1;
  }
  if (IHBNELGLLEB != (BPBGAAHBFKH_o *)0x0) {
    __this_00 = (IHBNELGLLEB->fields).IGPJEDLPAGI;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) {
                    /* try { // try from 033bba38 to 034bba3f has its CatchHandler @ 033bbad0 */
      iVar1 = (__this_00->fields).count;
                    /* try { // try from 033bba40 to 034bba8b has its CatchHandler @ 033bb8bc */
      if (iVar1 < 1) {
                    /* try { // try from 033bba8c to 034bba8f has its CatchHandler @ 033bbaec */
                    /* try { // try from 033bba90 to 034bba93 has its CatchHandler @ 033bbae0 */
        return;
      }
      index = 0;
      do {
        JOBNGBCPEGO = (BDMABHJEEGD_o *)
                      Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                                 Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__
                                );
        Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__INMMEJPGBPO(__this,index,JOBNGBCPEGO,in_x3);
        if (iVar1 + -1 == index) {
          return;
        }
        __this_00 = (IHBNELGLLEB->fields).IGPJEDLPAGI;
        index = index + 1;
      } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 033bba94 to 034bba97 has its CatchHandler @ 033bbadc */
                    /* try { // try from 033bba98 to 034bba9b has its CatchHandler @ 033bbad4 */
                    /* try { // try from 033bba9c to 034bba9f has its CatchHandler @ 033bbacc */
                    /* try { // try from 033bbaa0 to 034bbaa3 has its CatchHandler @ 033bbac8 */
                    /* try { // try from 033bbaa4 to 034bbaa7 has its CatchHandler @ 033bbac4 */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033bbaa8 to 034bbaab has its CatchHandler @ 033bbab8 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033bbaac to 034bbaaf has its CatchHandler @ 033bbab4 */
                    /* try { // try from 033bbab0 to 034bbb07 has its CatchHandler @ 033bb8bc */
                    /* catch() { ... } // from try @ 033bbaac with catch @ 033bbab4 */
                    /* catch() { ... } // from try @ 033bbaa8 with catch @ 033bbab8 */
                    /* catch() { ... } // from try @ 033bba04 with catch @ 033bbabc */
                    /* catch() { ... } // from try @ 033bb9d0 with catch @ 033bbac0 */
                    /* catch() { ... } // from try @ 033bbaa4 with catch @ 033bbac4 */
                    /* catch() { ... } // from try @ 033bbaa0 with catch @ 033bbac8 */
  UnityEngine_Debug__LogError(StringLiteral_10835,(MethodInfo *)0x0);
  return;
}

