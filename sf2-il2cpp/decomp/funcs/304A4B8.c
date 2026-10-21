// EGMONPGHHDP$$BAOGFDIDOMJ @ RVA 0x304A4B8

int32_t EGMONPGHHDP__BAOGFDIDOMJ
                  (EGMONPGHHDP_o *__this,JMDPBFOCHHP_CKEMIAEPGKD_o *CLDEGLBDGGE,MethodInfo *method)

{
  bool DIGCHEFGCAA;
  bool bVar1;
  int32_t BHFLMNBKDAA;
  KEGDLHPEJBG_o *pKVar2;
  undefined8 extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x4;
  System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *pSVar3;
  int iVar4;
  int JLAFGLDIFOC;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = CLDEGLBDGGE;
  auVar5._0_8_ = __this;
  if ((DAT_04565e13 & 1) == 0) {
    auVar5 = FUN_01bab630(&
                          Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Count__
                         );
    DAT_04565e13 = 1;
  }
  if (CLDEGLBDGGE == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
    CLDEGLBDGGE = EGMONPGHHDP__OKBKFJKEAAG(__this,auVar5._8_8_);
    auVar5._8_8_ = extraout_x1;
    auVar5._0_8_ = CLDEGLBDGGE;
  }
  pKVar2 = EGMONPGHHDP__NJNOLNHFOPK(auVar5._0_8_,auVar5._8_8_);
  if ((CLDEGLBDGGE != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) && (pKVar2 != (KEGDLHPEJBG_o *)0x0)) {
    BHFLMNBKDAA = EGMONPGHHDP__CJINGJONNEI(__this,method_00);
    DIGCHEFGCAA = EGMONPGHHDP__PJKNOEOGFNM(__this,method_01);
    pSVar3 = (CLDEGLBDGGE->fields).GPNNHMIJLGL;
    if (pSVar3 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0) {
      iVar4 = 0;
      JLAFGLDIFOC = 0;
      do {
        if ((pSVar3->fields)._size <= JLAFGLDIFOC) {
          return iVar4;
        }
        bVar1 = EGMONPGHHDP__LKMGFEDIOAC(__this,JLAFGLDIFOC,BHFLMNBKDAA,DIGCHEFGCAA,in_x4);
        pSVar3 = (CLDEGLBDGGE->fields).GPNNHMIJLGL;
        iVar4 = iVar4 + (uint)bVar1;
        JLAFGLDIFOC = JLAFGLDIFOC + 1;
      } while (pSVar3 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 0;
}

