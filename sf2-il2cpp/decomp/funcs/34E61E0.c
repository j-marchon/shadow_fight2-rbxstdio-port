// OLKKAIFGGAK$$IAJKALHLNOE @ RVA 0x34E61E0

void OLKKAIFGGAK__IAJKALHLNOE(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  OLKKAIFGGAK_PCAMDMAHPBN_o *pOVar1;
  OLKKAIFGGAK_PCAMDMAHPBN_Fields *pOVar2;
  System_Collections_Generic_List_string__o **ppSVar3;
  undefined8 uVar4;
  MethodInfo *extraout_x1;
  undefined1 auVar5 [16];
  
  pOVar1 = (__this->fields).PFJAOMNNIOH;
  uVar4 = 0;
  if (pOVar1 != (OLKKAIFGGAK_PCAMDMAHPBN_o *)0x0) {
    pOVar2 = &pOVar1->fields;
    pOVar2->BNGDONJEHMH = (ECENNHNBAME_o *)0x0;
    thunk_FUN_01c20e04(pOVar2,0);
    pOVar1 = (__this->fields).PFJAOMNNIOH;
    uVar4 = 0;
    method = extraout_x1;
    if (pOVar1 != (OLKKAIFGGAK_PCAMDMAHPBN_o *)0x0) {
      ppSVar3 = &(pOVar1->fields).DLKKPFHKIPB;
      *ppSVar3 = (System_Collections_Generic_List_string__o *)0x0;
      auVar5 = thunk_FUN_01c20e04(ppSVar3,0);
      method = auVar5._8_8_;
      uVar4 = auVar5._0_8_;
      pOVar1 = (__this->fields).PFJAOMNNIOH;
      if (pOVar1 != (OLKKAIFGGAK_PCAMDMAHPBN_o *)0x0) {
        (pOVar1->fields).GFELKACKHGG = false;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar4,method);
}

