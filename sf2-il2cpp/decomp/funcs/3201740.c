// NLPJLHOEAOE$$KIMLAFOBHFI @ RVA 0x3201740

void NLPJLHOEAOE__KIMLAFOBHFI(AFFHKININGD_o *MHOFCOHFCGL,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  OOMHDDBCBJP_o *pOVar5;
  undefined8 uVar6;
  int32_t iVar7;
  OOMHDDBCBJP_c *pOVar8;
  PAMEPBLOLPB_o *pPVar9;
  undefined1 auVar10 [16];
  
  auVar10._8_8_ = method;
  auVar10._0_8_ = MHOFCOHFCGL;
  if ((DAT_04566e03 & 1) == 0) {
    auVar10 = FUN_01bab630(&PMFNDKKBEKN_TypeInfo);
    DAT_04566e03 = 1;
  }
  uVar6 = auVar10._0_8_;
  if (MHOFCOHFCGL != (AFFHKININGD_o *)0x0) {
    iVar1 = (MHOFCOHFCGL->fields).MKMGFKDKKBG;
    if ((((iVar1 < 1) ||
         (pPVar9 = (MHOFCOHFCGL->fields).JPBIBBBMCCD, pPVar9 == (PAMEPBLOLPB_o *)0x0)) ||
        (uVar2 = (MHOFCOHFCGL->fields).JDNKKGPNHPB, uVar2 == 7)) ||
       ((pPVar9->fields).AAECGBAMDEL < iVar1)) {
      bVar4 = AFFHKININGD__MMIMAJHGCFC(MHOFCOHFCGL,(MethodInfo *)0x0);
      if (bVar4) {
        iVar7 = 2;
      }
      else {
        iVar7 = 3;
      }
    }
    else {
      if ((uVar2 < 0x14) && ((1 << (ulong)(uVar2 & 0x1f) & 0x80600U) != 0)) {
        pOVar5 = (MHOFCOHFCGL->fields).IFJLLGPGMHM;
        uVar6 = 0;
        if (pOVar5 != (OOMHDDBCBJP_o *)0x0) {
          pOVar8 = pOVar5->klass;
          bVar3 = (PMFNDKKBEKN_TypeInfo->_2).naturalAligment;
          if ((bVar3 <= (pOVar8->_2).naturalAligment) &&
             ((pOVar8->_2).typeHierarchy[(ulong)bVar3 - 1] == (Il2CppClass *)PMFNDKKBEKN_TypeInfo))
          {
                    /* WARNING: Could not recover jumptable at 0x03301838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pOVar8[1]._1.image)(pOVar5,MHOFCOHFCGL,pOVar8[1]._1.gc_desc);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        goto LAB_03301844;
      }
      iVar7 = 1;
    }
    (MHOFCOHFCGL->fields).HHJIJKJCEOF = iVar7;
    return;
  }
LAB_03301844:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar6,auVar10._8_8_);
}

