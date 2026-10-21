// CPGONFFGAHM$$HKFEABKNICO @ RVA 0x34C5130

void CPGONFFGAHM__HKFEABKNICO
               (CPGONFFGAHM_o *__this,GEBHIBIEAJE_o *PGHNHNDHEPF,CNDPAJOLKFN_o *EKEMKOCPHPO,
               CNDPAJOLKFN_o *PCGIENAHMFK,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this_00;
  GEBHIBIEAJE_o *extraout_x1;
  GEBHIBIEAJE_o *method_00;
  CNDPAJOLKFN_o *PHCOHKNFGLE;
  IEFEBEDLHNN_o *__this_01;
  CNDPAJOLKFN_o *pCVar1;
  IEFEBEDLHNN_o *pIVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  method_00 = PGHNHNDHEPF;
  if ((DAT_0456862f & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_0456862f = 1;
    method_00 = extraout_x1;
  }
  if (PGHNHNDHEPF != (GEBHIBIEAJE_o *)0x0) {
    CPGONFFGAHM__DPDEMPFEJEB(__this,(MethodInfo *)method_00);
    pIVar2 = (PGHNHNDHEPF->fields)._HDEPMIOPNAJ_k__BackingField;
    if (pIVar2 == (IEFEBEDLHNN_o *)0x0) goto LAB_035c52f4;
    __this_01 = (PGHNHNDHEPF->fields)._GNLFCODFOOM_k__BackingField;
    if ((pIVar2->fields).MCAILHLELHB == false) {
      if (__this_01 == (IEFEBEDLHNN_o *)0x0) goto LAB_035c52f4;
    }
    else {
      if (__this_01 == (IEFEBEDLHNN_o *)0x0) goto LAB_035c52f4;
      if ((__this_01->fields).MCAILHLELHB != false) {
        return;
      }
    }
    pCVar1 = (pIVar2->fields).CNMHHKAMGPI;
    PHCOHKNFGLE = (__this_01->fields).CNMHHKAMGPI;
    fVar3 = PKHLGDMJPMF__PAMPGOGMIJN
                      ((PGHNHNDHEPF->fields)._HMIPFMPCHII_k__BackingField,
                       (PGHNHNDHEPF->fields)._MHGCPMPILGC_k__BackingField,(MethodInfo *)0x0);
    fVar4 = PKHLGDMJPMF__PAMPGOGMIJN((pIVar2->fields).CNMHHKAMGPI,EKEMKOCPHPO,(MethodInfo *)0x0);
    fVar5 = 1.0;
    if (fVar4 <= fVar3) {
      fVar5 = fVar4 / fVar3;
    }
    if ((pIVar2->fields).MCKFLABMNAK == false) {
      fVar3 = IEFEBEDLHNN__NODBECJPBDC(pIVar2,(MethodInfo *)0x0);
      __this_00 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
      CNDPAJOLKFN___ctor(__this_00,PCGIENAHMFK,(MethodInfo *)0x0);
      if (__this_00 == (CNDPAJOLKFN_o *)0x0) goto LAB_035c52f4;
      CNDPAJOLKFN__PGLILPKGILI(__this_00,(1.0 - fVar5) / fVar3,(MethodInfo *)0x0);
      CNDPAJOLKFN__LFENGGKOJDO(__this_00,pCVar1,(MethodInfo *)0x0);
      pIVar2 = (PGHNHNDHEPF->fields)._HDEPMIOPNAJ_k__BackingField;
      if (pIVar2 == (IEFEBEDLHNN_o *)0x0) goto LAB_035c52f4;
      IEFEBEDLHNN__AGOEHONIGBH(pIVar2,__this_00,(MethodInfo *)0x0);
    }
    if ((__this_01->fields).MCKFLABMNAK == false) {
      fVar3 = IEFEBEDLHNN__NODBECJPBDC(__this_01,(MethodInfo *)0x0);
      pCVar1 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
      CNDPAJOLKFN___ctor(pCVar1,PCGIENAHMFK,(MethodInfo *)0x0);
      if (pCVar1 != (CNDPAJOLKFN_o *)0x0) {
        CNDPAJOLKFN__PGLILPKGILI(pCVar1,fVar5 / fVar3,(MethodInfo *)0x0);
        CNDPAJOLKFN__LFENGGKOJDO(pCVar1,PHCOHKNFGLE,(MethodInfo *)0x0);
        pIVar2 = (PGHNHNDHEPF->fields)._GNLFCODFOOM_k__BackingField;
        if (pIVar2 != (IEFEBEDLHNN_o *)0x0) {
          IEFEBEDLHNN__AGOEHONIGBH(pIVar2,pCVar1,(MethodInfo *)0x0);
          return;
        }
      }
LAB_035c52f4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

