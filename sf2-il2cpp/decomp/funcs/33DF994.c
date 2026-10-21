// Nekki.SF2.GUI.Pvp.PhaseWeapon$$JCDGMAEDFIF @ RVA 0x33DF994

void Nekki_SF2_GUI_Pvp_PhaseWeapon__JCDGMAEDFIF
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,int32_t BMPJIDHGCBN,
               System_String_o *LOAHEPDBFAO,int32_t CGLFKKMBHCN,MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  MethodInfo *method_00;
  SFButton_o *pSVar5;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar6;
  
                    /* try { // try from 034df9a0 to 035df9df has its CatchHandler @ 034e0184 */
  if ((DAT_04567e91 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    FUN_01bab630(&StringLiteral_12565);
    FUN_01bab630(&StringLiteral_12561);
    FUN_01bab630(&StringLiteral_12562);
                    /* try { // try from 034df9e8 to 035df9ef has its CatchHandler @ 034e015c */
    FUN_01bab630(&StringLiteral_12564);
    DAT_04567e91 = 1;
  }
  if (((CGLFKKMBHCN != 0x67) && (iVar2 = (__this->fields).AFEOEPFDNLI, iVar2 != -1)) &&
     (iVar2 == BMPJIDHGCBN)) {
    pSVar5 = (__this->fields)._LeftHint;
    if (pSVar5 != (SFButton_o *)0x0) {
      pNVar6 = (Nekki_SF2_GUI_ResolutionImage_o *)(pSVar5->fields).super.super.m_TargetGraphic;
      bVar4 = IEPJHKEBFEB__MMMKDKHNGLI(CGLFKKMBHCN,(MethodInfo *)0x0);
      if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 034dfa34 to 035dfa3b has its CatchHandler @ 034e0158 */
                    /* try { // try from 034dfa44 to 035dfa4b has its CatchHandler @ 034e0114 */
        bVar3 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
                    /* try { // try from 034dfa50 to 035dfa57 has its CatchHandler @ 034e010c */
        if ((bVar3 <= (pNVar6->klass->_2).naturalAligment) &&
           ((pNVar6->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
            (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)) {
                    /* try { // try from 034dfa74 to 035dfa7f has its CatchHandler @ 034e0158 */
          puVar1 = &StringLiteral_12561;
                    /* try { // try from 034dfa80 to 035dfccb has its CatchHandler @ 034df29c */
          if (!bVar4) {
            puVar1 = &StringLiteral_12564;
          }
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (pNVar6,(System_String_o *)*puVar1,(MethodInfo *)0x0);
          pSVar5 = (__this->fields)._RightHint;
          if (pSVar5 != (SFButton_o *)0x0) {
            pNVar6 = (Nekki_SF2_GUI_ResolutionImage_o *)(pSVar5->fields).super.super.m_TargetGraphic
            ;
            bVar4 = IEPJHKEBFEB__MMMKDKHNGLI(CGLFKKMBHCN,(MethodInfo *)0x0);
            if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
              bVar3 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
              if ((bVar3 <= (pNVar6->klass->_2).naturalAligment) &&
                 ((pNVar6->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
                  (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)) {
                puVar1 = &StringLiteral_12562;
                if (!bVar4) {
                  puVar1 = &StringLiteral_12565;
                }
                Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                          (pNVar6,(System_String_o *)*puVar1,(MethodInfo *)0x0);
                Nekki_SF2_GUI_Pvp_PhaseWeapon__FDNHGCEFCFK(__this,method_00);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

