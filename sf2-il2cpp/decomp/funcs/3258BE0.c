// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$KOHLIOECEFA @ RVA 0x3258BE0

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__KOHLIOECEFA
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  UnityEngine_Vector2_o UVar3;
  
                    /* catch() { ... } // from try @ 03358a90 with catch @ 03358be0 */
                    /* try { // try from 03358be4 to 03458bf7 has its CatchHandler @ 03358c00 */
                    /* catch() { ... } // from try @ 03358ba8 with catch @ 03358bec */
                    /* catch() { ... } // from try @ 0335890c with catch @ 03358bf0 */
                    /* try { // try from 03358bf8 to 03458c03 has its CatchHandler @ 0335849c */
                    /* catch() { ... } // from try @ 03358be4 with catch @ 03358c00 */
  if ((DAT_0456717d & 1) == 0) {
                    /* catch() { ... } // from try @ 03358c68 with catch @ 03358c0c
                       catch() { ... } // from try @ 03358ca4 with catch @ 03358c0c
                       catch() { ... } // from try @ 03358da4 with catch @ 03358c0c */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456717d = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03358c1c to 03458c23 has its CatchHandler @ 03358c74 */
  pUVar2 = (__this->fields)._scroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03358c2c to 03458c3f has its CatchHandler @ 03358c6c */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pUVar2 = (__this->fields)._scroll;
    if (pUVar2 == (UnityEngine_UI_ScrollRect_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar3 = UnityEngine_UI_ScrollRect__get_normalizedPosition(pUVar2,(MethodInfo *)0x0);
                    /* try { // try from 03358c54 to 03458c5f has its CatchHandler @ 03358c68 */
    if (1.0 - CJNHFNHJHPE != UVar3.fields.y) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03358c1c with catch @ 03358c74
                        */
      Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__LBBMPJKOINK(__this,1.0 - CJNHFNHJHPE,method_00);
      return;
    }
  }
                    /* try { // try from 03358c64 to 03458c67 has its CatchHandler @ 03358c70 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03358c54 with catch @ 03358c68
                       try { // try from 03358c68 to 03458c8b has its CatchHandler @ 03358c0c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03358c2c with catch @ 03358c6c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03358c64 with catch @ 03358c70
                        */
  return;
}

