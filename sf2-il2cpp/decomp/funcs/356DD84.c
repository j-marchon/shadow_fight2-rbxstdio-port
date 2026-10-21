// Nekki.SF2.GUI.Menu.MainMenu$$UpdateDojoDiscipleButton @ RVA 0x356DD84

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Menu_MainMenu__UpdateDojoDiscipleButton
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 0366dd98 to 0376dd9f has its CatchHandler @ 03672e34 */
  if ((DAT_04568c3a & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0366ddac to 0376ddb3 has its CatchHandler @ 03672e30 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
                    /* try { // try from 0366ddc4 to 0376ddcb has its CatchHandler @ 03672e2c */
                    /* try { // try from 0366ddcc to 0376ddf7 has its CatchHandler @ 03673194 */
    FUN_01bab630(&StringLiteral_8969);
    FUN_01bab630(&StringLiteral_8970);
    DAT_04568c3a = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField == false) {
    pNVar3 = (__this->fields).btnSettings;
                    /* try { // try from 0366ddf8 to 0376ddfb has its CatchHandler @ 036731e8 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366de04 to 0376de13 has its CatchHandler @ 03672e28 */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0366de18 to 0376de1f has its CatchHandler @ 036731e4 */
    if (bVar2) {
      pNVar3 = (__this->fields).btnSettings;
      if (pNVar3 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366de2c to 0376de37 has its CatchHandler @ 03672e24 */
        __this_01 = (Nekki_SF2_GUI_ResolutionImage_o *)
                    (pNVar3->fields).super.super.super.super.m_TargetGraphic;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
                    /* try { // try from 0366de50 to 0376de5f has its CatchHandler @ 03672e20 */
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          bVar1 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
          if ((__this_01->klass->_2).naturalAligment < bVar1) {
            __this_01 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
          }
          else {
                    /* try { // try from 0366deb8 to 0376debf has its CatchHandler @ 03673434 */
            if ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo) {
              __this_01 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
            }
          }
        }
                    /* try { // try from 0366decc to 0376ded3 has its CatchHandler @ 03673438 */
        puVar4 = &StringLiteral_8969;
        if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField !=
            (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 0366dedc to 0376dee3 has its CatchHandler @ 0367343c */
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 0366dee4 to 0376def7 has its CatchHandler @ 03673440 */
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
                    /* try { // try from 0366df04 to 0376df07 has its CatchHandler @ 03673444 */
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_0366df58;
                    /* try { // try from 0366df20 to 0376df23 has its CatchHandler @ 03673334 */
                    /* try { // try from 0366df24 to 0376df4b has its CatchHandler @ 0367352c */
          bVar2 = ACHLOMELAJE__KIDFHIOEAAP(__this_00,(MethodInfo *)0x0);
          puVar4 = (undefined8 *)&StringLiteral_8970;
          if (!bVar2) {
            puVar4 = &StringLiteral_8969;
          }
        }
        if (__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (__this_01,(System_String_o *)*puVar4,(MethodInfo *)0x0);
          return;
        }
      }
LAB_0366df58:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* try { // try from 0366dea8 to 0376deaf has its CatchHandler @ 03673430 */
  return;
}

