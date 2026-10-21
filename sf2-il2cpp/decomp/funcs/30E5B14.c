// Nekki.SF2.Core.InputControllers.GamePadController$$Vibrate @ RVA 0x30E5B14

void Nekki_SF2_Core_InputControllers_GamePadController__Vibrate
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               InControl_InputDevice_o *DMEEIIKHKDH,GCAKLDNBADP_o OKBIKHHKOEN,MethodInfo *method)

{
  GCAKLDNBADP_o OKBIKHHKOEN_00;
  MethodInfo *method_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  GCAKLDNBADP_o __this_00;
  undefined8 local_60;
  MethodInfo *pMStack_58;
  
  method_00 = OKBIKHHKOEN.fields._8_8_;
  local_60 = OKBIKHHKOEN.fields._0_8_;
                    /* try { // try from 031e5b18 to 032e5b1f has its CatchHandler @ 031e5be4 */
  pMStack_58 = method_00;
  if ((DAT_045663db & 1) == 0) {
                    /* try { // try from 031e5b54 to 032e5b7f has its CatchHandler @ 031e5be8 */
    FUN_01bab630(&ENOCEOMBHCH_TypeInfo);
    DAT_045663db = 1;
  }
  fVar1 = MEFNOMDAJBF__JBBGLBPOKOI((MethodInfo *)0x0);
  if (DAT_045602fa == '\0') {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
                    /* try { // try from 031e5b84 to 032e5b8b has its CatchHandler @ 031e5be0 */
    DAT_045602fa = '\x01';
  }
                    /* try { // try from 031e5b8c to 032e5bd3 has its CatchHandler @ 031e5958 */
  fVar3 = ABS(fVar1);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar4 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  fVar2 = fVar3 * 1e-06;
  if (fVar3 * 1e-06 <= fVar4) {
    fVar2 = fVar4;
  }
  if (fVar2 <= ABS(0.0 - fVar1)) {
                    /* try { // try from 031e5bd4 to 032e5bdb has its CatchHandler @ 031e5bf4 */
                    /* try { // try from 031e5bdc to 032e5c17 has its CatchHandler @ 031e5958 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5b84 with catch @ 031e5be0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5b18 with catch @ 031e5be4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5b54 with catch @ 031e5be8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5ae8 with catch @ 031e5bec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5aac with catch @ 031e5bf0
                        */
    fVar1 = MEFNOMDAJBF__JBBGLBPOKOI((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5bd4 with catch @ 031e5bf4
                        */
    __this_00.fields.FJMNKKECPPO = 0.0;
    __this_00.fields.LBKAKBJBNCG = 0;
    __this_00.fields._0_8_ = &local_60;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5a38 with catch @ 031e5bf8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5a7c with catch @ 031e5bfc
                        */
    GCAKLDNBADP___ctor(__this_00,OKBIKHHKOEN.fields.LFJGFLNMBMC,OKBIKHHKOEN.fields.FJMNKKECPPO,
                       fVar1 * OKBIKHHKOEN.fields.GPCGAHADKAC,0,method_00);
    OKBIKHHKOEN_00.fields._8_8_ = pMStack_58;
    OKBIKHHKOEN_00.fields.LFJGFLNMBMC = (float)(undefined4)local_60;
    OKBIKHHKOEN_00.fields.GPCGAHADKAC = (float)local_60._4_4_;
                    /* try { // try from 031e5c18 to 032e5c1b has its CatchHandler @ 031e5c48 */
                    /* try { // try from 031e5c1c to 032e5c4f has its CatchHandler @ 031e5958 */
    if ((ENOCEOMBHCH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ENOCEOMBHCH__EEGCCJKIHKM(__this,DMEEIIKHKDH,OKBIKHHKOEN_00,(MethodInfo *)0x0);
  }
                    /* catch() { ... } // from try @ 031e5c18 with catch @ 031e5c48 */
                    /* try { // try from 031e5c50 to 032e5c57 has its CatchHandler @ 031e5c6c */
  return;
}

