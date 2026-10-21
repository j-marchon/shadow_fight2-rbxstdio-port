// MGNPHCAAEIO$$EEGOPNGLBMJ @ RVA 0x33FEDCC

void MGNPHCAAEIO__EEGOPNGLBMJ
               (AFFHKININGD_o *FBFPLEFCDOK,bool IJPCCLBIELL,OOMHDDBCBJP_o *BANHBMINMMP,
               bool OPLMOKCAFDM,bool FFILEEKIJGP,bool KKFHPJFFJIO,MethodInfo *method)

{
  long lVar1;
  int32_t iVar2;
  MGNPHCAAEIO_GJEPNOIHFEH_o *__this;
  NDPMLPGANCI_o *__this_00;
  ACHLOMELAJE_o *pAVar3;
  PAMEPBLOLPB_o *CJNHFNHJHPE;
  OOMHDDBCBJP_o *__this_01;
  long lVar4;
  KAKGABBLHGP_o *__this_02;
  undefined8 uVar5;
  undefined8 *puVar6;
  MGNPHCAAEIO_StaticFields *pMVar7;
  ulong uVar8;
  int *piVar9;
  AFFHKININGD_o **ppAVar10;
  long *plVar11;
  AFFHKININGD_o *pAVar12;
  Core_Configs_Models_PackType_array *LFADLKGPBHC;
  OOMHDDBCBJP_o **ppOVar13;
  
  if ((DAT_04567fd4 & 1) == 0) {
    FUN_01bab630(&System_Action<KHODJHFHCDE>_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<PackType>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FightHolder_TypeInfo);
    FUN_01bab630(&Method_MGNPHCAAEIO_GJEPNOIHFEH_IDFAEDFDBOG__);
    FUN_01bab630(&MGNPHCAAEIO_GJEPNOIHFEH_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__);
    FUN_01bab630(&JNDFOKIMHPB_TypeInfo);
    FUN_01bab630(&KAKGABBLHGP_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_6702);
    DAT_04567fd4 = 1;
  }
  __this = (MGNPHCAAEIO_GJEPNOIHFEH_o *)thunk_FUN_01bda818(MGNPHCAAEIO_GJEPNOIHFEH_TypeInfo);
  MGNPHCAAEIO_GJEPNOIHFEH___ctor(__this,(MethodInfo *)0x0);
  if (__this != (MGNPHCAAEIO_GJEPNOIHFEH_o *)0x0) {
    (__this->fields).isCompareQuest = FFILEEKIJGP;
    ppAVar10 = &(__this->fields).fightList;
    *ppAVar10 = FBFPLEFCDOK;
    thunk_FUN_01c20e04(ppAVar10,FBFPLEFCDOK);
    ppOVar13 = &(__this->fields).battle;
    *ppOVar13 = BANHBMINMMP;
    thunk_FUN_01c20e04(ppOVar13,BANHBMINMMP);
    (__this->fields).isGong = OPLMOKCAFDM;
    pAVar12 = *ppAVar10;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar7 = MGNPHCAAEIO_TypeInfo->static_fields;
    pMVar7->NOIBICMJAHP = pAVar12;
    thunk_FUN_01c20e04(&pMVar7->NOIBICMJAHP,pAVar12);
    pMVar7 = MGNPHCAAEIO_TypeInfo->static_fields;
    pMVar7->GNJEJJFAPCE = IJPCCLBIELL;
    pMVar7->NKOGKFODCFL = (__this->fields).battle;
    thunk_FUN_01c20e04(&pMVar7->NKOGKFODCFL);
    pMVar7 = MGNPHCAAEIO_TypeInfo->static_fields;
    pMVar7->EHKALMKNFKN = (__this->fields).isGong;
    pMVar7->BDDOGJHCNMM = (__this->fields).isCompareQuest;
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      iVar2 = NDPMLPGANCI__FFIOCEOHPEM(__this_00,(MethodInfo *)0x0);
      pAVar12 = *ppAVar10;
      if (pAVar12 == (AFFHKININGD_o *)0x0) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_6702,(MethodInfo *)0x0);
        return;
      }
      if (((iVar2 == 6) || (iVar2 == 3)) &&
         (pAVar12 == FightHolder_TypeInfo->static_fields->FightList && (iVar2 != 6 || !KKFHPJFFJIO))
         ) {
        return;
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
      if ((*ppAVar10 != (AFFHKININGD_o *)0x0) &&
         (pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
         pAVar3 != (ACHLOMELAJE_o *)0x0)) {
        CJNHFNHJHPE = ACHLOMELAJE__LHFJEODGOJL
                                (pAVar3,((*ppAVar10)->fields).KOILJHHCIEE,(MethodInfo *)0x0);
        AFFHKININGD__HKBKHKMMBFG(pAVar12,CJNHFNHJHPE,(MethodInfo *)0x0);
        if ((*ppAVar10 != (AFFHKININGD_o *)0x0) &&
           (__this_01 = ((*ppAVar10)->fields).IFJLLGPGMHM, __this_01 != (OOMHDDBCBJP_o *)0x0)) {
          iVar2 = OOMHDDBCBJP__NHGGBEACKBD(__this_01,(MethodInfo *)0x0);
          if (iVar2 != 0xf) {
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
            if ((*ppAVar10 == (AFFHKININGD_o *)0x0) ||
               (pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
               pAVar3 == (ACHLOMELAJE_o *)0x0)) goto LAB_034ff270;
            ACHLOMELAJE__NPICNGMCNKC(pAVar3,((*ppAVar10)->fields).KOILJHHCIEE,(MethodInfo *)0x0);
          }
          lVar4 = *(long *)(Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__ + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01b81620();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01b81620();
          }
          lVar1 = Method_System_Array_Empty<PackType>__;
          plVar11 = (long *)**(undefined8 **)(lVar4 + 0xb8);
          lVar4 = *(long *)(Method_System_Array_Empty<PackType>__ + 0x38);
          if (lVar4 == 0) {
            FUN_01b8167c(Method_System_Array_Empty<PackType>__);
            lVar4 = *(long *)(lVar1 + 0x38);
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01b81620();
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar4 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01b81620();
          }
          LFADLKGPBHC = (Core_Configs_Models_PackType_array *)**(undefined8 **)(lVar4 + 0xb8);
          __this_02 = (KAKGABBLHGP_o *)thunk_FUN_01bda818(KAKGABBLHGP_TypeInfo);
          KAKGABBLHGP___ctor(__this_02,true,LFADLKGPBHC,(MethodInfo *)0x0);
          uVar5 = thunk_FUN_01bda818(System_Action<KHODJHFHCDE>_TypeInfo);
          System_Action<object>___ctor();
          if (plVar11 != (long *)0x0) {
            lVar4 = *plVar11;
            uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(JNDFOKIMHPB_c **)(piVar9 + -2) == JNDFOKIMHPB_TypeInfo) {
                  puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_034ff248;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_01b81914(plVar11,JNDFOKIMHPB_TypeInfo,0);
LAB_034ff248:
                    /* WARNING: Could not recover jumptable at 0x034ff26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar6)(plVar11,__this_02,uVar5,puVar6[1]);
            return;
          }
        }
      }
    }
  }
LAB_034ff270:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

