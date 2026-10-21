// NGKBNOEJLPH$$MEADICGEFPN @ RVA 0x34956B0

float NGKBNOEJLPH__MEADICGEFPN
                (NGKBNOEJLPH_o *__this,System_String_o *BCPAFBNLBDE,OLKKAIFGGAK_o *BCKBBGCOMJD,
                OLKKAIFGGAK_o *IFCJAOGIPJE,MethodInfo *method)

{
  int32_t OAFGMHOFEKM;
  OPNFCOGALLI_o *__this_00;
  IEFEBEDLHNN_o *pIVar1;
  CNDPAJOLKFN_o *pCVar2;
  float fVar3;
  
  OAFGMHOFEKM = NGKBNOEJLPH__NPFGMAOAAED(__this,BCKBBGCOMJD,IFCJAOGIPJE,(MethodInfo *)IFCJAOGIPJE);
  if ((BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) &&
     (__this_00 = (BCKBBGCOMJD->fields).OAKOFJJIOFF, __this_00 != (OPNFCOGALLI_o *)0x0)) {
    pIVar1 = OPNFCOGALLI__OCJAHBKIFNO(__this_00,BCPAFBNLBDE,OAFGMHOFEKM,(MethodInfo *)0x0);
    if (pIVar1 == (IEFEBEDLHNN_o *)0x0) {
      fVar3 = 3.4028235e+38;
    }
    else {
      pCVar2 = (pIVar1->fields).CNMHHKAMGPI;
      if (pCVar2 == (CNDPAJOLKFN_o *)0x0) goto LAB_03595710;
      fVar3 = (pCVar2->fields).super.OHHDBINAJCB;
    }
    return fVar3;
  }
LAB_03595710:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

