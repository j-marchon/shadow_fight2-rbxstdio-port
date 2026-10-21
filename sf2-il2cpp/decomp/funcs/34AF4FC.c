// KDPDBGNOFEN$$NPODDNIHKBO @ RVA 0x34AF4FC

void KDPDBGNOFEN__NPODDNIHKBO
               (KDPDBGNOFEN_o *__this,PGICCMFLDPI_o *LFJGFLNMBMC,
               SimpleJSON_JSONObject_o *NKLHCIIJBLL,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int32_t iVar4;
  Il2CppObject *pIVar5;
  System_Object_array *pSVar6;
  System_Object_array *pSVar7;
  System_String_o *pSVar8;
  long lVar9;
  Il2CppObject *pIVar10;
  GCPFDLNAFDF_o *pGVar11;
  VirtualInvokeData *pVVar12;
  System_Action_o *BLMFLPJJMPF;
  undefined8 uVar13;
  GCPFDLNAFDF_c *pGVar14;
  ulong uVar15;
  int32_t *piVar16;
  undefined1 auVar17 [16];
  undefined1 local_78 [16];
  undefined4 local_68;
  int32_t local_64;
  
                    /* catch() { ... } // from try @ 035af4f0 with catch @ 035af518 */
                    /* try { // try from 035af520 to 036af527 has its CatchHandler @ 035af53c */
                    /* try { // try from 035af528 to 036af533 has its CatchHandler @ 035af37c */
                    /* try { // try from 035af534 to 036af53b has its CatchHandler @ 035af53c */
  if ((DAT_0456854f & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035af520 with catch @ 035af53c
                       catch(type#2 @ 00000000) { ... } // from try @ 035af534 with catch @ 035af53c
                        */
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&KADDELABILH_TypeInfo);
    FUN_01bab630(&KDDOKHLOKMI_TypeInfo);
    FUN_01bab630(&Method_KDPDBGNOFEN_LGOKOMKOBFK_DFICFAGPMHF__);
    FUN_01bab630(&KDPDBGNOFEN_LGOKOMKOBFK_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    FUN_01bab630(&StringLiteral_11553);
    FUN_01bab630(&StringLiteral_11554);
    DAT_0456854f = 1;
  }
  pIVar5 = (Il2CppObject *)thunk_FUN_01bda818(KDPDBGNOFEN_LGOKOMKOBFK_TypeInfo);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  if (pIVar5 != (Il2CppObject *)0x0) {
    pIVar5[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(pIVar5 + 1,__this);
    pIVar5[2].klass = (Il2CppClass *)LFJGFLNMBMC;
    thunk_FUN_01c20e04(pIVar5 + 2,LFJGFLNMBMC);
    pIVar5[2].monitor = NKLHCIIJBLL;
    thunk_FUN_01c20e04(&pIVar5[2].monitor,NKLHCIIJBLL);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (HJPEKDOPBHN_TypeInfo->static_fields->MJEPNDCEBCK).fields,(MethodInfo *)0x0);
    *(int32_t *)&pIVar5[1].monitor = iVar4;
    iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (HJPEKDOPBHN_TypeInfo->static_fields->ENCOAOMGLKD).fields,(MethodInfo *)0x0);
    bVar3 = HJPEKDOPBHN__OOCIJPLODLJ((MethodInfo *)0x0);
    if (!bVar3) {
      pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,5);
      pSVar7 = pSVar6;
      if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
        pSVar7 = (System_Object_array *)thunk_FUN_01ba7564(KDDOKHLOKMI_TypeInfo);
      }
      pSVar8 = KDDOKHLOKMI__HMOPEPHMMIA((MethodInfo *)pSVar7);
      if (pSVar6 == (System_Object_array *)0x0) goto LAB_035afb9c;
      if ((pSVar8 != (System_String_o *)0x0) &&
         (lVar9 = thunk_FUN_01bda71c(pSVar8,(((pSVar6->obj).klass)->_1).element_class), lVar9 == 0))
      goto LAB_035afba0;
      if ((int)pSVar6->max_length == 0) goto LAB_035afb98;
      pSVar6->m_Items[0] = (Il2CppObject *)pSVar8;
      thunk_FUN_01c20e04(pSVar6->m_Items,pSVar8);
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar10 = IFAMAAGNCBJ__GPBMELHDADN<object>
                          (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
      auVar17._8_8_ = local_78._8_8_;
      auVar17._0_8_ = local_78._0_8_;
      if ((pIVar10 == (Il2CppObject *)0x0) ||
         (local_78 = auVar17, pIVar10[9].monitor == (void *)0x0)) goto LAB_035afb9c;
      pIVar10 = *(Il2CppObject **)((long)pIVar10[9].monitor + 0x10);
      if ((pIVar10 != (Il2CppObject *)0x0) &&
         (lVar9 = thunk_FUN_01bda71c(pIVar10,(((pSVar6->obj).klass)->_1).element_class), lVar9 == 0)
         ) goto LAB_035afba0;
      if ((uint)pSVar6->max_length < 2) goto LAB_035afb98;
      pSVar6->m_Items[1] = pIVar10;
      thunk_FUN_01c20e04(pSVar6->m_Items + 1,pIVar10);
      local_64 = iVar4;
      pIVar10 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
      if ((pIVar10 != (Il2CppObject *)0x0) &&
         (lVar9 = thunk_FUN_01bda71c(pIVar10,(((pSVar6->obj).klass)->_1).element_class), lVar9 == 0)
         ) goto LAB_035afba0;
      if ((uint)pSVar6->max_length < 3) goto LAB_035afb98;
      pSVar6->m_Items[2] = pIVar10;
      thunk_FUN_01c20e04(pSVar6->m_Items + 2,pIVar10);
      local_68 = *(undefined4 *)&pIVar5[1].monitor;
      pIVar10 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_68);
      if ((pIVar10 != (Il2CppObject *)0x0) &&
         (lVar9 = thunk_FUN_01bda71c(pIVar10,(((pSVar6->obj).klass)->_1).element_class), lVar9 == 0)
         ) goto LAB_035afba0;
      if ((uint)pSVar6->max_length < 4) goto LAB_035afb98;
      pSVar6->m_Items[3] = pIVar10;
      thunk_FUN_01c20e04(pSVar6->m_Items + 3,pIVar10);
      pGVar11 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
      if (pGVar11 == (GCPFDLNAFDF_o *)0x0) goto LAB_035afb9c;
      pGVar14 = pGVar11->klass;
      uVar1._0_1_ = (pGVar14->_2).rank;
      uVar1._1_1_ = (pGVar14->_2).minimumAlignment;
      uVar15 = (ulong)uVar1;
      if (uVar15 != 0) {
        piVar16 = &((pGVar14->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
              (Il2CppClass *)KADDELABILH_TypeInfo) {
            pVVar12 = pGVar14->vtable + (*piVar16 + 4);
            goto LAB_035af86c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      pVVar12 = (VirtualInvokeData *)FUN_01b81914(pGVar11,KADDELABILH_TypeInfo,4);
LAB_035af86c:
      local_78 = (*pVVar12->methodPtr)(pGVar11,pVVar12->method);
      pIVar10 = (Il2CppObject *)
                thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,local_78);
      if ((pIVar10 != (Il2CppObject *)0x0) &&
         (lVar9 = thunk_FUN_01bda71c(pIVar10,(((pSVar6->obj).klass)->_1).element_class), lVar9 == 0)
         ) goto LAB_035afba0;
      if ((uint)pSVar6->max_length < 5) goto LAB_035afb98;
      pSVar6->m_Items[4] = pIVar10;
      thunk_FUN_01c20e04(pSVar6->m_Items + 4,pIVar10);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_11554,pSVar6,(MethodInfo *)0x0);
    }
    pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,5);
    pSVar7 = pSVar6;
    if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
      pSVar7 = (System_Object_array *)thunk_FUN_01ba7564(KDDOKHLOKMI_TypeInfo);
    }
    pSVar8 = KDDOKHLOKMI__HMOPEPHMMIA((MethodInfo *)pSVar7);
    if (pSVar6 != (System_Object_array *)0x0) {
      if ((pSVar8 != (System_String_o *)0x0) &&
         (lVar9 = thunk_FUN_01bda71c(pSVar8,(((pSVar6->obj).klass)->_1).element_class), lVar9 == 0))
      goto LAB_035afba0;
      if ((int)pSVar6->max_length == 0) goto LAB_035afb98;
      pSVar6->m_Items[0] = (Il2CppObject *)pSVar8;
      thunk_FUN_01c20e04(pSVar6->m_Items,pSVar8);
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar10 = IFAMAAGNCBJ__GPBMELHDADN<object>
                          (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
      if ((pIVar10 == (Il2CppObject *)0x0) || (pIVar10[9].monitor == (void *)0x0))
      goto LAB_035afb9c;
      pIVar10 = *(Il2CppObject **)((long)pIVar10[9].monitor + 0x10);
      if ((pIVar10 != (Il2CppObject *)0x0) &&
         (lVar9 = thunk_FUN_01bda71c(pIVar10,(((pSVar6->obj).klass)->_1).element_class), lVar9 == 0)
         ) {
LAB_035afba0:
        uVar13 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar13,0);
      }
      if (1 < (uint)pSVar6->max_length) {
        pSVar6->m_Items[1] = pIVar10;
        thunk_FUN_01c20e04(pSVar6->m_Items + 1,pIVar10);
        local_64 = iVar4;
        pIVar10 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
        if ((pIVar10 != (Il2CppObject *)0x0) &&
           (lVar9 = thunk_FUN_01bda71c(pIVar10,(((pSVar6->obj).klass)->_1).element_class),
           lVar9 == 0)) goto LAB_035afba0;
        if (2 < (uint)pSVar6->max_length) {
          pSVar6->m_Items[2] = pIVar10;
          thunk_FUN_01c20e04(pSVar6->m_Items + 2,pIVar10);
          local_68 = *(undefined4 *)&pIVar5[1].monitor;
          pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_68);
          if ((pIVar5 != (Il2CppObject *)0x0) &&
             (lVar9 = thunk_FUN_01bda71c(pIVar5,(((pSVar6->obj).klass)->_1).element_class),
             lVar9 == 0)) goto LAB_035afba0;
          if (3 < (uint)pSVar6->max_length) {
            pSVar6->m_Items[3] = pIVar5;
            thunk_FUN_01c20e04(pSVar6->m_Items + 3,pIVar5);
            pGVar11 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
            if (pGVar11 == (GCPFDLNAFDF_o *)0x0) goto LAB_035afb9c;
            pGVar14 = pGVar11->klass;
            uVar2._0_1_ = (pGVar14->_2).rank;
            uVar2._1_1_ = (pGVar14->_2).minimumAlignment;
            uVar15 = (ulong)uVar2;
            if (uVar15 != 0) {
              piVar16 = &((pGVar14->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                    (Il2CppClass *)KADDELABILH_TypeInfo) {
                  pVVar12 = pGVar14->vtable + (*piVar16 + 4);
                  goto LAB_035afaac;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            pVVar12 = (VirtualInvokeData *)FUN_01b81914(pGVar11,KADDELABILH_TypeInfo,4);
LAB_035afaac:
            auVar17 = (*pVVar12->methodPtr)(pGVar11,pVVar12->method);
            local_78 = auVar17;
            pIVar5 = (Il2CppObject *)
                     thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                        local_78);
            if ((pIVar5 != (Il2CppObject *)0x0) &&
               (lVar9 = thunk_FUN_01bda71c(pIVar5,(((pSVar6->obj).klass)->_1).element_class),
               lVar9 == 0)) goto LAB_035afba0;
            if (4 < (uint)pSVar6->max_length) {
              pSVar6->m_Items[4] = pIVar5;
              thunk_FUN_01c20e04(pSVar6->m_Items + 4,pIVar5);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogWarningFormat(StringLiteral_11553,pSVar6,(MethodInfo *)0x0);
              BLMFLPJJMPF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
              System_Action___ctor();
              IMAPABEJECG__CBNFJDHJCNK(BLMFLPJJMPF,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
LAB_035afb98:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_035afb9c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

