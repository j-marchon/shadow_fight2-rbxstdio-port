// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$FKILEAIPNCP @ RVA 0x330C270

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__FKILEAIPNCP
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  Il2CppObject *extraout_x1;
  Nekki_SF2_GUI_Menu_MenuAdvertisingButton_StaticFields *pNVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_04567786 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MenuAdvertisingButton_TypeInfo);
    DAT_04567786 = 1;
    IMMNELPBGIF = extraout_x1;
  }
                    /* try { // try from 0340c2a4 to 0350c2a7 has its CatchHandler @ 0340c2ec */
                    /* try { // try from 0340c2a8 to 0350c2ab has its CatchHandler @ 0340c2e8 */
  pNVar2 = (__this->fields)._buttonIcon;
                    /* try { // try from 0340c2ac to 0350c2af has its CatchHandler @ 0340c2e4 */
                    /* try { // try from 0340c2b0 to 0350c2b3 has its CatchHandler @ 0340c2cc */
  if ((Nekki_SF2_GUI_Menu_MenuAdvertisingButton_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0340c2b4 to 0350c327 has its CatchHandler @ 0340bea0 */
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Menu_MenuAdvertisingButton_TypeInfo,IMMNELPBGIF);
                    /* catch() { ... } // from try @ 0340c134 with catch @ 0340c2b8 */
  }
                    /* catch() { ... } // from try @ 0340c05c with catch @ 0340c2bc */
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* catch() { ... } // from try @ 0340c068 with catch @ 0340c2c0 */
    pNVar1 = Nekki_SF2_GUI_Menu_MenuAdvertisingButton_TypeInfo->static_fields;
                    /* catch() { ... } // from try @ 0340c198 with catch @ 0340c2c4 */
                    /* catch() { ... } // from try @ 0340c1e8 with catch @ 0340c2c8 */
                    /* catch() { ... } // from try @ 0340c2b0 with catch @ 0340c2cc */
                    /* catch() { ... } // from try @ 0340c1a0 with catch @ 0340c2d0 */
                    /* catch() { ... } // from try @ 0340c188 with catch @ 0340c2d4 */
                    /* catch() { ... } // from try @ 0340c10c with catch @ 0340c2d8 */
                    /* catch() { ... } // from try @ 0340c164 with catch @ 0340c2dc */
                    /* catch() { ... } // from try @ 0340c0c8 with catch @ 0340c2e0 */
                    /* WARNING: Could not recover jumptable at 0x0340c2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 0340c2ac with catch @ 0340c2e4 */
    (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
              ((pNVar1->ODHANEOKIOL).fields.r,(pNVar1->ODHANEOKIOL).fields.g,
               (pNVar1->ODHANEOKIOL).fields.b,(pNVar1->ODHANEOKIOL).fields.a,pNVar2,
               (pNVar2->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0340c2a8 with catch @ 0340c2e8 */
  FUN_01bab8c8();
}

