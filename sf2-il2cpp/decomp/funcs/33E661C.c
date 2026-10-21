// FCJBEKHDLAF$$FDJPCCHKIEM @ RVA 0x33E661C

void FCJBEKHDLAF__FDJPCCHKIEM(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_Utils_DetailedLog_o *pNVar2;
  FPNPHJJPLKB_o *__this_00;
  OLKKAIFGGAK_o *pOVar3;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  MethodInfo *method_01;
  MethodInfo *in_x3;
  KAHMAJKJMBK_o *pKVar4;
  PJKHAJKEHEL_o *pPVar5;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar6;
  
  if ((DAT_04567f04 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567f04 = 1;
  }
  FCJBEKHDLAF__KENPEBLGMIN(__this,2,in_x2);
  (__this->fields).IOGBJMGAFEB = true;
  pNVar6 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_01 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar6 = (__this->fields).HIBPKNAIPLH;
    if (pNVar6 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034e674c;
    Nekki_SF2_GUI_Fight_PreFight__ViewerPlay(pNVar6,(MethodInfo *)0x0);
  }
  FCJBEKHDLAF__KLBLKMJOBME(__this,true,method_01);
  pKVar4 = (__this->fields).AMJGAIMHDLO;
  if (pKVar4 != (KAHMAJKJMBK_o *)0x0) {
    (pKVar4->fields).JIKKMEONEDH = true;
    FCJBEKHDLAF__JELDGGLBNPO(__this,method_00);
    if ((__this->fields).FOFNFONDEBM != false) {
      bVar1 = FCJBEKHDLAF__GLOJOHKGALF(__this,false,false,in_x3);
      (__this->fields).FDMHAMJOCML = (bool_conflict)(~bVar1 & 1);
      (__this->fields).FOFNFONDEBM = false;
    }
    pNVar2 = Nekki_Utils_DetailedLog__get_Instance((MethodInfo *)0x0);
    if ((pNVar2 != (Nekki_Utils_DetailedLog_o *)0x0) &&
       (__this_00 = (pNVar2->fields)._OHKFCDKHGJO_k__BackingField, __this_00 != (FPNPHJJPLKB_o *)0x0
       )) {
      FPNPHJJPLKB__FNJLOJHLHCI(__this_00,(MethodInfo *)0x0);
      pPVar5 = (__this->fields).KCHOEJOHIMM;
      if ((pPVar5 != (PJKHAJKEHEL_o *)0x0) &&
         (pOVar3 = (__this->fields).LAMENNMGPBN, pOVar3 != (OLKKAIFGGAK_o *)0x0)) {
        OLKKAIFGGAK__OKNDBGGHBGI(pOVar3,0xe,(pPVar5->fields).BIFPKGPCJBB,(MethodInfo *)0x0);
        pPVar5 = (__this->fields).JEDELFOBLEN;
        if ((pPVar5 != (PJKHAJKEHEL_o *)0x0) &&
           (pOVar3 = (__this->fields).CLEKIBBCAOJ, pOVar3 != (OLKKAIFGGAK_o *)0x0)) {
          OLKKAIFGGAK__OKNDBGGHBGI(pOVar3,0xe,(pPVar5->fields).BIFPKGPCJBB,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034e674c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

