// Nekki.SF2.GUI.ProgressButton$$MJNHMBGHPFP @ RVA 0x30ADEE4

void Nekki_SF2_GUI_ProgressButton__MJNHMBGHPFP
               (Nekki_SF2_GUI_ProgressButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Image_o *pUVar2;
  
                    /* try { // try from 031adee4 to 032adefb has its CatchHandler @ 031adf90 */
                    /* try { // try from 031adefc to 032adf03 has its CatchHandler @ 031adf78 */
  if ((DAT_045661bc & 1) == 0) {
                    /* try { // try from 031adf08 to 032adf27 has its CatchHandler @ 031adf68 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045661bc = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_ProgressButton__IGFAAFAFHAE(__this,method);
  pUVar2 = (__this->fields)._picCompleteEffect;
                    /* try { // try from 031adf28 to 032adf4f has its CatchHandler @ 031adf5c */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._picCompleteEffect;
                    /* try { // try from 031adf54 to 032adf57 has its CatchHandler @ 031adfac */
    if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 031adf58 to 032adfc7 has its CatchHandler @ 031adbc8 */
                    /* catch() { ... } // from try @ 031adf28 with catch @ 031adf5c */
                    /* catch() { ... } // from try @ 031aded4 with catch @ 031adf60 */
                    /* catch() { ... } // from try @ 031ade80 with catch @ 031adf64 */
                    /* catch() { ... } // from try @ 031adf08 with catch @ 031adf68 */
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031adefc with catch @ 031adf78 */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 031adeb4 with catch @ 031adf6c */
                    /* catch() { ... } // from try @ 031adea0 with catch @ 031adf70 */
                    /* catch() { ... } // from try @ 031addac with catch @ 031adf74 */
  return;
}

