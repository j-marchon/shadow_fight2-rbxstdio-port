// OLKKAIFGGAK$$MNMFAALCGDH @ RVA 0x34EC934

void OLKKAIFGGAK__MNMFAALCGDH
               (OLKKAIFGGAK_o *__this,OLKKAIFGGAK_o *JALKELIHLPC,MDAPDLLMOMF_o *LEAMIBIAIIN,
               MethodInfo *method)

{
  int32_t iVar1;
  CNDPAJOLKFN_o *__this_00;
  MethodInfo *in_x7;
  MCIBPLJEFLJ_o *pMVar2;
  OPNFCOGALLI_o *pOVar3;
  CNDPAJOLKFN_o *pCVar4;
  MCIBPLJEFLJ_KHCGONNHOMM_o *pMVar5;
  float fVar6;
  float OKMABLDHNLJ;
  float PIBBGDEBBJC;
  PKHLGDMJPMF_Fields PVar7;
  PKHLGDMJPMF_Fields PVar8;
  
  if ((DAT_0456879a & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_0456879a = 1;
  }
  pMVar2 = (__this->fields).NKOKFFDMNJF;
  if ((pMVar2 != (MCIBPLJEFLJ_o *)0x0) && (LEAMIBIAIIN != (MDAPDLLMOMF_o *)0x0)) {
    pMVar5 = (pMVar2->fields).HKFEABKNICO;
    fVar6 = MDAPDLLMOMF__OHNNJCBAGBP(LEAMIBIAIIN,(MethodInfo *)0x0);
    OKMABLDHNLJ = MDAPDLLMOMF__CNJBMGIACNN(LEAMIBIAIIN,(MethodInfo *)0x0);
    PIBBGDEBBJC = MDAPDLLMOMF__BJNBHBMMPHE(LEAMIBIAIIN,(MethodInfo *)0x0);
    __this_00 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    CNDPAJOLKFN___ctor(__this_00,fVar6,OKMABLDHNLJ,PIBBGDEBBJC,(MethodInfo *)0x0);
    if ((__this_00 != (CNDPAJOLKFN_o *)0x0) &&
       (pOVar3 = (__this->fields).OAKOFJJIOFF, pOVar3 != (OPNFCOGALLI_o *)0x0)) {
      fVar6 = (__this_00->fields).super.OHHDBINAJCB * (float)(pOVar3->fields).DMJAJGGGHPF;
      (__this_00->fields).super.OHHDBINAJCB = fVar6;
      pCVar4 = (__this->fields).PFCAKNOOBKB;
      if (pCVar4 != (CNDPAJOLKFN_o *)0x0) {
        PVar8 = (pCVar4->fields).super;
        PVar7.OHHDBINAJCB = fVar6 * PVar8.OHHDBINAJCB;
        PVar7.JOLEIODMLFL = (__this_00->fields).super.JOLEIODMLFL * PVar8.JOLEIODMLFL;
        (__this_00->fields).super = PVar7;
        (__this_00->fields).PPOPAMHBMGG =
             (__this_00->fields).PPOPAMHBMGG * (pCVar4->fields).PPOPAMHBMGG;
        iVar1 = MDAPDLLMOMF__EOJFKNELJMG(LEAMIBIAIIN,(MethodInfo *)0x0);
        (__this->fields).HHOCPIIIIDK = iVar1;
        if ((pMVar5 != (MCIBPLJEFLJ_KHCGONNHOMM_o *)0x0) && (JALKELIHLPC != (OLKKAIFGGAK_o *)0x0)) {
          OLKKAIFGGAK__HKFEABKNICO
                    (JALKELIHLPC,(pMVar5->fields).POPNNGCHBML,(pMVar5->fields).GBPPPKHOPEA,
                     (pMVar5->fields).BPILADHMHBB,(pMVar5->fields).HNNCKGOBKLK,__this,__this_00,
                     in_x7);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

