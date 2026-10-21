// LEGDPJHPEOB$$GELLNLKENNG @ RVA 0x3547620

/* WARNING: Removing unreachable block (ram,0x03647bdc) */
/* WARNING: Removing unreachable block (ram,0x03647bf4) */

void LEGDPJHPEOB__GELLNLKENNG
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  System_String_o *CJNHFNHJHPE;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar8;
  System_Collections_Generic_IEnumerator_T__o *pSVar9;
  VirtualInvokeData *pVVar10;
  long lVar11;
  System_Object_array *args;
  undefined8 uVar12;
  PKHMIGFEJCL_o *pPVar13;
  System_Collections_Generic_IEnumerator_T__c *pSVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int32_t *piVar18;
  System_String_o *a;
  MMFIDKMDADC_Fields *pMVar19;
  BECIPDJBAOG_o *pBVar20;
  
  if ((DAT_04568b1b & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<object>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03647664 to 0374768f has its CatchHandler @ 03647808 */
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_10698);
    FUN_01bab630(&StringLiteral_4628);
    FUN_01bab630(&StringLiteral_4629);
                    /* try { // try from 036476c4 to 037476cf has its CatchHandler @ 03647800 */
    FUN_01bab630(&StringLiteral_10696);
    FUN_01bab630(&StringLiteral_1606);
                    /* try { // try from 036476d8 to 037476e7 has its CatchHandler @ 036477fc */
    __this = (LEGDPJHPEOB_o *)FUN_01bab630(&StringLiteral_1567);
    DAT_04568b1b = 1;
  }
  if ((ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
    a = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    pMVar19 = &JDGILABGBGH->fields;
    pMVar19->HPACPFLKHPK = StringLiteral_1567;
    thunk_FUN_01c20e04(pMVar19);
    CJNHFNHJHPE = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
                    /* try { // try from 03647720 to 03747743 has its CatchHandler @ 036477f8 */
    __this = (LEGDPJHPEOB_o *)Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    lVar11 = Method_System_Array_Empty<object>__;
    if (((Nekki_SF2_Core_Quests_QuestsManager_o *)__this !=
         (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
       (pPVar13 = (((Nekki_SF2_Core_Quests_QuestsManager_o *)__this)->fields).QuestParameters,
       pPVar13 != (PKHMIGFEJCL_o *)0x0)) {
      pBVar20 = (pPVar13->fields).DIJKNIEKOFL;
      if (pBVar20 == (BECIPDJBAOG_o *)0x0) {
        lVar15 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
        if (lVar15 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<object>__);
          lVar15 = *(long *)(lVar11 + 0x38);
        }
        lVar15 = *(long *)(lVar15 + 0x10);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01b81620();
        }
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01b81620();
        }
        args = (System_Object_array *)**(undefined8 **)(lVar11 + 0xb8);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        puVar16 = &StringLiteral_10696;
LAB_03647b98:
        UnityEngine_Debug__LogErrorFormat((System_String_o *)*puVar16,args,(MethodInfo *)0x0);
        return;
      }
                    /* try { // try from 03647744 to 037477d3 has its CatchHandler @ 036474cc */
      bVar7 = System_String__op_Equality(a,StringLiteral_4629,(MethodInfo *)0x0);
      if (bVar7) {
        bVar7 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
        if (!bVar7) {
          pGVar8 = (pBVar20->fields).LEJBLHJFJHP;
          __this = (LEGDPJHPEOB_o *)0x0;
          if (pGVar8 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
          goto LAB_03647bc8;
          pSVar9 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar8,
                              Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__
                             );
          if (pSVar9 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            pSVar14 = pSVar9->klass;
            uVar1._0_1_ = (pSVar14->_2).rank;
            uVar1._1_1_ = (pSVar14->_2).minimumAlignment;
            uVar17 = (ulong)uVar1;
            if (uVar17 != 0) {
              piVar18 = &((pSVar14->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 036477d4 to 037477db has its CatchHandler @ 03647804 */
                    /* try { // try from 036477dc to 037477df has its CatchHandler @ 036477f4 */
                  pVVar10 = pSVar14->vtable + *piVar18;
                  goto LAB_036477e0;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            pVVar10 = (VirtualInvokeData *)
                      FUN_01b81914(pSVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_036477e0:
                    /* try { // try from 036477e0 to 037477e3 has its CatchHandler @ 036474cc */
                    /* try { // try from 036477e4 to 037477e7 has its CatchHandler @ 036477f0 */
                    /* try { // try from 036477e8 to 0374781b has its CatchHandler @ 036474cc */
            uVar17 = (*pVVar10->methodPtr)(pSVar9,pVVar10->method);
            if ((uVar17 & 1) == 0) goto LAB_03647878;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036477e4 with catch @ 036477f0
                        */
            pSVar14 = pSVar9->klass;
            uVar2._0_1_ = (pSVar14->_2).rank;
            uVar2._1_1_ = (pSVar14->_2).minimumAlignment;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036477dc with catch @ 036477f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03647720 with catch @ 036477f8
                        */
            uVar17 = (ulong)uVar2;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036476d8 with catch @ 036477fc
                        */
            if (uVar17 != 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036476c4 with catch @ 03647800
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036477d4 with catch @ 03647804
                        */
              piVar18 = &((pSVar14->_1).interfaceOffsets)->offset;
              do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03647664 with catch @ 03647808
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03647608 with catch @ 0364780c
                        */
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo) {
                    /* catch() { ... } // from try @ 0364781c with catch @ 03647830 */
                    /* try { // try from 03647838 to 0374789f has its CatchHandler @ 036478b4 */
                  pVVar10 = pSVar14->vtable + *piVar18;
                  goto LAB_0364783c;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
                    /* try { // try from 0364781c to 0374781f has its CatchHandler @ 03647830 */
              } while (uVar17 != 0);
            }
            pVVar10 = (VirtualInvokeData *)
                      FUN_01b81914(pSVar9,
                                   System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo,0);
LAB_0364783c:
            lVar11 = (*pVVar10->methodPtr)(pSVar9,pVVar10->method);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar7 = System_String__op_Equality
                              (*(System_String_o **)(lVar11 + 0x18),CJNHFNHJHPE,(MethodInfo *)0x0);
          } while (!bVar7);
          pMVar19->HPACPFLKHPK = StringLiteral_1606;
          thunk_FUN_01c20e04(pMVar19);
LAB_03647878:
          if (pSVar9 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
            pSVar14 = pSVar9->klass;
            uVar3._0_1_ = (pSVar14->_2).rank;
            uVar3._1_1_ = (pSVar14->_2).minimumAlignment;
            uVar17 = (ulong)uVar3;
            if (uVar17 != 0) {
                    /* try { // try from 036478a0 to 037478ab has its CatchHandler @ 036474cc */
              piVar18 = &((pSVar14->_1).interfaceOffsets)->offset;
              do {
                    /* try { // try from 036478ac to 037478b3 has its CatchHandler @ 036478b4 */
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                    (Il2CppClass *)System_IDisposable_TypeInfo) {
                  pVVar10 = pSVar14->vtable + *piVar18;
                  goto LAB_0364797c;
                }
                uVar17 = uVar17 - 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03647838 with catch @ 036478b4
                       catch(type#2 @ 00000000) { ... } // from try @ 036478ac with catch @ 036478b4
                        */
                piVar18 = piVar18 + 4;
                    /* try { // try from 036478b8 to 037479e7 has its CatchHandler @ 036478b8
                       catch() { ... } // from try @ 036478b8 with catch @ 036478b8
                       catch() { ... } // from try @ 03647be0 with catch @ 036478b8
                       catch() { ... } // from try @ 03647c94 with catch @ 036478b8
                       catch() { ... } // from try @ 03647c9c with catch @ 036478b8
                       catch() { ... } // from try @ 03647d8c with catch @ 036478b8 */
              } while (uVar17 != 0);
            }
            pVVar10 = (VirtualInvokeData *)FUN_01b81914(pSVar9,System_IDisposable_TypeInfo,0);
LAB_0364797c:
            (*pVVar10->methodPtr)(pSVar9,pVVar10->method);
          }
        }
      }
      else {
        bVar7 = System_String__op_Equality(a,StringLiteral_4628,(MethodInfo *)0x0);
        if (!bVar7) {
                    /* try { // try from 03647b34 to 03747b4f has its CatchHandler @ 03647ccc */
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          __this = (LEGDPJHPEOB_o *)0x0;
          if (args == (System_Object_array *)0x0) goto LAB_03647bc8;
                    /* try { // try from 03647b50 to 03747b7f has its CatchHandler @ 03647cdc */
          if ((a != (System_String_o *)0x0) &&
             (lVar11 = thunk_FUN_01bda71c(a,(((args->obj).klass)->_1).element_class), lVar11 == 0))
          {
            uVar12 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar12,0);
          }
          if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          args->m_Items[0] = (Il2CppObject *)a;
          thunk_FUN_01c20e04(args->m_Items,a);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          puVar16 = &StringLiteral_10698;
          goto LAB_03647b98;
        }
        bVar7 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
        if (!bVar7) {
          pGVar8 = (pBVar20->fields).AKFPFIHIHOC;
          __this = (LEGDPJHPEOB_o *)0x0;
          if (pGVar8 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
          goto LAB_03647bc8;
          pSVar9 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar8,
                              Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__
                             );
          if (pSVar9 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            pSVar14 = pSVar9->klass;
            uVar4._0_1_ = (pSVar14->_2).rank;
            uVar4._1_1_ = (pSVar14->_2).minimumAlignment;
            uVar17 = (ulong)uVar4;
            if (uVar17 != 0) {
              piVar18 = &((pSVar14->_1).interfaceOffsets)->offset;
              do {
                    /* try { // try from 036479e8 to 03747a0f has its CatchHandler @ 03647cc0 */
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                  pVVar10 = pSVar14->vtable + *piVar18;
                  goto LAB_03647a1c;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            pVVar10 = (VirtualInvokeData *)
                      FUN_01b81914(pSVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_03647a1c:
            uVar17 = (*pVVar10->methodPtr)(pSVar9,pVVar10->method);
            if ((uVar17 & 1) == 0) goto LAB_03647ab4;
            pSVar14 = pSVar9->klass;
            uVar5._0_1_ = (pSVar14->_2).rank;
            uVar5._1_1_ = (pSVar14->_2).minimumAlignment;
            uVar17 = (ulong)uVar5;
            if (uVar17 != 0) {
              piVar18 = &((pSVar14->_1).interfaceOffsets)->offset;
              do {
                    /* try { // try from 03647a44 to 03747a6f has its CatchHandler @ 03647cbc */
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo) {
                  pVVar10 = pSVar14->vtable + *piVar18;
                  goto LAB_03647a78;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            pVVar10 = (VirtualInvokeData *)
                      FUN_01b81914(pSVar9,
                                   System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo,0);
LAB_03647a78:
            lVar11 = (*pVVar10->methodPtr)(pSVar9,pVVar10->method);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar7 = System_String__op_Equality
                              (*(System_String_o **)(lVar11 + 0x18),CJNHFNHJHPE,(MethodInfo *)0x0);
          } while (!bVar7);
          pMVar19->HPACPFLKHPK = StringLiteral_1606;
          thunk_FUN_01c20e04(pMVar19);
LAB_03647ab4:
                    /* try { // try from 03647ab8 to 03747acb has its CatchHandler @ 03647cd4 */
          if (pSVar9 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
            pSVar14 = pSVar9->klass;
            uVar6._0_1_ = (pSVar14->_2).rank;
            uVar6._1_1_ = (pSVar14->_2).minimumAlignment;
            uVar17 = (ulong)uVar6;
                    /* try { // try from 03647ad0 to 03747adf has its CatchHandler @ 03647cd8 */
            if (uVar17 != 0) {
              piVar18 = &((pSVar14->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                    (Il2CppClass *)System_IDisposable_TypeInfo) {
                  pVVar10 = pSVar14->vtable + *piVar18;
                  goto LAB_03647b14;
                }
                    /* try { // try from 03647aec to 03747aef has its CatchHandler @ 03647ca8 */
                uVar17 = uVar17 - 1;
                    /* try { // try from 03647af0 to 03747b0f has its CatchHandler @ 03647cc8 */
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            pVVar10 = (VirtualInvokeData *)FUN_01b81914(pSVar9,System_IDisposable_TypeInfo,0);
LAB_03647b14:
                    /* try { // try from 03647b14 to 03747b2f has its CatchHandler @ 03647cd0 */
            (*pVVar10->methodPtr)(pSVar9,pVVar10->method);
          }
        }
      }
                    /* try { // try from 03647bbc to 03747bdf has its CatchHandler @ 03647cb0 */
      return;
    }
  }
LAB_03647bc8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

