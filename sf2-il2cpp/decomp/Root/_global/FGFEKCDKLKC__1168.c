// TypeDefIndex 1168
// Namespace: 
// public class FGFEKCDKLKC : BOFEMGGNODC
// Fields:

// ===== public void .ctor()  [RVA 0x3105F90]
// FGFEKCDKLKC$$.ctor @ RVA 0x3105F90

void FGFEKCDKLKC___ctor(FGFEKCDKLKC_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3105F98]
// FGFEKCDKLKC$$MAHFCKJGBPP @ RVA 0x3105F98

void FGFEKCDKLKC__MAHFCKJGBPP(FGFEKCDKLKC_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  NFGLEDADCGL_o *__this_00;
  ACHLOMELAJE_o *pAVar1;
  
  if ((DAT_04566507 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566507 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
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
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
    __this_00 = (pAVar1->fields).CKJAGLDEMAE;
    if (__this_00 == (NFGLEDADCGL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    NFGLEDADCGL__JHJPKAJCJHF(__this_00,(MethodInfo *)0x0);
  }
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

