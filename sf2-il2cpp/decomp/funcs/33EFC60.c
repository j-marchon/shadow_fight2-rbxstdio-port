// FCJBEKHDLAF$$PPGPKHDJILJ @ RVA 0x33EFC60

void FCJBEKHDLAF__PPGPKHDJILJ(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool PLNACNFOEAI;
  bool HHFCPLHHPKM;
  OLKKAIFGGAK_o *pOVar2;
  System_String_o *message;
  KAHMAJKJMBK_o *pKVar3;
  MethodInfo *extraout_x1;
  CAAJMGKIPIE_o *pCVar4;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  PJKHAJKEHEL_o *pPVar5;
  JIMKCICMMIL_o *pJVar6;
  Nekki_SF2_Core_Fights_Controls_GameController_o *__this_00;
  
  if ((DAT_04567f03 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_12344);
    FUN_01bab630(&StringLiteral_10307);
    DAT_04567f03 = 1;
  }
  pOVar2 = (__this->fields).CLEKIBBCAOJ;
  if (pOVar2 != (OLKKAIFGGAK_o *)0x0) {
    OLKKAIFGGAK__CIBLINMCKDK(pOVar2,(__this->fields).JJDMOAJJGFG,(MethodInfo *)0x0);
    pOVar2 = (__this->fields).LAMENNMGPBN;
    if (pOVar2 != (OLKKAIFGGAK_o *)0x0) {
      bVar1 = OLKKAIFGGAK__FNJNIJKLCIF(pOVar2,(MethodInfo *)0x0);
      method_00 = extraout_x1;
      if (bVar1) {
        pPVar5 = (__this->fields).KCHOEJOHIMM;
        if (pPVar5 == (PJKHAJKEHEL_o *)0x0) goto LAB_034efe6c;
        pCVar4 = (pPVar5->fields).DNAFFNAIDLB;
        pOVar2 = (__this->fields).LAMENNMGPBN;
        if (pCVar4 == (CAAJMGKIPIE_o *)0x0) {
          if (pOVar2 == (OLKKAIFGGAK_o *)0x0) goto LAB_034efe6c;
          OLKKAIFGGAK__CIBLINMCKDK(pOVar2,StringLiteral_12344,(MethodInfo *)0x0);
        }
        else {
          if (pOVar2 == (OLKKAIFGGAK_o *)0x0) goto LAB_034efe6c;
          OLKKAIFGGAK__CIBLINMCKDK(pOVar2,pCVar4,(MethodInfo *)0x0);
        }
        pPVar5 = (__this->fields).KCHOEJOHIMM;
        if ((pPVar5 == (PJKHAJKEHEL_o *)0x0) ||
           (pCVar4 = (pPVar5->fields).DNAFFNAIDLB, pCVar4 == (CAAJMGKIPIE_o *)0x0))
        goto LAB_034efe6c;
        message = System_String__Concat
                            (StringLiteral_10307,(pCVar4->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogWarning((Il2CppObject *)message,(MethodInfo *)0x0);
        method_00 = extraout_x1_00;
      }
      pJVar6 = (__this->fields).ODIAFMNGOLA;
      if (pJVar6 != (JIMKCICMMIL_o *)0x0) {
        if (1 < (pJVar6->fields).ODIAFMNGOLA) {
          FCJBEKHDLAF__IHBHONOEBKF(__this,method_00);
          method_00 = extraout_x1_01;
        }
        FCJBEKHDLAF__BMEDGBCLBML(__this,method_00);
        pKVar3 = (__this->fields).AMJGAIMHDLO;
        if (pKVar3 != (KAHMAJKJMBK_o *)0x0) {
          KAHMAJKJMBK__ANABFMECNKN(pKVar3,(__this->fields).KCHOEJOHIMM,(MethodInfo *)0x0);
          FCJBEKHDLAF__PDGBIPGABOP(__this,method_01);
          FCJBEKHDLAF__HNCPAOPBOAM(__this,method_02);
          pPVar5 = (__this->fields).JEDELFOBLEN;
          if (pPVar5 != (PJKHAJKEHEL_o *)0x0) {
            (*(pPVar5->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
                      (pPVar5,(pPVar5->klass->vtable)._7_LBNKPLKIIOP.method);
            FCJBEKHDLAF__ENLCMNOHKKJ(__this,method_03);
            if (DAT_04565c84 == '\0') {
              FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
              DAT_04565c84 = '\x01';
            }
            pPVar5 = (__this->fields).KCHOEJOHIMM;
            if (pPVar5 != (PJKHAJKEHEL_o *)0x0) {
              __this_00 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->
                          CNMHHKAMGPI;
              bVar1 = PJKHAJKEHEL__AKIBJLFMCEF(pPVar5,(MethodInfo *)0x0);
              pPVar5 = (__this->fields).KCHOEJOHIMM;
              if (pPVar5 != (PJKHAJKEHEL_o *)0x0) {
                PLNACNFOEAI = PJKHAJKEHEL__KNDMLFBMFII(pPVar5,(MethodInfo *)0x0);
                HHFCPLHHPKM = FCJBEKHDLAF__KGOFOEKMOFG(__this,method_04);
                if (__this_00 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) {
                  Nekki_SF2_Core_Fights_Controls_GameController__Refresh
                            (__this_00,bVar1,PLNACNFOEAI,HHFCPLHHPKM,(MethodInfo *)0x0);
                  pKVar3 = (__this->fields).AMJGAIMHDLO;
                  if (pKVar3 != (KAHMAJKJMBK_o *)0x0) {
                    KAHMAJKJMBK__LLLDBDDBAJG(pKVar3,(MethodInfo *)0x0);
                    FCJBEKHDLAF__NDBIFNGNKJF(__this,method_05);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_034efe6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

