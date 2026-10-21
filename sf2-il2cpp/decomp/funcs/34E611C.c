// OLKKAIFGGAK$$NMMKKPKGNCD @ RVA 0x34E611C

bool OLKKAIFGGAK__NMMKKPKGNCD(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  OPNFCOGALLI_o *pOVar1;
  MethodInfo *method_00;
  OLKKAIFGGAK_OGCKCABMHLC_o *OADIPDDBIDH;
  MethodInfo *in_x3;
  OLKKAIFGGAK_PCAMDMAHPBN_o *pOVar2;
  ECENNHNBAME_o *pEVar3;
  
  pOVar2 = (__this->fields).PFJAOMNNIOH;
  if (pOVar2 != (OLKKAIFGGAK_PCAMDMAHPBN_o *)0x0) {
    pEVar3 = (pOVar2->fields).BNGDONJEHMH;
    if (pEVar3 == (ECENNHNBAME_o *)0x0) {
LAB_035e6190:
      return pEVar3 != (ECENNHNBAME_o *)0x0;
    }
    if ((pOVar2->fields).GFELKACKHGG == false) {
      OADIPDDBIDH = (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0;
    }
    else {
      OADIPDDBIDH = (__this->fields).MMIDFMEOACB;
    }
    OLKKAIFGGAK__IBLGMJEDIPN(__this,(pOVar2->fields).DLKKPFHKIPB,OADIPDDBIDH,in_x3);
    pOVar1 = (__this->fields).OAKOFJJIOFF;
    if (pOVar1 != (OPNFCOGALLI_o *)0x0) {
      OPNFCOGALLI__DGLJCGNHLIG(pOVar1,(MethodInfo *)0x0);
      pOVar2 = (__this->fields).PFJAOMNNIOH;
      if ((pOVar2 != (OLKKAIFGGAK_PCAMDMAHPBN_o *)0x0) &&
         (pOVar1 = (__this->fields).OAKOFJJIOFF, pOVar1 != (OPNFCOGALLI_o *)0x0)) {
        (pOVar1->fields).NDBPNFLAKDL = (pOVar2->fields).BNGDONJEHMH;
        thunk_FUN_01c20e04(&(pOVar1->fields).NDBPNFLAKDL);
        OLKKAIFGGAK__IAJKALHLNOE(__this,method_00);
        goto LAB_035e6190;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

