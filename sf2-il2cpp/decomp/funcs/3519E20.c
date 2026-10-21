// Nekki.SF2.GUI.Fight.IconAndText$$SetText @ RVA 0x3519E20

void Nekki_SF2_GUI_Fight_IconAndText__SetText
               (Nekki_SF2_GUI_Fight_IconAndText_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAliasLE_o *pNVar2;
  
                    /* try { // try from 03619e28 to 03719e2b has its CatchHandler @ 03619e34 */
                    /* try { // try from 03619e2c to 03719e4f has its CatchHandler @ 03619d28 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03619de0 with catch @ 03619e30
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03619e28 with catch @ 03619e34
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03619dc0 with catch @ 03619e38
                        */
  if ((DAT_0456896c & 1) == 0) {
                    /* try { // try from 03619e50 to 03719e53 has its CatchHandler @ 03619e80 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 03619e54 to 03719e87 has its CatchHandler @ 03619d28 */
    DAT_0456896c = 1;
  }
  pNVar2 = (__this->fields).text;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1;
                    /* catch() { ... } // from try @ 03619e50 with catch @ 03619e80 */
  if (bVar1) {
    pNVar2 = (__this->fields).text;
                    /* try { // try from 03619e88 to 03719e8f has its CatchHandler @ 03619ea4 */
    if (pNVar2 == (Nekki_SF2_GUI_LabelAliasLE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03619e90 to 03719e9b has its CatchHandler @ 03619d28 */
    Nekki_SF2_GUI_LabelAliasLE__set_text(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
                    /* try { // try from 03619e9c to 03719ea3 has its CatchHandler @ 03619ea4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03619e88 with catch @ 03619ea4
                       catch(type#2 @ 00000000) { ... } // from try @ 03619e9c with catch @ 03619ea4
                        */
  Nekki_SF2_GUI_Fight_IconAndText__HMOMDLHAJJE(__this,method_00);
  return;
}

