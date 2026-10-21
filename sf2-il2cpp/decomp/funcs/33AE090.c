// Nekki.SF2.GUI.Dialogs.BaseDialog$$MMHCNDPCGGP @ RVA 0x33AE090

void Nekki_SF2_GUI_Dialogs_BaseDialog__MMHCNDPCGGP
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  
  if ((DAT_04567d2c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_5002);
    DAT_04567d2c = 1;
    method = extraout_x1;
  }
  ppUVar2 = &(__this->fields).FKAGEHHHMAB;
  pUVar3 = *ppUVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pUVar3 = Nekki_SF2_GUI_Dialogs_BaseDialog__JLBIECFKGPL(__this,StringLiteral_5002,method_00);
                    /* try { // try from 034ae128 to 035ae12f has its CatchHandler @ 034ae1a4 */
  (__this->fields).FKAGEHHHMAB = pUVar3;
                    /* try { // try from 034ae130 to 035ae133 has its CatchHandler @ 034ad8dc */
  thunk_FUN_01c20e04(ppUVar2,pUVar3);
                    /* try { // try from 034ae134 to 035ae137 has its CatchHandler @ 034ae180 */
  pUVar3 = (__this->fields).FKAGEHHHMAB;
                    /* try { // try from 034ae138 to 035ae13b has its CatchHandler @ 034ae17c */
                    /* try { // try from 034ae13c to 035ae13f has its CatchHandler @ 034ae170 */
                    /* try { // try from 034ae140 to 035ae143 has its CatchHandler @ 034ae16c */
                    /* try { // try from 034ae144 to 035ae147 has its CatchHandler @ 034ae168 */
  if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 034ae148 to 035ae14b has its CatchHandler @ 034ae154 */
                    /* try { // try from 034ae14c to 035ae1bb has its CatchHandler @ 034ad8dc */
                    /* catch() { ... } // from try @ 034ae148 with catch @ 034ae154 */
                    /* catch() { ... } // from try @ 034add5c with catch @ 034ae158 */
    UnityEngine_Transform__SetAsFirstSibling(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034addbc with catch @ 034ae15c */
  FUN_01bab8c8();
}

