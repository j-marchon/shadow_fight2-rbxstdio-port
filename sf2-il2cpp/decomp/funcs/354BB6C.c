// LEGDPJHPEOB$$HOPFJHBDDCA @ RVA 0x354BB6C

HOOAAGABMBL_o *
LEGDPJHPEOB__HOPFJHBDDCA(LEGDPJHPEOB_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  int32_t iVar1;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  int64_t iVar2;
  HOOAAGABMBL_o *pHVar3;
  long lVar4;
  ACHLOMELAJE_o *pAVar5;
  
  if ((DAT_04568b2d & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568b2d = 1;
  }
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
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 = (pAVar5->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
    __this_01 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,IKKAMAMLIKA,(MethodInfo *)0x0);
    if ((__this_01 != (IGFGDDANEPE_o *)0x0) &&
       (((iVar2 = IGFGDDANEPE__OMMIKNKEKJN(__this_01,(MethodInfo *)0x0), 0 < iVar2 &&
         (iVar1 = IGFGDDANEPE__IJNIFKFEGND(__this_01,(MethodInfo *)0x0), 0 < iVar1)) &&
        (pHVar3 = IGFGDDANEPE__DHNBLNPDGMD(__this_01,(MethodInfo *)0x0),
        pHVar3 != (HOOAAGABMBL_o *)0x0)))) {
      lVar4 = (*(pHVar3->klass->vtable)._7_FAOBHLCDKJI.methodPtr)
                        (pHVar3,(pHVar3->klass->vtable)._7_FAOBHLCDKJI.method);
      if (lVar4 != 0) {
        pHVar3 = (__this_01->fields).LFPOIAJDMBK;
        if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0364bc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pHVar3 = (HOOAAGABMBL_o *)
                   (*(pHVar3->klass->vtable)._7_FAOBHLCDKJI.methodPtr)
                             (pHVar3,(pHVar3->klass->vtable)._7_FAOBHLCDKJI.method);
          return pHVar3;
        }
        goto LAB_0364bc7c;
      }
    }
    return (HOOAAGABMBL_o *)0x0;
  }
LAB_0364bc7c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

