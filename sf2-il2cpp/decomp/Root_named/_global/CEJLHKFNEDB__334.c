// TypeDefIndex 334
// Namespace: 
// public static class CEJLHKFNEDB
// Fields:
//   private const int DNFDNAFNGIP = 10;

// ===== public static void CGHDMDIPCOO()  [RVA 0x334C6D4]
// CEJLHKFNEDB$$CGHDMDIPCOO @ RVA 0x334C6D4

void CEJLHKFNEDB__CGHDMDIPCOO(MethodInfo *method)

{
  if ((DAT_04567a07 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567a07 = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  PNLFHHJGDLI__GIENGNEGHPJ((MethodInfo *)0x0);
  if (DAT_04567a75 == '\0') {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567a75 = '\x01';
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  PNLFHHJGDLI_TypeInfo->static_fields->BLMPLPPHAGO = 10;
  EDFDANKEBGF__CEKNJCDGDCM((MethodInfo *)0x0);
  return;
}


// ===== public static void ALBBKOHFKLF()  [RVA 0x334C76C]
// CEJLHKFNEDB$$ALBBKOHFKLF @ RVA 0x334C76C

void CEJLHKFNEDB__ALBBKOHFKLF(MethodInfo *method)

{
  EDFDANKEBGF__CEKNJCDGDCM((MethodInfo *)0x0);
  return;
}


// ===== public static void CGHDMDIPCOO(uint IIOHCNMJPCO)  [RVA 0x334C774]
// CEJLHKFNEDB$$CGHDMDIPCOO @ RVA 0x334C774

void CEJLHKFNEDB__CGHDMDIPCOO(uint32_t IIOHCNMJPCO,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567a08 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567a08 = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  PNLFHHJGDLI_TypeInfo->static_fields->BLMPLPPHAGO = IIOHCNMJPCO;
  return;
}


// ===== public static void LHHONKDEIHC()  [RVA 0x334C7D0]
// CEJLHKFNEDB$$LHHONKDEIHC @ RVA 0x334C7D0

void CEJLHKFNEDB__LHHONKDEIHC(MethodInfo *method)

{
  if ((DAT_04567a09 & 1) == 0) {
    FUN_01bab630(&AnimationData_TypeInfo);
    DAT_04567a09 = 1;
  }
  if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AnimationData__BKCFPHNEONL((MethodInfo *)0x0);
  return;
}


// ===== public static void NDIKMGDFKJD()  [RVA 0x334C820]
// CEJLHKFNEDB$$NDIKMGDFKJD @ RVA 0x334C820

void CEJLHKFNEDB__NDIKMGDFKJD(MethodInfo *method)

{
  if ((DAT_04567a0a & 1) == 0) {
    FUN_01bab630(&AiData_TypeInfo);
    DAT_04567a0a = 1;
  }
  if ((AiData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AiData__BKCFPHNEONL((MethodInfo *)0x0);
  return;
}


// ===== public static void JAGMOPPIMKB(string GMGGINDHNPI)  [RVA 0x334C870]
// CEJLHKFNEDB$$JAGMOPPIMKB @ RVA 0x334C870

void CEJLHKFNEDB__JAGMOPPIMKB(System_String_o *GMGGINDHNPI,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Xml_XmlDocument_o *EKEMDOEAFHP;
  long *plVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567a0b & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21892/*"users.xml"*/);
    FUN_01bab630(&StringLiteral_22364/*"{0}/{1}"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_11416/*"Root"*/);
    FUN_01bab630(&StringLiteral_21895/*"users_backup.xml"*/);
    FUN_01bab630(&StringLiteral_14765/*"Version"*/);
    FUN_01bab630(&StringLiteral_14775/*"Versions"*/);
    DAT_04567a0b = 1;
    method = extraout_x1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SF2Paths_TypeInfo,method);
  }
  pSVar2 = SF2Paths__CPIACIDINLI((MethodInfo *)0x0);
  EKEMDOEAFHP = GIAMPEGMNHE__GMNIIJJFIJK(pSVar2,StringLiteral_21892/*"users.xml"*/,0,true,(MethodInfo *)0x0);
  if (EKEMDOEAFHP == (System_Xml_XmlDocument_o *)0x0) {
    return;
  }
  plVar3 = (long *)(*(EKEMDOEAFHP->klass->vtable)._51_get_Item.methodPtr)
                             (EKEMDOEAFHP,StringLiteral_11416/*"Root"*/,
                              (EKEMDOEAFHP->klass->vtable)._51_get_Item.method);
  if (((plVar3 == (long *)0x0) ||
      (plVar3 = (long *)(**(code **)(*plVar3 + 0x468))
                                  (plVar3,StringLiteral_14775/*"Versions"*/,*(undefined8 *)(*plVar3 + 0x470)),
      plVar3 == (long *)0x0)) ||
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x468))
                                 (plVar3,StringLiteral_14765/*"Version"*/,*(undefined8 *)(*plVar3 + 0x470)),
     plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (**(code **)(*plVar3 + 0x558))
            (plVar3,StringLiteral_14694/*"Value"*/,GMGGINDHNPI,*(undefined8 *)(*plVar3 + 0x560));
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = SF2Paths__CPIACIDINLI((MethodInfo *)0x0);
  pSVar2 = System_String__Format
                     (StringLiteral_22364/*"{0}/{1}"*/,(Il2CppObject *)pSVar2,(Il2CppObject *)StringLiteral_21892/*"users.xml"*/
                      ,(MethodInfo *)0x0);
  pSVar4 = SF2Paths__CPIACIDINLI((MethodInfo *)0x0);
  pSVar4 = System_String__Format
                     (StringLiteral_22364/*"{0}/{1}"*/,(Il2CppObject *)pSVar4,StringLiteral_21895/*"users_backup.xml"*/,
                      (MethodInfo *)0x0);
  GIAMPEGMNHE__DGLLHFNFGNO(EKEMDOEAFHP,pSVar2,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = NLPJLHOEAOE__LJAKPLJDGBJ((MethodInfo *)0x0);
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOOEOHKLOFJ_TypeInfo);
  }
  bVar1 = EOOEOHKLOFJ__EGFIEDINDAC(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  GIAMPEGMNHE__DGLLHFNFGNO(EKEMDOEAFHP,pSVar4,(MethodInfo *)0x0);
  return;
}

