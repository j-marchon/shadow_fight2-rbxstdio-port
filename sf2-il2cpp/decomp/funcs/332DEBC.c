// Nekki.SF2.GUI.Profile.ProfileBottomPanel$$CJFJPCHDLAB @ RVA 0x332DEBC

int32_t Nekki_SF2_GUI_Profile_ProfileBottomPanel__CJFJPCHDLAB
                  (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this,int32_t HIIGJGLEOFH,
                  MethodInfo *method)

{
  int32_t iVar1;
  NFGLEDADCGL_o *__this_00;
  FEPPOONJCGI_o *__this_01;
  ACHLOMELAJE_o *pAVar2;
  EGMONPGHHDP_o *__this_02;
  
  if ((DAT_045678f0 & 1) == 0) {
                    /* try { // try from 0342dedc to 0352e047 has its CatchHandler @ 0342db40 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045678f0 = 1;
  }
  switch(HIIGJGLEOFH) {
  case 0:
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
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
       (__this_00 = (pAVar2->fields).CKJAGLDEMAE, __this_00 != (NFGLEDADCGL_o *)0x0)) {
      iVar1 = NFGLEDADCGL__DBOOGGKPPIP(__this_00,(MethodInfo *)0x0);
      return iVar1;
    }
    break;
  case 1:
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
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
      iVar1 = ACHLOMELAJE__JNFJHGPHLGC(pAVar2,(MethodInfo *)0x0);
      return iVar1;
    }
    break;
  case 2:
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 0342e048 to 0352e06f has its CatchHandler @ 0342e298 */
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
       (__this_01 = (pAVar2->fields).IMJJJJJMMHL, __this_01 != (FEPPOONJCGI_o *)0x0)) {
      iVar1 = FEPPOONJCGI__NIKBIHOFOOD(__this_01,(MethodInfo *)0x0);
      return iVar1;
    }
    break;
  case 3:
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0342e0a4 to 0352e0cf has its CatchHandler @ 0342e294 */
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
      iVar1 = ACHLOMELAJE__DDKLAHEHGBG(pAVar2,(MethodInfo *)0x0);
      return iVar1;
    }
    break;
  case 4:
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
    if (__this_02 != (EGMONPGHHDP_o *)0x0) {
                    /* try { // try from 0342e10c to 0352e17f has its CatchHandler @ 0342e2ac */
      iVar1 = EGMONPGHHDP__BAOGFDIDOMJ(__this_02,(JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0,(MethodInfo *)0x0)
      ;
      return iVar1;
    }
    break;
  default:
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

