// Nekki.SF2.GUI.ProgressButton$$Init @ RVA 0x30ADDB8

void Nekki_SF2_GUI_ProgressButton__Init(Nekki_SF2_GUI_ProgressButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_UI_Image_o *pUVar3;
  
                    /* try { // try from 031addc0 to 032addcb has its CatchHandler @ 031adf9c */
                    /* try { // try from 031addd0 to 032adde7 has its CatchHandler @ 031adf98 */
  if ((DAT_045661bb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045661bb = 1;
    method = extraout_x1;
  }
  pUVar3 = (__this->fields)._picComplete;
                    /* try { // try from 031addf8 to 032addff has its CatchHandler @ 031adf88 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 031ade04 to 032ade1b has its CatchHandler @ 031adf7c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (__this->fields)._picComplete;
                    /* try { // try from 031ade20 to 032ade43 has its CatchHandler @ 031adf8c */
    if ((pUVar3 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031ade98;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields)._picCompleteEffect;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 031ade48 to 032ade57 has its CatchHandler @ 031adf94 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
                    /* try { // try from 031ade58 to 032ade7f has its CatchHandler @ 031adbc8 */
  if (bVar1) {
    pUVar3 = (__this->fields)._picCompleteEffect;
    if ((pUVar3 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) {
LAB_031ade98:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    method_00 = extraout_x1_01;
  }
                    /* try { // try from 031ade80 to 032ade97 has its CatchHandler @ 031adf64 */
  Nekki_SF2_GUI_ProgressButton__CCPABLFBFFA(__this,method_00);
  Nekki_SF2_GUI_ProgressButton__PNJAKFADLMH(__this,(__this->fields).CCIKLAFHFAH,method_01);
  return;
}

