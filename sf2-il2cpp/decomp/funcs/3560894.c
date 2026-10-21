// Nekki.SF2.Core.Fights.ModelContainer$$DIDHPPFOFHC @ RVA 0x3560894

HOOAAGABMBL_o *
Nekki_SF2_Core_Fights_ModelContainer__DIDHPPFOFHC
          (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  byte bVar1;
  HOOAAGABMBL_o *pHVar2;
  KKEKJDLEJIL_o *pKVar3;
  HOOAAGABMBL_o *pHVar4;
  PJKHAJKEHEL_o *pPVar5;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = __this;
  if ((DAT_04568bce & 1) == 0) {
    auVar6 = FUN_01bab630(&ADGIHFGIFHO_TypeInfo);
    DAT_04568bce = 1;
  }
  pHVar2 = auVar6._0_8_;
  pKVar3 = (__this->fields).ALMHAKDJNDJ;
  if ((pKVar3 != (KKEKJDLEJIL_o *)0x0) &&
     (pPVar5 = (__this->fields).MFLNIMCFPDK, pPVar5 != (PJKHAJKEHEL_o *)0x0)) {
    pHVar2 = (pKVar3->fields).PEMECEBIJDM;
    if (((pHVar2 == (pPVar5->fields).PEMECEBIJDM) &&
        (((pHVar2 = (pKVar3->fields).IIDEPPHFJPA, pHVar2 == (pPVar5->fields).IIDEPPHFJPA &&
          (pHVar2 = (pKVar3->fields).HLAAFCIMBAP, pHVar2 == (pPVar5->fields).HLAAFCIMBAP)) &&
         (pHVar2 = (pKVar3->fields).GCPBHJOPMJE, pHVar2 == (pPVar5->fields).GCPBHJOPMJE)))) &&
       (((pHVar2 = (pKVar3->fields).PNAAPNFPCPI, pHVar2 == (pPVar5->fields).PNAAPNFPCPI &&
         (pHVar2 = (pKVar3->fields).AIDDHEHFBEG, pHVar2 == (pPVar5->fields).AIDDHEHFBEG)) &&
        (pHVar2 = (pKVar3->fields).NBHGHLIPCAP, pHVar2 == (pPVar5->fields).NBHGHLIPCAP)))) {
      bVar1 = (ADGIHFGIFHO_TypeInfo->_2).naturalAligment;
      if ((pPVar5->klass->_2).naturalAligment < bVar1) {
        pHVar2 = (HOOAAGABMBL_o *)0x0;
      }
      else {
        pHVar2 = (HOOAAGABMBL_o *)0x0;
        if ((pPVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)ADGIHFGIFHO_TypeInfo) {
          if (pPVar5 == (PJKHAJKEHEL_o *)0x0) goto LAB_036609a4;
          pHVar4 = (pKVar3->fields).GFNKONPLPEB;
          pHVar2 = (HOOAAGABMBL_o *)0x0;
          if (pHVar4 != (HOOAAGABMBL_o *)pPVar5[1].klass) {
            pHVar2 = pHVar4;
          }
        }
      }
    }
    return pHVar2;
  }
LAB_036609a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(pHVar2,auVar6._8_8_);
}

