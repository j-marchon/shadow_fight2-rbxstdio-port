// Nekki.SF2.GUI.Map.ContentBossesFinal$$Init @ RVA 0x3308D00

void Nekki_SF2_GUI_Map_ContentBossesFinal__Init
               (Nekki_SF2_GUI_Map_ContentBossesFinal_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               AFFHKININGD_o *AGONJKOMAAA,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  uint uVar3;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Map_PrizePanel_o *__this_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_02;
  Nekki_SF2_GUI_Map_ContentBossesFinal_o *__this_00;
  
                    /* try { // try from 03408d04 to 03508d0b has its CatchHandler @ 03408d0c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03408cf0 with catch @ 03408d0c
                       catch(type#2 @ 00000000) { ... } // from try @ 03408d04 with catch @ 03408d0c
                        */
  if ((DAT_04567776 & 1) == 0) {
    FUN_01bab630(&StringLiteral_15811);
    FUN_01bab630(&StringLiteral_15810);
    DAT_04567776 = 1;
  }
  if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) goto LAB_03408e54;
  iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
  if (((iVar2 == 2) ||
      (iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar2 == 10)) ||
     (iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar2 == 0x15)) {
    __this_02 = (__this->fields)._lblDescription;
    CJNHFNHJHPE = System_String__Concat
                            (StringLiteral_15810,(BANHBMINMMP->fields).ICPECIILDFJ,
                             StringLiteral_15811,(MethodInfo *)0x0);
    if (__this_02 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03408e54;
  }
  else {
    __this_02 = (__this->fields)._lblDescription;
    if (__this_02 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03408e54;
    CJNHFNHJHPE = (BANHBMINMMP->fields).BJMHBMDFFPA;
  }
  method_00 = (MethodInfo *)0x0;
  Nekki_SF2_GUI_LabelAlias__set_Alias(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Map_ContentBossesFinal__HKCNMPNMAJA(__this,BANHBMINMMP,method_00);
  uVar3 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
  __this_00 = (Nekki_SF2_GUI_Map_ContentBossesFinal_o *)(ulong)uVar3;
  if (uVar3 == 2) {
LAB_03408e08:
    bVar1 = Nekki_SF2_GUI_Map_ContentBossesFinal__JEAINKCPKKN(__this_00,AGONJKOMAAA,method_00);
    bVar1 = !bVar1;
  }
  else {
    uVar3 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
    __this_00 = (Nekki_SF2_GUI_Map_ContentBossesFinal_o *)(ulong)uVar3;
    if (uVar3 == 10) goto LAB_03408e08;
    uVar3 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
    __this_00 = (Nekki_SF2_GUI_Map_ContentBossesFinal_o *)(ulong)uVar3;
    if (uVar3 == 0x15) goto LAB_03408e08;
    bVar1 = true;
  }
  __this_01 = (__this->fields)._prizePanel;
  if (__this_01 != (Nekki_SF2_GUI_Map_PrizePanel_o *)0x0) {
    Nekki_SF2_GUI_Map_PrizePanel__Init(__this_01,-1,bVar1,AGONJKOMAAA,(MethodInfo *)0x0);
    return;
  }
LAB_03408e54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

