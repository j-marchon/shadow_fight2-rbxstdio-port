// TypeDefIndex 1697
// Namespace: 
// public sealed class HAGMCGMIKNH : CELDGLHBCAM
// Fields:

// ===== public void .ctor()  [RVA 0x31D2F60]
// HAGMCGMIKNH$$.ctor @ RVA 0x31D2F60

void HAGMCGMIKNH___ctor(HAGMCGMIKNH_o *__this,MethodInfo *method)

{
  CELDGLHBCAM___ctor((CELDGLHBCAM_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void LLCONNGHGKD()  [RVA 0x31D3070]
// HAGMCGMIKNH$$LLCONNGHGKD @ RVA 0x31D3070

void HAGMCGMIKNH__LLCONNGHGKD(HAGMCGMIKNH_o *__this,MethodInfo *method)

{
  NLPJLHOEAOE_o *__this_00;
  EPFMFHDGMCE_o *__this_01;
  FGKGKDEJCOG_o *__this_02;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566cbe & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_EOHMFJFFFIN__);
                    /* try { // try from 032d30a0 to 033d30c3 has its CatchHandler @ 032d4060 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566cbe = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super._DGMNNLJEMIB_k__BackingField != false) {
    return;
  }
                    /* try { // try from 032d30d4 to 033d30df has its CatchHandler @ 032d408c */
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  MGNPHCAAEIO__PKNFJBEGCOK((MethodInfo *)0x0);
  if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 032d3104 to 033d310f has its CatchHandler @ 032d400c */
  ANFOHCGLHID__OKDOPGLEAFC((MethodInfo *)0x0);
  CEJLHKFNEDB__LHHONKDEIHC((MethodInfo *)0x0);
  CEJLHKFNEDB__NDIKMGDFKJD((MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032d312c to 033d3147 has its CatchHandler @ 032d4068 */
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
    NLPJLHOEAOE__FHFNBMFAPFJ(__this_00,(MethodInfo *)0x0);
    __this_01 = EPFMFHDGMCE__ICEPMHDMFLM((MethodInfo *)0x0);
    if (__this_01 != (EPFMFHDGMCE_o *)0x0) {
      EPFMFHDGMCE__IIAACPBHHOA(__this_01,(MethodInfo *)0x0);
      ANFOHCGLHID__LHFADAKGOIC((MethodInfo *)0x0);
      CEJLHKFNEDB__CGHDMDIPCOO((MethodInfo *)0x0);
      EHOFKBDKGBK<object,_object>__EOHMFJFFFIN
                (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_EOHMFJFFFIN__);
      if (DAT_04565e59 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 032d3190 to 033d3197 has its CatchHandler @ 032d4008 */
        DAT_04565e59 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
      if (__this_02 != (FGKGKDEJCOG_o *)0x0) {
        FGKGKDEJCOG__GAGOKIINCLC(__this_02,(MethodInfo *)0x0);
                    /* try { // try from 032d31c4 to 033d31cf has its CatchHandler @ 032d4138 */
        MGNPHCAAEIO__DJNLKDGCHIO((MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
                    /* try { // try from 032d31d8 to 033d31e3 has its CatchHandler @ 032d4134 */
        (__this->fields).super._DGMNNLJEMIB_k__BackingField = true;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

