// Nekki.SF2.GUI.Fight.PlayerLifeBar$$CJBJILOKLDI @ RVA 0x351F9B0

float Nekki_SF2_GUI_Fight_PlayerLifeBar__CJBJILOKLDI
                (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  int32_t iVar1;
  PJKHAJKEHEL_o *pPVar2;
  float fVar3;
  
  pPVar2 = (__this->fields).MFLNIMCFPDK;
  if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
                    /* try { // try from 0361f9d0 to 0371fa1b has its CatchHandler @ 0361fb60 */
    fVar3 = CJNHFNHJHPE;
    if (CJNHFNHJHPE <= 0.0) {
      fVar3 = 0.0;
    }
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pPVar2->fields).ALJDGEBLHAF.fields,(MethodInfo *)0x0);
    if (0 < iVar1) {
      pPVar2 = (__this->fields).MFLNIMCFPDK;
      if (pPVar2 == (PJKHAJKEHEL_o *)0x0) goto LAB_0361fa38;
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pPVar2->fields).ALJDGEBLHAF.fields,(MethodInfo *)0x0);
      if ((float)iVar1 < CJNHFNHJHPE) {
        pPVar2 = (__this->fields).MFLNIMCFPDK;
        if (pPVar2 == (PJKHAJKEHEL_o *)0x0) goto LAB_0361fa38;
                    /* try { // try from 0361fa20 to 0371fa27 has its CatchHandler @ 0361fab4 */
        iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pPVar2->fields).ALJDGEBLHAF.fields,(MethodInfo *)0x0);
        fVar3 = (float)iVar1;
      }
    }
    return fVar3;
  }
LAB_0361fa38:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0361fa38 to 0371fa53 has its CatchHandler @ 0361fb60 */
  FUN_01bab8c8();
}

