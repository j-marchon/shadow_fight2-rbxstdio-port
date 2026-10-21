// ACHLOMELAJE$$NKOMBDGHDEN @ RVA 0x30590AC

bool ACHLOMELAJE__NKOMBDGHDEN(ACHLOMELAJE_o *__this,uint32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_o *pCVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int CJNHFNHJHPE_00;
  int32_t iVar8;
  GGHCLMEFIGO_o *pGVar9;
  long lVar10;
  NLPJLHOEAOE_o *__this_00;
  MethodInfo *pMVar11;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PJKHAJKEHEL_o *pPVar12;
  System_Collections_Generic_List_ObscuredUInt__o *pSVar13;
  System_Action_o *pSVar14;
  UnityEngine_Object_o *x;
  int CJNHFNHJHPE_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_Fields CVar15;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar16;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_o CJNHFNHJHPE_02;
  
  pMVar11 = (MethodInfo *)(ulong)CJNHFNHJHPE;
  if ((DAT_04565edd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredUInt>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredUInt>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&StringLiteral_6098);
    FUN_01bab630(&StringLiteral_8409);
    DAT_04565edd = 1;
    pMVar11 = extraout_x1;
  }
  if ((__this->fields).MFLNIMCFPDK == (PJKHAJKEHEL_o *)0x0) {
    return false;
  }
  pCVar2 = &(__this->fields).GLFINLJNDPI;
  uVar6 = ACHLOMELAJE__KKAOKMLLBGL(__this,pMVar11);
  CVar15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__ALBJPLAPOBO
                     (CJNHFNHJHPE,(MethodInfo *)0x0);
  pCVar2->fields = CVar15;
  uVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_o)CVar15,(MethodInfo *)0x0);
  if (uVar7 < uVar6) {
    bVar1 = false;
  }
  else {
    pPVar12 = (__this->fields).MFLNIMCFPDK;
    if (pPVar12 == (PJKHAJKEHEL_o *)0x0) goto LAB_031594d0;
    CJNHFNHJHPE_00 =
         CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                   ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                    (pPVar12->fields).EMHKAKPKLHI.fields,(MethodInfo *)0x0);
    do {
      pPVar12 = (__this->fields).MFLNIMCFPDK;
      CJNHFNHJHPE_00 = CJNHFNHJHPE_00 + 1;
      CVar16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                         (CJNHFNHJHPE_00,(MethodInfo *)0x0);
      if (pPVar12 == (PJKHAJKEHEL_o *)0x0) goto LAB_031594d0;
      (pPVar12->fields).EMHKAKPKLHI.fields = CVar16;
      uVar7 = uVar7 - uVar6;
      uVar6 = ACHLOMELAJE__KKAOKMLLBGL(__this,CVar16._8_8_);
      pMVar11 = extraout_x1_00;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
        pMVar11 = extraout_x1_01;
      }
      uVar3 = MGNPHCAAEIO_TypeInfo->static_fields->NAAMIHMPKEB;
      if ((uVar3 < uVar7) && (uVar7 = uVar3, (MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0)) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
        uVar7 = MGNPHCAAEIO_TypeInfo->static_fields->NAAMIHMPKEB;
        pMVar11 = extraout_x1_02;
      }
    } while (uVar6 <= uVar7);
    pSVar13 = (__this->fields).BPDLLDECMMN;
    if (pSVar13 == (System_Collections_Generic_List_ObscuredUInt__o *)0x0) goto LAB_031594d0;
    iVar4 = (pSVar13->fields)._size;
    CJNHFNHJHPE_01 = CJNHFNHJHPE_00;
    if (iVar4 < CJNHFNHJHPE_00) {
      uVar7 = ACHLOMELAJE__KKAOKMLLBGL(__this,pMVar11);
      CJNHFNHJHPE_01 = iVar4;
    }
    bVar1 = CJNHFNHJHPE_00 <= iVar4;
    CVar15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__ALBJPLAPOBO(uVar7,(MethodInfo *)0x0);
    pCVar2->fields = CVar15;
    pPVar12 = (__this->fields).MFLNIMCFPDK;
    CVar16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                       (CJNHFNHJHPE_01,(MethodInfo *)0x0);
    if (pPVar12 == (PJKHAJKEHEL_o *)0x0) goto LAB_031594d0;
    (pPVar12->fields).EMHKAKPKLHI.fields = CVar16;
    pPVar12 = (__this->fields).MFLNIMCFPDK;
    if (pPVar12 == (PJKHAJKEHEL_o *)0x0) goto LAB_031594d0;
    iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pPVar12->fields).EMHKAKPKLHI.fields,(MethodInfo *)0x0);
    KIHIPAJGNBF__MLDEHFFGJDP((KIHIPAJGNBF_o *)__this,StringLiteral_8409,iVar8,(MethodInfo *)0x0);
  }
  pPVar12 = (__this->fields).MFLNIMCFPDK;
  if (pPVar12 != (PJKHAJKEHEL_o *)0x0) {
    iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pPVar12->fields).EMHKAKPKLHI.fields,(MethodInfo *)0x0);
    pSVar13 = (__this->fields).BPDLLDECMMN;
    if (pSVar13 != (System_Collections_Generic_List_ObscuredUInt__o *)0x0) {
      if (iVar8 == (pSVar13->fields)._size) {
        pPVar12 = (__this->fields).MFLNIMCFPDK;
        if (pPVar12 == (PJKHAJKEHEL_o *)0x0) goto LAB_031594d0;
        iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pPVar12->fields).EMHKAKPKLHI.fields,(MethodInfo *)0x0);
        if (1 < iVar8) {
          pPVar12 = (__this->fields).MFLNIMCFPDK;
          if (pPVar12 == (PJKHAJKEHEL_o *)0x0) goto LAB_031594d0;
          pSVar13 = (__this->fields).BPDLLDECMMN;
          iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (pPVar12->fields).EMHKAKPKLHI.fields,(MethodInfo *)0x0);
          if (pSVar13 == (System_Collections_Generic_List_ObscuredUInt__o *)0x0) goto LAB_031594d0;
          CJNHFNHJHPE_02 =
               System_Collections_Generic_List<ObscuredUInt>__get_Item
                         (pSVar13,iVar8 + -2,
                          Method_System_Collections_Generic_List<ObscuredUInt>_get_Item__);
          uVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__ALBJPLAPOBO
                            (CJNHFNHJHPE_02,(MethodInfo *)0x0);
          CVar15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_Fields)
                   CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__ALBJPLAPOBO
                             (uVar7,(MethodInfo *)0x0);
          pCVar2->fields = CVar15;
        }
      }
      if (!bVar1) {
LAB_03159478:
        uVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_o)pCVar2->fields,
                           (MethodInfo *)0x0);
        KIHIPAJGNBF__MLDEHFFGJDP((KIHIPAJGNBF_o *)__this,StringLiteral_6098,uVar7,(MethodInfo *)0x0)
        ;
        pSVar14 = (__this->fields).IJDAAAHPNGL;
        if (pSVar14 == (System_Action_o *)0x0) {
          return bVar1;
        }
        (*(code *)(pSVar14->fields).super.super.invoke_impl)
                  ((pSVar14->fields).super.super.method_code,(pSVar14->fields).super.super.method);
        return bVar1;
      }
      pGVar9 = (__this->fields).OIDPLCLELEN;
      if (pGVar9 != (GGHCLMEFIGO_o *)0x0) {
        GGHCLMEFIGO__MJGMEEKMAOE(pGVar9,(MethodInfo *)0x0);
        pGVar9 = (__this->fields).OIDPLCLELEN;
        iVar8 = ACHLOMELAJE__EOEAKGGDBFH(__this,method_00);
        if (pGVar9 != (GGHCLMEFIGO_o *)0x0) {
          GGHCLMEFIGO__DDILKJMMGGE(pGVar9,iVar8,(MethodInfo *)0x0);
          lVar10 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01b81620();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01b81620();
          }
          x = (UnityEngine_Object_o *)**(undefined8 **)(lVar10 + 0xb8);
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
          bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if (bVar5) {
            lVar10 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01b81620();
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01b81620();
            }
            if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar10 + 0xb8) ==
                (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_031594d0;
            Nekki_SF2_GUI_Shop_ShopScene__UpdateNewItemsCounters
                      ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar10 + 0xb8),
                       (MethodInfo *)0x0);
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
          iVar8 = ACHLOMELAJE__EOEAKGGDBFH(__this,method_01);
          if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
            NLPJLHOEAOE__DGHLELADKNM(__this_00,iVar8,(MethodInfo *)0x0);
            NFNBHPOJFNJ__NOJIAJPLOKB(5,(MDNLIFLBFNO_o *)0x0,false,(MethodInfo *)0x0);
            pSVar14 = (__this->fields).MOECHBGKDDH;
            if (pSVar14 != (System_Action_o *)0x0) {
              (*(code *)(pSVar14->fields).super.super.invoke_impl)
                        ((pSVar14->fields).super.super.method_code,
                         (pSVar14->fields).super.super.method);
            }
            goto LAB_03159478;
          }
        }
      }
    }
  }
LAB_031594d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

