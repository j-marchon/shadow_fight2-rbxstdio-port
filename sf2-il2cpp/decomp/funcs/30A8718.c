// Nekki.SF2.GUI.Fight.ScreenFight$$PreInit @ RVA 0x30A8718

void Nekki_SF2_GUI_Fight_ScreenFight__PreInit
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,AFFHKININGD_o *FBFPLEFCDOK,
               MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
                    /* try { // try from 031a8728 to 032a872f has its CatchHandler @ 031a8a90 */
                    /* try { // try from 031a8738 to 032a875f has its CatchHandler @ 031a8a98 */
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (FBFPLEFCDOK->fields).GENLHJOKOIJ.fields,(MethodInfo *)0x0);
    iVar2 = AFFHKININGD__IKDFBAOFNPB(FBFPLEFCDOK,(MethodInfo *)0x0);
    (__this->fields).KKCHDELEFJF = iVar2 * iVar1;
    pSVar3 = AFFHKININGD__CJPIFPJMENP(FBFPLEFCDOK,(MethodInfo *)0x0);
    ppSVar4 = &(__this->fields).NLKCBHLEEDA;
                    /* try { // try from 031a8760 to 032a8777 has its CatchHandler @ 031a8a88 */
    *ppSVar4 = pSVar3;
    thunk_FUN_01c20e04(ppSVar4,pSVar3);
    (__this->fields).FNHHIEKCLPI = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

