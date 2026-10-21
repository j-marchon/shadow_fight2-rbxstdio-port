// Nekki.SF2.Core.Fights.ModelContainer$$Init @ RVA 0x3561F9C

void Nekki_SF2_Core_Fights_ModelContainer__Init
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,float NMFKJBOAOLK,float DAPHCPICAAC,
               float DCNKOEOHOPE,float DENHILBKEFB,MethodInfo *method)

{
  int32_t iVar1;
  MEHKKHFBNLM_o *pMVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  PJKHAJKEHEL_o *pPVar3;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  PJKHAJKEHEL_o **ppPVar4;
  NHBBOEHHEKG_o *pNVar5;
  MEHKKHFBNLM_o **ppMVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar7;
  
  if ((DAT_04568bcd & 1) == 0) {
    FUN_01bab630(&MEHKKHFBNLM_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568bcd = 1;
  }
  Nekki_SF2_Core_Fights_ModelContainer__OLIFIINLMLJ(__this,false,in_x2);
  (__this->fields).IBGCIPCGICB = 0;
  (__this->fields).ALBNJDPLOKJ = false;
  if (NMFKJBOAOLK == 0.0) {
    iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    NMFKJBOAOLK = (float)iVar1;
  }
  (__this->fields)._BEEGDJFPEHO_k__BackingField = NMFKJBOAOLK;
  (__this->fields)._IJMMLDDCHFB_k__BackingField = DAPHCPICAAC;
  pNVar5 = (__this->fields).CNHHLPPHNCO;
  pMVar2 = (MEHKKHFBNLM_o *)thunk_FUN_01bda818(MEHKKHFBNLM_TypeInfo);
  MEHKKHFBNLM___ctor(pMVar2,0,(MethodInfo *)0x0);
  if (pNVar5 != (NHBBOEHHEKG_o *)0x0) {
    ppMVar6 = &(pNVar5->fields).CLFNHGGJHCA;
    *ppMVar6 = pMVar2;
    thunk_FUN_01c20e04(ppMVar6,pMVar2);
    pNVar5 = (__this->fields).CNHHLPPHNCO;
    if (((pNVar5 != (NHBBOEHHEKG_o *)0x0) &&
        (pMVar2 = (pNVar5->fields).CLFNHGGJHCA, pMVar2 != (MEHKKHFBNLM_o *)0x0)) &&
       (__this_00 = (pMVar2->fields)._KDDKJJLDFFO_k__BackingField,
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
        Nekki_SF2_Core_Fights_ModelContainer__LICIHGOBMAI(__this,method_00);
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pPVar3 = MGNPHCAAEIO__MGLPJIGMCHH((MethodInfo *)0x0);
        ppPVar4 = &(__this->fields).MFLNIMCFPDK;
        *ppPVar4 = pPVar3;
        thunk_FUN_01c20e04(ppPVar4,pPVar3);
        pPVar3 = *ppPVar4;
        if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
          (pPVar3->fields).BLJLIBHLGLI = false;
          CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                            (false,(MethodInfo *)0x0);
          (pPVar3->fields).DHGNGIKCDON.fields = CVar7;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

