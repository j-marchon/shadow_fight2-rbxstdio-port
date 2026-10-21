// TypeDefIndex 3130
// Namespace: 
// public class JBCGDIEHOHH
// Fields:
//   public MCCHIAKPFEL KGPGBOHAFOL; // 0x10
//   public MCCHIAKPFEL FJKBLKIBABM; // 0x18
//   public MCCHIAKPFEL PHIFOIKLPLI; // 0x20

// ===== public void .ctor(XmlNode AHDGNOJPPIB, ushort JDIHKNKFJMK, ushort EHEFEIEKHJO)  [RVA 0x34D26F8]
// JBCGDIEHOHH$$.ctor @ RVA 0x34D26F8

void JBCGDIEHOHH___ctor(JBCGDIEHOHH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,uint16_t JDIHKNKFJMK
                       ,uint16_t EHEFEIEKHJO,MethodInfo *method)

{
  MCCHIAKPFEL_o *pMVar1;
  System_Xml_XmlNode_o *pSVar2;
  
  if ((DAT_045686c1 & 1) == 0) {
    FUN_01bab630(&MCCHIAKPFEL_TypeInfo);
    FUN_01bab630(&StringLiteral_5624/*"EclipseModeReward"*/);
    FUN_01bab630(&StringLiteral_9572/*"NormalModeReward"*/);
    DAT_045686c1 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pMVar1 = (MCCHIAKPFEL_o *)thunk_FUN_01bda818(MCCHIAKPFEL_TypeInfo);
  MCCHIAKPFEL___ctor(pMVar1,AHDGNOJPPIB,JDIHKNKFJMK,EHEFEIEKHJO,(MethodInfo *)0x0);
  (__this->fields).KGPGBOHAFOL = pMVar1;
  thunk_FUN_01c20e04(&__this->fields,pMVar1);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_9572/*"NormalModeReward"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (pSVar2 == (System_Xml_XmlNode_o *)0x0) {
      (__this->fields).FJKBLKIBABM = (MCCHIAKPFEL_o *)0x0;
      pMVar1 = (MCCHIAKPFEL_o *)0x0;
    }
    else {
      pMVar1 = (MCCHIAKPFEL_o *)thunk_FUN_01bda818(MCCHIAKPFEL_TypeInfo);
      MCCHIAKPFEL___ctor(pMVar1,pSVar2,JDIHKNKFJMK,EHEFEIEKHJO,(MethodInfo *)0x0);
      (__this->fields).FJKBLKIBABM = pMVar1;
    }
    thunk_FUN_01c20e04(&(__this->fields).FJKBLKIBABM,pMVar1);
    pSVar2 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_5624/*"EclipseModeReward"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (pSVar2 == (System_Xml_XmlNode_o *)0x0) {
      (__this->fields).PHIFOIKLPLI = (MCCHIAKPFEL_o *)0x0;
      pMVar1 = (MCCHIAKPFEL_o *)0x0;
    }
    else {
      pMVar1 = (MCCHIAKPFEL_o *)thunk_FUN_01bda818(MCCHIAKPFEL_TypeInfo);
      MCCHIAKPFEL___ctor(pMVar1,pSVar2,JDIHKNKFJMK,EHEFEIEKHJO,(MethodInfo *)0x0);
      (__this->fields).PHIFOIKLPLI = pMVar1;
    }
    thunk_FUN_01c20e04(&(__this->fields).PHIFOIKLPLI,pMVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public JHBHHHKEFOO ALLFNDNBMCO(int JLAFGLDIFOC)  [RVA 0x34D2884]
// JBCGDIEHOHH$$ALLFNDNBMCO @ RVA 0x34D2884

JHBHHHKEFOO_o *
JBCGDIEHOHH__ALLFNDNBMCO(JBCGDIEHOHH_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  long lVar1;
  JHBHHHKEFOO_o *__this_00;
  MCCHIAKPFEL_o *pMVar2;
  JHBHHHKEFOO_o *NNHNNAKKKPL;
  Roster_o *pAVar3;
  
  if ((DAT_045686c2 & 1) == 0) {
    FUN_01bab630(&JHBHHHKEFOO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045686c2 = 1;
  }
  __this_00 = (JHBHHHKEFOO_o *)thunk_FUN_01bda818(JHBHHHKEFOO_TypeInfo);
  JHBHHHKEFOO___ctor(__this_00,(MethodInfo *)0x0);
  pMVar2 = (__this->fields).KGPGBOHAFOL;
  if (pMVar2 != (MCCHIAKPFEL_o *)0x0) {
    __this_00 = MCCHIAKPFEL__ALLFNDNBMCO(pMVar2,JLAFGLDIFOC,(MethodInfo *)0x0);
    if (__this_00 == (JHBHHHKEFOO_o *)0x0) goto LAB_035d29b8;
    (__this_00->fields).GICDEKDNADC = true;
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
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar3 != (Roster_o *)0x0) {
    lVar1 = 0x18;
    if ((pAVar3->fields).IOHEOKOOJFA != false) {
      lVar1 = 0x20;
    }
    pMVar2 = *(MCCHIAKPFEL_o **)((long)&__this->klass + lVar1);
    if (pMVar2 != (MCCHIAKPFEL_o *)0x0) {
      NNHNNAKKKPL = MCCHIAKPFEL__ALLFNDNBMCO(pMVar2,JLAFGLDIFOC,(MethodInfo *)0x0);
      if ((NNHNNAKKKPL == (JHBHHHKEFOO_o *)0x0) ||
         ((NNHNNAKKKPL->fields).GICDEKDNADC = true, __this_00 == (JHBHHHKEFOO_o *)0x0))
      goto LAB_035d29b8;
      JHBHHHKEFOO__KAOJCFCELIB(__this_00,NNHNNAKKKPL,(MethodInfo *)0x0);
    }
    return __this_00;
  }
LAB_035d29b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x34D29BC]
// JBCGDIEHOHH$$RandomizeObscuredVars @ RVA 0x34D29BC

void JBCGDIEHOHH__RandomizeObscuredVars(JBCGDIEHOHH_o *__this,MethodInfo *method)

{
  MCCHIAKPFEL_o *pMVar1;
  
  pMVar1 = (__this->fields).KGPGBOHAFOL;
  if (pMVar1 != (MCCHIAKPFEL_o *)0x0) {
    MCCHIAKPFEL__RandomizeObscuredVars(pMVar1,(MethodInfo *)0x0);
  }
  pMVar1 = (__this->fields).FJKBLKIBABM;
  if (pMVar1 != (MCCHIAKPFEL_o *)0x0) {
    MCCHIAKPFEL__RandomizeObscuredVars(pMVar1,(MethodInfo *)0x0);
  }
  pMVar1 = (__this->fields).PHIFOIKLPLI;
  if (pMVar1 != (MCCHIAKPFEL_o *)0x0) {
    MCCHIAKPFEL__RandomizeObscuredVars(pMVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}

