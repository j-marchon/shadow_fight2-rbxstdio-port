// IPPEHAJADOO$$ACFACKMJMIN @ RVA 0x3141E24

void IPPEHAJADOO__ACFACKMJMIN
               (System_Collections_Generic_List_string__o **EOLHDEHOFHL,
               NJPBHDMCLIN_KLLGIFHMMIP_o *HNHBCBPBBPK,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  ECENNHNBAME_o *pEVar3;
  GBJGJEGPHKD_o **ppGVar4;
  float fVar5;
  
  if ((DAT_04566763 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    DAT_04566763 = 1;
  }
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    return;
  }
  if ((BCKBBGCOMJD->fields).GJLEPEPAOKD != (MMDPNDAECII_o *)0x0) {
    bVar1 = OLKKAIFGGAK__NDBKBPEHEON(BCKBBGCOMJD,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = OLKKAIFGGAK__OBKEHOHFBAA(BCKBBGCOMJD,(MethodInfo *)0x0);
      if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03241f00;
      if (0 < (pSVar2->fields)._size) goto LAB_03241eb0;
    }
    else {
      pEVar3 = OLKKAIFGGAK__FMEOPPFIHCB(BCKBBGCOMJD,(MethodInfo *)0x0);
      if (pEVar3 != (ECENNHNBAME_o *)0x0) {
        pSVar2 = (pEVar3->fields)._AHFPJJKEANI_k__BackingField;
LAB_03241eb0:
        *EOLHDEHOFHL = pSVar2;
        thunk_FUN_01c20e04(EOLHDEHOFHL);
      }
    }
  }
  if (HNHBCBPBBPK != (NJPBHDMCLIN_KLLGIFHMMIP_o *)0x0) {
    ppGVar4 = &(HNHBCBPBBPK->fields).DBFCHBBKIHK;
    *ppGVar4 = (BCKBBGCOMJD->fields).HMIAFJALFCJ;
    thunk_FUN_01c20e04(ppGVar4);
    fVar5 = OLKKAIFGGAK__PDDIMGPPDJG(BCKBBGCOMJD,(MethodInfo *)0x0);
    (HNHBCBPBBPK->fields).LJIMIPADLFB.fields.x = fVar5;
    fVar5 = OLKKAIFGGAK__OANHDICAGKJ(BCKBBGCOMJD,(MethodInfo *)0x0);
    (HNHBCBPBBPK->fields).CKHIFBLLNED.fields.x = fVar5;
    return;
  }
LAB_03241f00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

