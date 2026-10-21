// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$SetActive @ RVA 0x330AAFC

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__SetActive
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  CBLABOPKBKD_o *pCVar6;
  KKLJIDJBFEI_o *pKVar7;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ACHLOMELAJE_o *pAVar8;
  
  if ((DAT_0456777b & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11430);
    DAT_0456777b = 1;
  }
  pCVar6 = (__this->fields)._FONGIJNHBLK_k__BackingField;
  if (pCVar6 == (CBLABOPKBKD_o *)0x0) goto LAB_0340ac8c;
  bVar4 = CBLABOPKBKD__FPBFCPPDGNI(pCVar6,(MethodInfo *)0x0);
  pCVar6 = (__this->fields)._FONGIJNHBLK_k__BackingField;
  if (pCVar6 == (CBLABOPKBKD_o *)0x0) goto LAB_0340ac8c;
  bVar2 = bVar4 && CJNHFNHJHPE;
  bVar5 = System_String__op_Equality
                    ((pCVar6->fields).BGHFADDGPAD,StringLiteral_11430,(MethodInfo *)0x0);
  bVar3 = bVar2;
  if (bVar5) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar8 == (ACHLOMELAJE_o *)0x0) || ((pAVar8->fields).FCEBIJCGJOL == false))
    goto LAB_0340ac3c;
    pKVar7 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar7 == (KKLJIDJBFEI_o *)0x0) goto LAB_0340ac8c;
    bVar1 = (pKVar7->fields).super._MGGBEPKMPCF_k__BackingField;
    bVar3 = bVar2 && bVar1 != false;
    if (((bVar1 == false) || (!bVar4 || !CJNHFNHJHPE)) ||
       (bVar3 = bVar2, (__this->fields).CPODNGPDPDC != false)) goto LAB_0340ac0c;
    Nekki_SF2_GUI_Menu_MenuAdvertisingButton__GHDNMPGNLOK(__this,method_00);
LAB_0340ac10:
    pCVar6 = (__this->fields).COHMICDNKCB;
    if (pCVar6 == (CBLABOPKBKD_o *)0x0) {
      bVar4 = true;
    }
    else {
      bVar4 = CBLABOPKBKD__FPBFCPPDGNI(pCVar6,(MethodInfo *)0x0);
      bVar4 = !bVar4;
    }
  }
  else {
LAB_0340ac0c:
    if (bVar3) goto LAB_0340ac10;
LAB_0340ac3c:
    bVar4 = false;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,bVar4,(MethodInfo *)0x0);
    if ((bVar4 != false) && ((__this->fields)._NNCECFJGBFF_k__BackingField != false)) {
      Nekki_SF2_GUI_Menu_MenuAdvertisingButton__RunRibbonAnimation(__this,method_01);
      return;
    }
    return;
  }
LAB_0340ac8c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

