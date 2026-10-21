// MBDJMJLHFOO$$AMMECKCJFAM @ RVA 0x34B175C

void MBDJMJLHFOO__AMMECKCJFAM
               (MBDJMJLHFOO_o *__this,int32_t CIBIKDNNBAM,int32_t IGCGOHHCMHD,bool GCLNGPHDFKM,
               UnityEngine_Vector3_array_array *OCMMDIHLKMH,MethodInfo *method)

{
  uint uVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)IGCGOHHCMHD;
  if ((DAT_04568561 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04568561 = 1;
  }
  if (GCLNGPHDFKM) {
    if (OCMMDIHLKMH == (UnityEngine_Vector3_array_array *)0x0) goto LAB_035b1858;
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = (MethodInfo *)0x0;
    uVar1 = System_Math__Min((int)OCMMDIHLKMH->max_length + -1,CIBIKDNNBAM + 2,(MethodInfo *)0x0);
    if ((uint)OCMMDIHLKMH->max_length <= uVar1) {
LAB_035b1854:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    MBDJMJLHFOO__IDJNOIMDGKJ(__this,OCMMDIHLKMH->m_Items[(int)uVar1],method_00);
    if ((uint)OCMMDIHLKMH->max_length <= uVar1) goto LAB_035b1854;
    MBDJMJLHFOO__IDJNOIMDGKJ(__this,OCMMDIHLKMH->m_Items[(int)uVar1],method_00);
  }
  if (CIBIKDNNBAM <= IGCGOHHCMHD) {
    if (OCMMDIHLKMH == (UnityEngine_Vector3_array_array *)0x0) {
LAB_035b1858:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      if ((uint)OCMMDIHLKMH->max_length <= (uint)CIBIKDNNBAM) goto LAB_035b1854;
      MBDJMJLHFOO__IDJNOIMDGKJ(__this,OCMMDIHLKMH->m_Items[CIBIKDNNBAM],method_00);
      CIBIKDNNBAM = CIBIKDNNBAM + 1;
    } while (CIBIKDNNBAM <= IGCGOHHCMHD);
  }
  return;
}

