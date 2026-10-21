// CHDGOFBHAFI$$FBCCHHDEPDJ @ RVA 0x3243DA8

void CHDGOFBHAFI__FBCCHHDEPDJ(CHDGOFBHAFI_o *__this,bool JGOLIBCLOAN,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  NODLJPNGNBG_o *pNVar5;
  NDPMLPGANCI_o *pNVar6;
  System_Action_DBMPKPJGIPI__o *pSVar7;
  long lVar8;
  FCJBEKHDLAF_o *__this_01;
  OHPOFOPJIMB_o *KCPFFLHCCIN;
  CFMDGLMCNIL_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  AADKBCFCLKK_o *pAVar9;
  UnityEngine_Object_o *x;
  undefined1 auVar10 [16];
  CHDGOFBHAFI_o *__this_00;
  
  method_00 = (MethodInfo *)(ulong)JGOLIBCLOAN;
  __this_00 = __this;
  if ((DAT_045670a7 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&BGFHIINOIFE_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_HEJMPGIGELH__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    auVar10 = FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    method_00 = auVar10._8_8_;
    __this_00 = auVar10._0_8_;
    DAT_045670a7 = 1;
  }
  pAVar9 = (__this->fields).AABMLCNHHPN;
  if (pAVar9 == (AADKBCFCLKK_o *)0x0) {
    bVar2 = true;
  }
  else {
    pNVar5 = CHDGOFBHAFI__AFHLHFMLNEO
                       ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                        (pAVar9->fields).MPAIPMANDEO,method_00);
    if (pNVar5 == (NODLJPNGNBG_o *)0x0) goto LAB_033440b8;
    pAVar9 = (__this->fields).AABMLCNHHPN;
    bVar2 = (pNVar5->fields).PMMFPJJOPKE == (ICBMOMGINFH_o *)0x0;
    __this_00 = (CHDGOFBHAFI_o *)0x0;
    method_00 = extraout_x1;
    if (pAVar9 != (AADKBCFCLKK_o *)0x0) {
      bVar3 = OOBBAGLCFPF__ECCKBGBDALK(pAVar9,(MethodInfo *)0x0);
      __this_00 = (CHDGOFBHAFI_o *)(ulong)bVar3;
      method_00 = extraout_x1_00;
      if (bVar3) {
        return;
      }
    }
  }
  iVar1 = (__this->fields).CMDMECMFCIK;
  if (iVar1 == 1) {
    if ((bool)(bVar2 & !JGOLIBCLOAN)) {
      CHDGOFBHAFI__NFEEHFPJABC(__this_00,method_00);
      return;
    }
  }
  else {
    if (iVar1 == 2) {
      pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      pSVar7 = (System_Action_DBMPKPJGIPI__o *)
               thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
      System_Action<Int32Enum>___ctor();
      if (pNVar6 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__NJBAKIMLGHB(pNVar6,pSVar7,(MethodInfo *)0x0);
        pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        pSVar7 = (System_Action_DBMPKPJGIPI__o *)
                 thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
        System_Action<Int32Enum>___ctor();
        if (pNVar6 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__EAPNEKLDLLM(pNVar6,pSVar7,(MethodInfo *)0x0);
          pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
          if (pNVar6 != (NDPMLPGANCI_o *)0x0) {
            iVar4 = NDPMLPGANCI__FFIOCEOHPEM(pNVar6,(MethodInfo *)0x0);
            if (iVar4 == 6) {
              lVar8 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_01b81620();
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_01b81620();
              }
              x = (UnityEngine_Object_o *)**(undefined8 **)(lVar8 + 0xb8);
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
              }
              bVar2 = UnityEngine_Object__op_Inequality
                                (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar2) {
                lVar8 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
                if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                  lVar8 = FUN_01b81620();
                }
                lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
                if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                  lVar8 = FUN_01b81620();
                }
                if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_033440b8;
                __this_01 = *(FCJBEKHDLAF_o **)(**(long **)(lVar8 + 0xb8) + 0x90);
                if ((__this_01 != (FCJBEKHDLAF_o *)0x0) &&
                   ((__this_01->fields).KPNMLAECCEE == false)) {
                  FCJBEKHDLAF__LGBCIBOOMJP(__this_01,(MethodInfo *)0x0);
                }
              }
              if (JGOLIBCLOAN) {
                return;
              }
              KCPFFLHCCIN = (OHPOFOPJIMB_o *)thunk_FUN_01bda818(BGFHIINOIFE_TypeInfo);
              BGFHIINOIFE___ctor((BGFHIINOIFE_o *)KCPFFLHCCIN,(MethodInfo *)0x0);
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_02 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
              if (__this_02 != (CFMDGLMCNIL_o *)0x0) {
                CFMDGLMCNIL__MPFFOIIBAKO(__this_02,KCPFFLHCCIN,true,(MethodInfo *)0x0);
                return;
              }
            }
            else {
              pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
              if (pNVar6 != (NDPMLPGANCI_o *)0x0) {
                NDPMLPGANCI__EKPAFDJIAGI
                          (pNVar6,5,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
LAB_033440b8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (!JGOLIBCLOAN) {
      CHDGOFBHAFI__FFAGNLLDPGN(__this,method_00);
      return;
    }
  }
  return;
}

