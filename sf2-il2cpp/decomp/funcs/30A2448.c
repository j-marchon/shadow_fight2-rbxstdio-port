// HDKIINEJFCF$$MAHFCKJGBPP @ RVA 0x30A2448

void HDKIINEJFCF__MAHFCKJGBPP(HDKIINEJFCF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *KGLJICLJHEL;
  MethodInfo *IDPMJOKDHNP;
  ACHLOMELAJE_o *__this_00;
  LCKCDEKNLOA_o *pLVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  
  if ((DAT_0456614e & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456614e = 1;
  }
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar2 = HDKIINEJFCF__NHGGBEACKBD(__this,method_00);
  KGLJICLJHEL = HDKIINEJFCF__KCHJCGEMCGE(__this,method_01);
  IDPMJOKDHNP = (MethodInfo *)HDKIINEJFCF__CNKOOLDMAGC(__this,method_02);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    method_03 = IDPMJOKDHNP;
    bVar1 = ACHLOMELAJE__KJEEHIIMALL
                      (__this_00,pSVar2,KGLJICLJHEL,(int64_t)IDPMJOKDHNP,(MethodInfo *)0x0);
    if (bVar1) {
      HDKIINEJFCF__BIFBNDJMDJA(pSVar2,KGLJICLJHEL,(int64_t)IDPMJOKDHNP,method_03);
      pLVar3 = (__this->fields).KFJLNJDDGDO;
      if (pLVar3 != (LCKCDEKNLOA_o *)0x0) {
        LCKCDEKNLOA__MAHFCKJGBPP(pLVar3,AAJBIMFNMBB,(MethodInfo *)0x0);
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).FPGPCNBKBDB,(MethodInfo *)0x0);
        if (bVar1) {
          return;
        }
        pSVar2 = (__this->fields).FPGPCNBKBDB;
        if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        PNLFHHJGDLI__CJKCKACIIHK(pSVar2,1.0,1.0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pLVar3 = (__this->fields).MJMJIDBBMON;
      if (pLVar3 != (LCKCDEKNLOA_o *)0x0) {
        LCKCDEKNLOA__MAHFCKJGBPP(pLVar3,AAJBIMFNMBB,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

