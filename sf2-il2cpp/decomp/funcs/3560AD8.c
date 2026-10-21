// Nekki.SF2.Core.Fights.ModelContainer$$MMNIMNPKOGB @ RVA 0x3560AD8

void Nekki_SF2_Core_Fights_ModelContainer__MMNIMNPKOGB
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  IPPEHAJADOO_o *__this_00;
  MethodInfo *in_x2;
  OLKKAIFGGAK_o *pOVar2;
  OLKKAIFGGAK_EAOIGPODIAI_o *pOVar3;
  Il2CppObject **ppIVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar5;
  int32_t local_14;
  
  if ((DAT_04568bc4 & 1) == 0) {
    FUN_01bab630(&LJJOOIHCCEP_HEJHMMBJODB_TypeInfo);
    DAT_04568bc4 = 1;
  }
  pOVar2 = (__this->fields).MAODNBMLDEG;
  if (pOVar2 != (OLKKAIFGGAK_o *)0x0) {
    pOVar3 = (pOVar2->fields).PDCHNCOIHHA;
    local_14 = (__this->fields).GJPPMNKLLGD;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(LJJOOIHCCEP_HEJHMMBJODB_TypeInfo,&local_14);
    if (pOVar3 != (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0) {
      ppIVar4 = &(pOVar3->fields).KOANCCDDBDA;
      *ppIVar4 = pIVar1;
      thunk_FUN_01c20e04(ppIVar4,pIVar1);
      pOVar2 = (__this->fields).MAODNBMLDEG;
      CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((__this->fields).GJPPMNKLLGD,(MethodInfo *)0x0);
      if (pOVar2 != (OLKKAIFGGAK_o *)0x0) {
        (pOVar2->fields).LGKFKNGIPDM.fields = CVar5;
        Nekki_SF2_Core_Fights_ModelContainer__ECCABGPPFBD(__this,(__this->fields).MAODNBMLDEG,in_x2)
        ;
        pOVar2 = (__this->fields).MAODNBMLDEG;
        if ((pOVar2 != (OLKKAIFGGAK_o *)0x0) &&
           (__this_00 = (__this->fields).CAGHFDGCFPG, __this_00 != (IPPEHAJADOO_o *)0x0)) {
          IPPEHAJADOO__BKBHKFCCKDO(__this_00,1,(pOVar2->fields).PDCHNCOIHHA,false,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

