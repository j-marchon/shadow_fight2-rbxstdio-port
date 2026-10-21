// OLKKAIFGGAK$$DJIFEKKEMGN @ RVA 0x34ED2BC

bool OLKKAIFGGAK__DJIFEKKEMGN
               (OLKKAIFGGAK_o *__this,OLKKAIFGGAK_o *JALKELIHLPC,bool JGBNEAKJCIO,MethodInfo *method
               )

{
  MDAPDLLMOMF_o *LEAMIBIAIIN;
  byte bVar1;
  bool bVar2;
  OPNFCOGALLI_o *pOVar3;
  MDAPDLLMOMF_o *HGHDNFCKJFL;
  JADGCGOJLJB_o *pJVar4;
  MCIBPLJEFLJ_o *__this_00;
  MDAPDLLMOMF_o *LEAMIBIAIIN_00;
  System_Collections_Generic_List_string__o *OKAINPMIKKD;
  int iVar5;
  
  if ((DAT_0456879b & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&MDAPDLLMOMF_TypeInfo);
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_0456879b = 1;
  }
  pOVar3 = (__this->fields).OAKOFJJIOFF;
  if (pOVar3 == (OPNFCOGALLI_o *)0x0) {
LAB_035ed530:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  HGHDNFCKJFL = (MDAPDLLMOMF_o *)OPNFCOGALLI__HIMFHBJAEMJ(pOVar3,4,(MethodInfo *)0x0);
  if (HGHDNFCKJFL == (MDAPDLLMOMF_o *)0x0) {
    return false;
  }
  bVar1 = (MDAPDLLMOMF_TypeInfo->_2).naturalAligment;
  if ((HGHDNFCKJFL->klass->_2).naturalAligment < bVar1) {
    return false;
  }
  LEAMIBIAIIN = HGHDNFCKJFL;
  if ((HGHDNFCKJFL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)MDAPDLLMOMF_TypeInfo) {
    LEAMIBIAIIN = (MDAPDLLMOMF_o *)0x0;
  }
  if (LEAMIBIAIIN == (MDAPDLLMOMF_o *)0x0) {
    return false;
  }
                    /* try { // try from 035ed374 to 036ed37b has its CatchHandler @ 035ed630 */
  if (((JALKELIHLPC == (OLKKAIFGGAK_o *)0x0) &&
      (JALKELIHLPC = (__this->fields).BPJMMBGIMNC, JALKELIHLPC == (OLKKAIFGGAK_o *)0x0)) ||
     (pOVar3 = (JALKELIHLPC->fields).OAKOFJJIOFF, pOVar3 == (OPNFCOGALLI_o *)0x0))
  goto LAB_035ed530;
                    /* try { // try from 035ed38c to 036ed39b has its CatchHandler @ 035ed5d4 */
  pJVar4 = OPNFCOGALLI__HIMFHBJAEMJ(pOVar3,6,(MethodInfo *)0x0);
  if (pJVar4 != (JADGCGOJLJB_o *)0x0) {
    if ((LEAMIBIAIIN->fields).NELGLPNGJNH == false) {
      return false;
    }
                    /* try { // try from 035ed39c to 036ed3e7 has its CatchHandler @ 035ed184 */
    OKAINPMIKKD = (LEAMIBIAIIN->fields).FLAMMJFKMDO;
    if (OKAINPMIKKD == (System_Collections_Generic_List_string__o *)0x0) goto LAB_035ed530;
    if ((OKAINPMIKKD->fields)._size != 0) {
      pOVar3 = (JALKELIHLPC->fields).OAKOFJJIOFF;
      if (pOVar3 == (OPNFCOGALLI_o *)0x0) goto LAB_035ed530;
      bVar2 = OPNFCOGALLI__HIEIGJFFBFA(pOVar3,OKAINPMIKKD,(MethodInfo *)0x0);
      if (!bVar2) {
        return false;
      }
    }
  }
  pOVar3 = (__this->fields).OAKOFJJIOFF;
  if ((pOVar3 == (OPNFCOGALLI_o *)0x0) ||
     (__this_00 = (__this->fields).NKOKFFDMNJF, __this_00 == (MCIBPLJEFLJ_o *)0x0))
  goto LAB_035ed530;
  bVar2 = MCIBPLJEFLJ__BDHAMOEKNNK
                    (__this_00,(JALKELIHLPC->fields).HMIAFJALFCJ,(pOVar3->fields).HALIJPAEEBE,
                     (JADGCGOJLJB_o *)HGHDNFCKJFL,(MethodInfo *)0x0);
  if (!bVar2) {
    return bVar2;
  }
                    /* try { // try from 035ed3e8 to 036ed3ef has its CatchHandler @ 035ed5d8 */
  if (JGBNEAKJCIO) {
    return bVar2;
  }
  OLKKAIFGGAK__MNMFAALCGDH(__this,JALKELIHLPC,LEAMIBIAIIN,(MethodInfo *)HGHDNFCKJFL);
                    /* try { // try from 035ed400 to 036ed40f has its CatchHandler @ 035ed5d0 */
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035ed410 to 036ed5ef has its CatchHandler @ 035ed184 */
    thunk_FUN_01ba7564();
  }
  if (DAT_04565ff1 == '\0') {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04565ff1 = '\x01';
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField == false) {
    return true;
  }
  pOVar3 = (JALKELIHLPC->fields).OAKOFJJIOFF;
  if (pOVar3 == (OPNFCOGALLI_o *)0x0) goto LAB_035ed530;
  LEAMIBIAIIN_00 = (MDAPDLLMOMF_o *)OPNFCOGALLI__HIMFHBJAEMJ(pOVar3,4,(MethodInfo *)0x0);
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo);
  }
  if (LEAMIBIAIIN_00 != (MDAPDLLMOMF_o *)0x0) {
    bVar1 = (MDAPDLLMOMF_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (((JADGCGOJLJB_c *)LEAMIBIAIIN_00->klass)->_2).naturalAligment) {
      if ((((JADGCGOJLJB_c *)LEAMIBIAIIN_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)MDAPDLLMOMF_TypeInfo) {
        LEAMIBIAIIN_00 = (MDAPDLLMOMF_o *)0x0;
      }
      goto LAB_035ed4dc;
    }
  }
  LEAMIBIAIIN_00 = (MDAPDLLMOMF_o *)0x0;
LAB_035ed4dc:
  bVar2 = FCJBEKHDLAF__HPJFJDGIOIF(LEAMIBIAIIN_00,(MethodInfo *)0x0);
  if (!bVar2) {
    iVar5 = 0;
    while( true ) {
      if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (NJNCPNBIPCD_TypeInfo->static_fields->JHMDBNGCKNN <= iVar5) break;
      OLKKAIFGGAK__MNMFAALCGDH(__this,JALKELIHLPC,LEAMIBIAIIN,(MethodInfo *)HGHDNFCKJFL);
      iVar5 = iVar5 + 1;
    }
  }
  return true;
}

