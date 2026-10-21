// KAHMAJKJMBK$$MPKILCKIELF @ RVA 0x34C23B8

void KAHMAJKJMBK__MPKILCKIELF(KAHMAJKJMBK_o *__this,CNIGOFCKBGI_o *GOAHBPBJCKC,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  FCJBEKHDLAF_o *pFVar4;
  float fVar5;
  
  if ((DAT_04568612 & 1) == 0) {
    FUN_01bab630(&ACBCKKIEOCE_TypeInfo);
    FUN_01bab630(&APGFNOPIODP_TypeInfo);
    FUN_01bab630(&BDGLOJJKLFN_TypeInfo);
    FUN_01bab630(&EDELKOLBNDG_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568612 = 1;
  }
  if (GOAHBPBJCKC == (CNIGOFCKBGI_o *)0x0) goto LAB_035c2690;
  iVar3 = AJNNHGGLGIF__NHGGBEACKBD((AJNNHGGLGIF_o *)GOAHBPBJCKC,(MethodInfo *)0x0);
  switch(iVar3) {
  case 5:
  case 7:
    if ((GOAHBPBJCKC->fields).EJNOHBNPCGC != false) {
      pFVar4 = (__this->fields).HPKHMGLOLPJ;
      if (pFVar4 == (FCJBEKHDLAF_o *)0x0) goto LAB_035c2690;
      FCJBEKHDLAF__AGEFBLEDMBG(pFVar4,(GOAHBPBJCKC->fields).JGJNBILDCHK,(MethodInfo *)0x0);
    }
    break;
  case 6:
  case 10:
  case 0xb:
  case 0xc:
  case 0xf:
    goto switchD_035c244c_caseD_6;
  case 8:
  case 0x11:
    break;
  case 9:
    bVar1 = (BDGLOJJKLFN_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)BDGLOJJKLFN_TypeInfo)) {
LAB_035c2684:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(GOAHBPBJCKC);
    }
    fVar5 = *(float *)((long)&GOAHBPBJCKC[1].klass + 4);
    goto LAB_035c251c;
  case 0xd:
  case 0x10:
    KAHMAJKJMBK__ELANNLDAPMK(__this,(GOAHBPBJCKC->fields).JGJNBILDCHK,method);
    return;
  case 0xe:
    bVar1 = (APGFNOPIODP_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)APGFNOPIODP_TypeInfo)) goto LAB_035c2684;
    fVar5 = *(float *)&GOAHBPBJCKC[1].klass;
LAB_035c251c:
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar3 = MGNPHCAAEIO__PCJHAMFGJLP((MethodInfo *)0x0);
    pFVar4 = (__this->fields).HPKHMGLOLPJ;
    if (pFVar4 == (FCJBEKHDLAF_o *)0x0) goto LAB_035c2690;
    bVar2 = FCJBEKHDLAF__IKKHECKCEJC
                      (pFVar4,(GOAHBPBJCKC->fields).JGJNBILDCHK,fVar5 / (float)iVar3,
                       (MethodInfo *)0x0);
    if (!bVar2) {
switchD_035c244c_caseD_6:
      return;
    }
    break;
  case 0x12:
    bVar1 = (EDELKOLBNDG_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)EDELKOLBNDG_TypeInfo)) goto LAB_035c2684;
    pFVar4 = (__this->fields).HPKHMGLOLPJ;
    if (pFVar4 == (FCJBEKHDLAF_o *)0x0) goto LAB_035c2690;
    FCJBEKHDLAF__ECIPOHEPGDC
              (pFVar4,*(int32_t *)((long)&GOAHBPBJCKC[1].klass + 4),
               *(int32_t *)&GOAHBPBJCKC[1].monitor,(MethodInfo *)0x0);
    bVar1 = (EDELKOLBNDG_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)EDELKOLBNDG_TypeInfo)) goto LAB_035c2684;
    if (*(char *)&GOAHBPBJCKC[1].fields.super.super.GMPFJFBFHCH == '\0') {
      return;
    }
    break;
  default:
    if (2 < iVar3 - 0x1aU) {
      if (iVar3 != 0x20) {
        return;
      }
      bVar1 = (ACBCKKIEOCE_TypeInfo->_2).naturalAligment;
      if (bVar1 <= (GOAHBPBJCKC->klass->_2).naturalAligment) {
                    /* try { // try from 035c2618 to 036c263f has its CatchHandler @ 035c282c */
        pFVar4 = (__this->fields).HPKHMGLOLPJ;
        if ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)ACBCKKIEOCE_TypeInfo) {
          GOAHBPBJCKC = (CNIGOFCKBGI_o *)0x0;
        }
        if ((pFVar4 != (FCJBEKHDLAF_o *)0x0) &&
           ((ACBCKKIEOCE_o *)GOAHBPBJCKC != (ACBCKKIEOCE_o *)0x0)) {
          ACBCKKIEOCE__GEJLNIHIFPC
                    ((ACBCKKIEOCE_o *)GOAHBPBJCKC,(pFVar4->fields).LAMENNMGPBN,(MethodInfo *)0x0);
          pFVar4 = (__this->fields).HPKHMGLOLPJ;
          if (pFVar4 != (FCJBEKHDLAF_o *)0x0) {
            ACBCKKIEOCE__GEJLNIHIFPC
                      ((ACBCKKIEOCE_o *)GOAHBPBJCKC,(pFVar4->fields).CLEKIBBCAOJ,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto LAB_035c2690;
    }
  }
  pFVar4 = (__this->fields).HPKHMGLOLPJ;
  if (pFVar4 != (FCJBEKHDLAF_o *)0x0) {
                    /* try { // try from 035c2674 to 036c269f has its CatchHandler @ 035c2828 */
    FCJBEKHDLAF__CJLHJNADPAN(pFVar4,GOAHBPBJCKC,(MethodInfo *)0x0);
    return;
  }
LAB_035c2690:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

