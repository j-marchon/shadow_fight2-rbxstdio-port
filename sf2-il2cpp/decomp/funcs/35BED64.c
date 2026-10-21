// Nekki.SF2.GUI.Fight.ViewerFight$$RenderComboModel @ RVA 0x35BED64

void Nekki_SF2_GUI_Fight_ViewerFight__RenderComboModel
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar2;
  
                    /* try { // try from 036bed70 to 037bed73 has its CatchHandler @ 036bed7c */
                    /* try { // try from 036bed74 to 037bed97 has its CatchHandler @ 036bec8c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bed44 with catch @ 036bed78
                        */
  if ((DAT_04568f03 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bed70 with catch @ 036bed7c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bed1c with catch @ 036bed80
                        */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f03 = 1;
    method = extraout_x1;
  }
  if ((__this->fields)._BBIBLNIKJMG_k__BackingField != false) {
                    /* try { // try from 036bed98 to 037bed9b has its CatchHandler @ 036bedc4 */
                    /* try { // try from 036bed9c to 037bedd3 has its CatchHandler @ 036bec8c */
    pNVar2 = (__this->fields).leftModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
                    /* catch() { ... } // from try @ 036bed98 with catch @ 036bedc4 */
    if (bVar1) {
      pNVar2 = (__this->fields).leftModel;
      if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bee24;
                    /* try { // try from 036bedd4 to 037beddb has its CatchHandler @ 036bedf0 */
      Nekki_SF2_GUI_Fight_ScreenModel__RenderComboModel(pNVar2,(MethodInfo *)0x0);
    }
                    /* try { // try from 036beddc to 037bede7 has its CatchHandler @ 036bec8c */
    pNVar2 = (__this->fields).rightModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036bede8 to 037bedef has its CatchHandler @ 036bedf0 */
      thunk_FUN_01ba7564();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036bedd4 with catch @ 036bedf0
                       catch(type#2 @ 00000000) { ... } // from try @ 036bede8 with catch @ 036bedf0
                        */
                    /* try { // try from 036bedf4 to 037bee7f has its CatchHandler @ 036bedf4
                       catch() { ... } // from try @ 036bedf4 with catch @ 036bedf4
                       catch() { ... } // from try @ 036beeac with catch @ 036bedf4
                       catch() { ... } // from try @ 036beed0 with catch @ 036bedf4
                       catch() { ... } // from try @ 036beef8 with catch @ 036bedf4
                       catch() { ... } // from try @ 036bef38 with catch @ 036bedf4 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields).rightModel;
      if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
        Nekki_SF2_GUI_Fight_ScreenModel__RenderComboModel(pNVar2,(MethodInfo *)0x0);
        return;
      }
LAB_036bee24:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

