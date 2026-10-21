// Nekki.SF2.Core.Fights.ModelContainer$$IsItemDiffer @ RVA 0x3561400

bool Nekki_SF2_Core_Fights_ModelContainer__IsItemDiffer
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,PJKHAJKEHEL_o *OKBIKHHKOEN,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_00;
  MethodInfo *in_x3;
  KKEKJDLEJIL_o *pKVar3;
  
  __this_00 = __this;
  if ((DAT_04568bc7 & 1) == 0) {
    __this_00 = (Nekki_SF2_Core_Fights_ModelContainer_o *)FUN_01bab630(&ADGIHFGIFHO_TypeInfo);
    DAT_04568bc7 = 1;
  }
  pKVar3 = (__this->fields).ALMHAKDJNDJ;
  if ((pKVar3 != (KKEKJDLEJIL_o *)0x0) && (OKBIKHHKOEN != (PJKHAJKEHEL_o *)0x0)) {
    bVar2 = Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
                      (__this_00,(pKVar3->fields).PEMECEBIJDM,(OKBIKHHKOEN->fields).PEMECEBIJDM,
                       in_x3);
    if (!bVar2) {
      pKVar3 = (__this->fields).ALMHAKDJNDJ;
      if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_03661540;
      bVar2 = Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
                        ((Nekki_SF2_Core_Fights_ModelContainer_o *)0x0,(pKVar3->fields).IIDEPPHFJPA,
                         (OKBIKHHKOEN->fields).IIDEPPHFJPA,in_x3);
      if (!bVar2) {
        pKVar3 = (__this->fields).ALMHAKDJNDJ;
        if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_03661540;
        bVar2 = Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
                          ((Nekki_SF2_Core_Fights_ModelContainer_o *)0x0,
                           (pKVar3->fields).HLAAFCIMBAP,(OKBIKHHKOEN->fields).HLAAFCIMBAP,in_x3);
        if (!bVar2) {
          pKVar3 = (__this->fields).ALMHAKDJNDJ;
          if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_03661540;
          bVar2 = Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
                            ((Nekki_SF2_Core_Fights_ModelContainer_o *)0x0,
                             (pKVar3->fields).GCPBHJOPMJE,(OKBIKHHKOEN->fields).GCPBHJOPMJE,in_x3);
          if (!bVar2) {
            pKVar3 = (__this->fields).ALMHAKDJNDJ;
            if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_03661540;
            bVar2 = Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
                              ((Nekki_SF2_Core_Fights_ModelContainer_o *)0x0,
                               (pKVar3->fields).PNAAPNFPCPI,(OKBIKHHKOEN->fields).PNAAPNFPCPI,in_x3)
            ;
            if (!bVar2) {
              pKVar3 = (__this->fields).ALMHAKDJNDJ;
              if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_03661540;
              bVar2 = Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
                                ((Nekki_SF2_Core_Fights_ModelContainer_o *)0x0,
                                 (pKVar3->fields).AIDDHEHFBEG,(OKBIKHHKOEN->fields).AIDDHEHFBEG,
                                 in_x3);
              if (!bVar2) {
                pKVar3 = (__this->fields).ALMHAKDJNDJ;
                if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_03661540;
                bVar2 = Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
                                  ((Nekki_SF2_Core_Fights_ModelContainer_o *)0x0,
                                   (pKVar3->fields).NBHGHLIPCAP,(OKBIKHHKOEN->fields).NBHGHLIPCAP,
                                   in_x3);
                if (!bVar2) {
                  bVar1 = (ADGIHFGIFHO_TypeInfo->_2).naturalAligment;
                  if ((bVar1 <= (OKBIKHHKOEN->klass->_2).naturalAligment) &&
                     ((OKBIKHHKOEN->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                      (Il2CppClass *)ADGIHFGIFHO_TypeInfo)) {
                    pKVar3 = (__this->fields).ALMHAKDJNDJ;
                    if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_03661540;
                    bVar2 = Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
                                      ((Nekki_SF2_Core_Fights_ModelContainer_o *)(ulong)bVar2,
                                       (pKVar3->fields).GFNKONPLPEB,
                                       (HOOAAGABMBL_o *)OKBIKHHKOEN[1].klass,in_x3);
                    if (bVar2) {
                      return true;
                    }
                  }
                  return false;
                }
              }
            }
          }
        }
      }
    }
    return true;
  }
LAB_03661540:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

