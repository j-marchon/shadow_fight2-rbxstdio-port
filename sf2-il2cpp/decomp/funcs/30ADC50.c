// Nekki.SF2.GUI.ProgressButton$$PNJAKFADLMH @ RVA 0x30ADC50

void Nekki_SF2_GUI_ProgressButton__PNJAKFADLMH
               (Nekki_SF2_GUI_ProgressButton_o *__this,float MGMCFABFCIF,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  UnityEngine_UI_Image_o *pUVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_045661bd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045661bd = 1;
    method = extraout_x1;
  }
  fVar4 = (__this->fields).FFAANJKJBFJ;
  fVar5 = (__this->fields).CCIKLAFHFAH;
  pUVar3 = (__this->fields)._picComplete;
  if (MGMCFABFCIF <= fVar4) {
    fVar4 = MGMCFABFCIF;
  }
  if (MGMCFABFCIF < fVar5) {
    fVar4 = fVar5;
  }
  (__this->fields).CPCHMIPKLCO = fVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    fVar4 = (__this->fields).CPCHMIPKLCO;
    if (fVar4 <= (__this->fields).CCIKLAFHFAH) {
      pUVar3 = (__this->fields)._picComplete;
      if ((pUVar3 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031addac;
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      fVar4 = (__this->fields).CPCHMIPKLCO;
    }
    if ((__this->fields).FFAANJKJBFJ <= fVar4) {
      pUVar3 = (__this->fields)._picComplete;
      if ((pUVar3 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031addac;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    }
  }
  pUVar3 = (__this->fields)._picCircleProgressBar;
                    /* try { // try from 031add38 to 032add3f has its CatchHandler @ 031adfb0 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 031add4c to 032add53 has its CatchHandler @ 031adfa8 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if (bVar1) {
    pUVar3 = (__this->fields)._picCircleProgressBar;
    if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) {
LAB_031addac:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031addac to 032addaf has its CatchHandler @ 031adf74 */
      FUN_01bab8c8();
    }
    UnityEngine_UI_Image__set_fillAmount
              (pUVar3,(__this->fields).CPCHMIPKLCO / (__this->fields).FFAANJKJBFJ,(MethodInfo *)0x0)
    ;
    method_00 = extraout_x1_01;
  }
                    /* try { // try from 031add74 to 032add7b has its CatchHandler @ 031adfa4 */
                    /* try { // try from 031add7c to 032add83 has its CatchHandler @ 031adfa0 */
  if ((__this->fields).CPCHMIPKLCO < 100.0) {
                    /* try { // try from 031add90 to 032add97 has its CatchHandler @ 031adf84 */
    Nekki_SF2_GUI_ProgressButton__MJNHMBGHPFP(__this,method_00);
    return;
  }
  Nekki_SF2_GUI_ProgressButton__AAMAKOBPOBO(__this,method_00);
  return;
}

