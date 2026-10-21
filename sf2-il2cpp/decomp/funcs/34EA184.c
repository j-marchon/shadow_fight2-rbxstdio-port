// OLKKAIFGGAK$$BOEFGIBCIIL @ RVA 0x34EA184

void OLKKAIFGGAK__BOEFGIBCIIL
               (OLKKAIFGGAK_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,bool ABOGGPJGIAI,bool JIFEMENPFJE,
               bool DHNFABEEOEC,MethodInfo *method)

{
  bool bVar1;
  uint CJNHFNHJHPE;
  PJKHAJKEHEL_o *pPVar2;
  HOOAAGABMBL_o *pHVar3;
  FPLCEOJCPOD_o *pFVar4;
  MGNPHCAAEIO_c *pMVar5;
  MethodInfo *method_00;
  PFOFJCIOLOG_o *pPVar6;
  System_String_o *PMACBPAMPJA;
  uint local_34;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035ea16c with catch @ 035ea188
                       catch(type#2 @ 00000000) { ... } // from try @ 035ea180 with catch @ 035ea188
                        */
  if ((DAT_04568783 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568783 = 1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    return;
  }
  pPVar2 = (__this->fields).FAPMJJBOFEF;
  pMVar5 = (MGNPHCAAEIO_c *)0x0;
  if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
    pHVar3 = (HOOAAGABMBL_o *)
             (*(pPVar2->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                       (pPVar2,(IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,0,
                        (pPVar2->klass->vtable)._4_CJPIJKJDHGI.method);
    if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
      return;
    }
    bVar1 = System_String__op_Inequality
                      ((pHVar3->fields)._COIPKAKHDFP_k__BackingField,
                       (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (!ABOGGPJGIAI) {
      pHVar3 = (HOOAAGABMBL_o *)0x0;
    }
    (__this->fields).HNJLKFNOPLJ = pHVar3;
    thunk_FUN_01c20e04(&(__this->fields).HNJLKFNOPLJ);
    pPVar2 = (__this->fields).FAPMJJBOFEF;
    pMVar5 = (MGNPHCAAEIO_c *)0x0;
    if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
      (*(pPVar2->klass->vtable)._9_CGNPHPDFKJG.methodPtr)
                (pPVar2,(IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,IKKAMAMLIKA,
                 (pPVar2->klass->vtable)._9_CGNPHPDFKJG.method);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pPVar6 = MGNPHCAAEIO_TypeInfo->static_fields->NLFJFKCJEAC;
      pMVar5 = MGNPHCAAEIO_TypeInfo;
      if (pPVar6 != (PFOFJCIOLOG_o *)0x0) {
        PMACBPAMPJA = (pPVar6->fields).HCOENCEAHCN;
        local_34 = 0;
        pFVar4 = (IKKAMAMLIKA->fields)._EBHBCMICHKA_k__BackingField;
        pMVar5 = (MGNPHCAAEIO_c *)0x0;
        if (pFVar4 != (FPLCEOJCPOD_o *)0x0) {
          bVar1 = FPLCEOJCPOD__KNMENIBLFGF
                            (pFVar4,PMACBPAMPJA,(int32_t *)&local_34,true,false,(MethodInfo *)0x0);
          pMVar5 = (MGNPHCAAEIO_c *)(ulong)bVar1;
          pPVar2 = (__this->fields).FAPMJJBOFEF;
          if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
            pFVar4 = (pPVar2->fields).ACHJNNOKEDK;
            CJNHFNHJHPE = local_34;
            if (!DHNFABEEOEC) {
              if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pPVar6 = MGNPHCAAEIO_TypeInfo->static_fields->NLFJFKCJEAC;
              pMVar5 = MGNPHCAAEIO_TypeInfo;
              if (pPVar6 == (PFOFJCIOLOG_o *)0x0) goto LAB_035ea304;
              CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                       (pPVar6->fields).IGEOOKAJICM.fields,(MethodInfo *)0x0);
              pMVar5 = (MGNPHCAAEIO_c *)(ulong)CJNHFNHJHPE;
            }
            if (pFVar4 != (FPLCEOJCPOD_o *)0x0) {
              FPLCEOJCPOD__FOOHBJNHOKK(pFVar4,PMACBPAMPJA,CJNHFNHJHPE,false,(MethodInfo *)0x0);
              if (!JIFEMENPFJE) {
                return;
              }
              OLKKAIFGGAK__FJEIOCILFLE(__this,method_00);
              return;
            }
          }
        }
      }
    }
  }
LAB_035ea304:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(pMVar5);
}

