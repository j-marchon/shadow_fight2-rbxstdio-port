// KAHMAJKJMBK$$CLAONOCPIHH @ RVA 0x34BD1B4

void KAHMAJKJMBK__CLAONOCPIHH
               (KAHMAJKJMBK_o *__this,ECGPIFIJMFF_o *GOAHBPBJCKC,AFFHKININGD_o *FBFPLEFCDOK,
               MethodInfo *method)

{
  int32_t iVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar2;
  
  CVar2._8_8_ = GOAHBPBJCKC;
  CVar2._0_8_ = __this;
  if (GOAHBPBJCKC != (ECGPIFIJMFF_o *)0x0) {
    iVar1 = (GOAHBPBJCKC->fields).DKGMKHOOHBI;
    if (0 < iVar1) {
      CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar1,(MethodInfo *)0x0);
      if (FBFPLEFCDOK == (AFFHKININGD_o *)0x0) goto LAB_035bd214;
      (FBFPLEFCDOK->fields).GENLHJOKOIJ.fields = CVar2;
    }
    iVar1 = (GOAHBPBJCKC->fields).FGPEKOKDCNB;
    if (0 < iVar1) {
      CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar1,(MethodInfo *)0x0);
      if (FBFPLEFCDOK == (AFFHKININGD_o *)0x0) goto LAB_035bd214;
      (FBFPLEFCDOK->fields).NHNNEADDBDB.fields = CVar2;
    }
    return;
  }
LAB_035bd214:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(CVar2._0_8_);
}

