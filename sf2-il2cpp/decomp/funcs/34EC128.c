// OLKKAIFGGAK$$OKNDBGGHBGI @ RVA 0x34EC128

void OLKKAIFGGAK__OKNDBGGHBGI
               (OLKKAIFGGAK_o *__this,int32_t CLLGDGGKIPC,int32_t ABKNPBMGHKH,MethodInfo *method)

{
  OLKKAIFGGAK_HBMHDMCMABJ_o *pOVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar2;
  
  if (ABKNPBMGHKH < 2) {
    ABKNPBMGHKH = 1;
  }
  switch(CLLGDGGKIPC) {
  case 9:
    pOVar1 = (__this->fields).BOCILPDBPGH;
    if (pOVar1 == (OLKKAIFGGAK_HBMHDMCMABJ_o *)0x0) {
LAB_035ec214:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pOVar1->fields).LDGJPGNEKEF = true;
    (pOVar1->fields).NBCMKDMIFFM = ABKNPBMGHKH;
    break;
  case 10:
    pOVar1 = (__this->fields).BOCILPDBPGH;
    if (pOVar1 == (OLKKAIFGGAK_HBMHDMCMABJ_o *)0x0) goto LAB_035ec214;
    (pOVar1->fields).HINIEGDADPG = true;
    CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      (ABKNPBMGHKH,(MethodInfo *)0x0);
    (pOVar1->fields).DOPNOEFCHDB.fields = CVar2;
    break;
  case 0xb:
    pOVar1 = (__this->fields).BOCILPDBPGH;
    if (pOVar1 == (OLKKAIFGGAK_HBMHDMCMABJ_o *)0x0) goto LAB_035ec214;
    (pOVar1->fields).KECIKHCJDBP = true;
    CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      (ABKNPBMGHKH,(MethodInfo *)0x0);
    (pOVar1->fields).HDAANEHLBOA.fields = CVar2;
    break;
  case 0xd:
    pOVar1 = (__this->fields).BOCILPDBPGH;
    if (pOVar1 == (OLKKAIFGGAK_HBMHDMCMABJ_o *)0x0) goto LAB_035ec214;
    (pOVar1->fields).FKAGBMKCINF = true;
    CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      (ABKNPBMGHKH,(MethodInfo *)0x0);
    (pOVar1->fields).ONDCILOBNAC.fields = CVar2;
    break;
  case 0xe:
    pOVar1 = (__this->fields).BOCILPDBPGH;
    if (pOVar1 == (OLKKAIFGGAK_HBMHDMCMABJ_o *)0x0) goto LAB_035ec214;
    (pOVar1->fields).CFPJBIDBCDG = true;
    CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      (ABKNPBMGHKH,(MethodInfo *)0x0);
    (pOVar1->fields).HGKFDMGMLHK.fields = CVar2;
  }
  return;
}

