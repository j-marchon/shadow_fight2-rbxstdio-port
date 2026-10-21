// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$PHMCJLDOJPD @ RVA 0x35ADEAC

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__PHMCJLDOJPD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  CHDGOFBHAFI_o *pCVar3;
  GCPFDLNAFDF_o *pGVar4;
  VirtualInvokeData *pVVar5;
  AJOGJBFNELI_o *__this_00;
  SFButton_o *pSVar6;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  GCPFDLNAFDF_c *pGVar7;
  IFFFKKMMKFO_o *pIVar8;
  GKLPDMLELJF_o *pGVar9;
  ulong uVar10;
  int32_t *piVar11;
  AADKBCFCLKK_o *IHODMKCBNKJ;
  
  if ((DAT_04568e6a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&KADDELABILH_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568e6a = 1;
  }
  bVar2 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar3 != (CHDGOFBHAFI_o *)0x0) {
    IHODMKCBNKJ = (pCVar3->fields).AABMLCNHHPN;
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
    }
    pGVar4 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
    if (pGVar4 == (GCPFDLNAFDF_o *)0x0) goto LAB_036ae098;
    pGVar7 = pGVar4->klass;
    uVar1._0_1_ = (pGVar7->_2).rank;
    uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pGVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)KADDELABILH_TypeInfo) {
          pVVar5 = pGVar7->vtable + (*piVar11 + 5);
          goto LAB_036adfc4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pGVar4,KADDELABILH_TypeInfo,5);
LAB_036adfc4:
    uVar10 = (*pVVar5->methodPtr)(pGVar4,pVVar5->method);
    if ((uVar10 & 1) != 0) {
      pIVar8 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
      if (pIVar8 == (IFFFKKMMKFO_o *)0x0) goto LAB_036ae098;
      if (((pIVar8->fields)._FPBBMLACBJE_k__BackingField == false) &&
         (bVar2 = OOBBAGLCFPF__FLMDOPMDKID(IHODMKCBNKJ,(MethodInfo *)0x0), bVar2)) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
        if ((((IHODMKCBNKJ == (AADKBCFCLKK_o *)0x0) ||
             (pIVar8 = (__this->fields)._LAIJDPOGGKB_k__BackingField, pIVar8 == (IFFFKKMMKFO_o *)0x0
             )) || (pGVar9 = (pIVar8->fields)._IPNPNPOLCFO_k__BackingField,
                   pGVar9 == (GKLPDMLELJF_o *)0x0)) || (__this_00 == (AJOGJBFNELI_o *)0x0))
        goto LAB_036ae098;
        bVar2 = AJOGJBFNELI__PMLFNFMEKDO
                          (__this_00,(IHODMKCBNKJ->fields).AMKHEHFFAKJ,(pGVar9->fields).ANAJGHJEEOC,
                           (MethodInfo *)0x0);
        if (bVar2) {
          Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__PNNAAJPIFGC(__this,method_00);
        }
        else {
          Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__EGNLFEGLGPK(__this,method_00);
        }
        pSVar6 = (__this->fields)._blameButton;
        if ((pSVar6 == (SFButton_o *)0x0) ||
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pSVar6,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036ae098;
        bVar2 = true;
        goto LAB_036ae064;
      }
    }
    pSVar6 = (__this->fields)._blameButton;
    if ((pSVar6 != (SFButton_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pSVar6,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      bVar2 = false;
LAB_036ae064:
      UnityEngine_GameObject__SetActive(__this_01,bVar2,(MethodInfo *)0x0);
      return;
    }
  }
LAB_036ae098:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

