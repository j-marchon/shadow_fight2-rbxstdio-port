// Nekki.SF2.GUI.TableView$$BFHNEAPPOFM @ RVA 0x30DA22C

void Nekki_SF2_GUI_TableView__BFHNEAPPOFM(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  KELJDKIIHMM_Fields *pKVar1;
  int iVar2;
  UnityEngine_SocialPlatforms_Range_Fields CMHCEEPDACF;
  bool bVar3;
  int32_t iVar4;
  KMAKOOHEKNB_o *__this_00;
  UnityEngine_SocialPlatforms_Range_o CMHCEEPDACF_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_x3;
  KELJDKIIHMM_o *pKVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  (__this->fields).FNIBBMLOJIJ = false;
  if ((__this->fields).BPELPEAHGHL == false) {
    __this_00 = (__this->fields).HCLHHHKCABP;
    if (__this_00 == (KMAKOOHEKNB_o *)0x0) {
LAB_031da34c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar6 = (__this->fields).GMCDBHFHFGF;
    fVar8 = (__this->fields).DJKFFOOJDDD;
    fVar7 = KMAKOOHEKNB__HGJGLBLDDHF(__this_00,0,(MethodInfo *)0x0);
    if (fVar7 * 0.5 + (__this->fields)._spacing * 0.5 <= ABS(fVar6 - fVar8)) {
      pKVar5 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
      (__this->fields).DJKFFOOJDDD = (__this->fields).GMCDBHFHFGF;
      if (pKVar5 == (KELJDKIIHMM_o *)0x0) goto LAB_031da34c;
      pKVar1 = &pKVar5->fields;
      iVar2 = (pKVar1->CIMDIANAHIM).fields.from;
      CMHCEEPDACF = (pKVar1->CIMDIANAHIM).fields;
      CMHCEEPDACF_00 = Nekki_SF2_GUI_TableView__GFAFEFPKGLH(__this,method_00);
      iVar4 = LECDDPFLBEM__KIKGKKGDCKK
                        ((UnityEngine_SocialPlatforms_Range_o)CMHCEEPDACF,(MethodInfo *)0x0);
      method_01 = extraout_x1;
      if ((iVar4 < CMHCEEPDACF_00.fields.from) ||
         (iVar4 = LECDDPFLBEM__KIKGKKGDCKK(CMHCEEPDACF_00,(MethodInfo *)0x0),
         method_01 = extraout_x1_00, iVar4 < iVar2)) {
        Nekki_SF2_GUI_TableView__NAOPHLEJGGL(__this,method_01);
        Nekki_SF2_GUI_TableView__BGOLOHLDFGK(__this,method_02);
        return;
      }
      bVar3 = LECDDPFLBEM__GAKDEAHMIPB
                        ((UnityEngine_SocialPlatforms_Range_o)CMHCEEPDACF,CMHCEEPDACF_00,
                         (MethodInfo *)0x0);
      if (!bVar3) {
        Nekki_SF2_GUI_TableView__FJPJBCIJGML
                  (__this,(UnityEngine_SocialPlatforms_Range_o)CMHCEEPDACF,CMHCEEPDACF_00,in_x3);
        Nekki_SF2_GUI_TableView__DOGOHNGEGLE
                  (__this,(UnityEngine_SocialPlatforms_Range_o)CMHCEEPDACF,CMHCEEPDACF_00,in_x3);
        pKVar5 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
        if (pKVar5 == (KELJDKIIHMM_o *)0x0) goto LAB_031da34c;
        (pKVar5->fields).CIMDIANAHIM.fields.from = CMHCEEPDACF_00.fields.from;
        (pKVar5->fields).CIMDIANAHIM.fields.count = CMHCEEPDACF_00.fields.count;
      }
    }
  }
  return;
}

