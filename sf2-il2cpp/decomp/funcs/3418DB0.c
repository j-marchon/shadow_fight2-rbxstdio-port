// Nekki.SF2.GUI.Map.InfoBattle$$UpdateBattleInfoIfSelected @ RVA 0x3418DB0

void Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfoIfSelected
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method
               )

{
  bool bVar1;
  DNELIPCHKLK_o *pDVar2;
  System_String_o *DBIAAJNKHLH;
  MethodInfo *method_00;
  
  pDVar2 = (__this->fields).AABIECAIFGA;
  if (pDVar2 != (DNELIPCHKLK_o *)0x0) {
    bVar1 = DNELIPCHKLK__JBCKLNNLKMG(pDVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
      pDVar2 = (__this->fields).AABIECAIFGA;
      DBIAAJNKHLH = OOMHDDBCBJP__LOHPFCGCHNH(BANHBMINMMP,(MethodInfo *)0x0);
      if (pDVar2 != (DNELIPCHKLK_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        bVar1 = DNELIPCHKLK__IPFJNBLGFOE(pDVar2,DBIAAJNKHLH,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(__this,BANHBMINMMP,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

