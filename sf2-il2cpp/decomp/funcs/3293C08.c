// Nekki.SF2.GUI.Fight.StylePanel$$ResetStyle @ RVA 0x3293C08

void Nekki_SF2_GUI_Fight_StylePanel__ResetStyle
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
                    /* try { // try from 03393c1c to 03493c23 has its CatchHandler @ 03393d30 */
  if ((DAT_0456734b & 1) == 0) {
                    /* try { // try from 03393c28 to 03493c33 has its CatchHandler @ 03393d2c */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456734b = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03393c3c to 03493c47 has its CatchHandler @ 03393d38 */
  uVar1 = (__this->fields).HOBABLEHLDI;
                    /* try { // try from 03393c48 to 03493c53 has its CatchHandler @ 03393d34 */
  (__this->fields).HOBABLEHLDI = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  (__this->fields).OOADLOIGCHI = 0;
  Nekki_SF2_GUI_Fight_StylePanel__UpdateStyleLabel(__this,method);
  Nekki_SF2_GUI_Fight_StylePanel__SetAllStyleValue(__this,0.0,method_00);
  Nekki_SF2_GUI_Fight_StylePanel__ClearStyleIncrease(__this,method_01);
  pNVar3 = (__this->fields).LLCBBBFOKMP;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar3 = (__this->fields).LLCBBBFOKMP;
                    /* try { // try from 03393c90 to 03493ca3 has its CatchHandler @ 03393d20 */
    if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03393cb4 to 03493cbb has its CatchHandler @ 03393d24 */
                    /* try { // try from 03393cbc to 03493d0b has its CatchHandler @ 03393af0 */
  return;
}

