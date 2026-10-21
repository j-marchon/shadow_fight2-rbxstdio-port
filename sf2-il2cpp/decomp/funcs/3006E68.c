// Nekki.SF2.GUI.Shop.InfoPanelContent$$KGKJDFLBLNM @ RVA 0x3006E68

void Nekki_SF2_GUI_Shop_InfoPanelContent__KGKJDFLBLNM
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,int32_t CPECAEHDDDB,
               int32_t CJNHFNHJHPE,int64_t PGGOPJDLPDI,int64_t MMDLBPONFAF,
               System_Action_object__o *BLMFLPJJMPF,int32_t KLPEHBCJBFC,int64_t OHLGEMOFODG,
               MethodInfo *method)

{
  byte bVar1;
  HOOAAGABMBL_c *LMMIEAICFHL;
  HOOAAGABMBL_o *pHVar2;
  HOOAAGABMBL_o **ppHVar3;
  
  if ((DAT_04565b6c & 1) == 0) {
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565b6c = 1;
  }
  ppHVar3 = &(__this->fields).KJBDDCNKNNE;
  *ppHVar3 = (__this->fields).BBODGCMLKFP;
  thunk_FUN_01c20e04(ppHVar3);
  if (MMDLBPONFAF < PGGOPJDLPDI) {
    pHVar2 = (__this->fields).BBODGCMLKFP;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MGNPHCAAEIO__EHEMFMCGKKK(pHVar2,KLPEHBCJBFC,(MethodInfo *)0x0);
    return;
  }
  pHVar2 = *ppHVar3;
  if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
    bVar1 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (pHVar2->klass->_2).naturalAligment) &&
       ((pHVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)FAIJGJCCKJC_TypeInfo))
    {
      LMMIEAICFHL = pHVar2[1].klass;
      if (LMMIEAICFHL == (HOOAAGABMBL_c *)0x0) goto LAB_03107020;
      if (*(char *)&(LMMIEAICFHL->_1).interfaceOffsets != '\0') {
        JJPNLEPEAFM__FOMGGGJEKEA
                  ((JMDPBFOCHHP_ENBCJNLAHAC_o *)LMMIEAICFHL,(JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0,
                   BLMFLPJJMPF,StringLiteral_1,StringLiteral_1,false,1,2,(System_String_o *)0x0,
                   (System_String_o *)0x0,2,1,false,(MethodInfo *)0x0);
        return;
      }
    }
    JJPNLEPEAFM__JHMPDKFFLPN
              (CPECAEHDDDB,CJNHFNHJHPE,PGGOPJDLPDI,BLMFLPJJMPF,OHLGEMOFODG,
               (pHVar2->fields)._COIPKAKHDFP_k__BackingField,false,(MethodInfo *)0x0);
    return;
  }
LAB_03107020:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

