// JJPNLEPEAFM$$DHEOJOJFOAJ @ RVA 0x3533BD0

Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o * JJPNLEPEAFM__DHEOJOJFOAJ(MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  NCJBDBGIPNF_o *__this;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *pNVar8;
  long lVar9;
  Il2CppClass *pIVar10;
  ulong uVar11;
  int32_t *piVar12;
  System_String_o **ppSVar13;
  System_Collections_Generic_Dictionary_object__object__o *pSVar14;
  undefined8 uVar15;
  
  if ((DAT_04568a76 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<Func<string,_bool>,_string>_set_Item__
                );
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&System_Func<string,_bool>_TypeInfo);
    FUN_01bab630(&Method_IONAICHLBOO_EECFAJEJAFF__);
    FUN_01bab630(&Method_IONAICHLBOO_FCBNILJFGIH__);
    FUN_01bab630(&Method_IONAICHLBOO_MFKLLLKLILP__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_InputDialog_TypeInfo);
    FUN_01bab630(&NCJBDBGIPNF_TypeInfo);
    FUN_01bab630(&StringLiteral_20422);
    FUN_01bab630(&StringLiteral_20424);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_20421);
    FUN_01bab630(&StringLiteral_17797);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568a76 = 1;
  }
  __this = (NCJBDBGIPNF_o *)thunk_FUN_01bda818(NCJBDBGIPNF_TypeInfo);
  NCJBDBGIPNF___ctor(__this,(MethodInfo *)0x0);
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar5 = Method_System_Array_Empty<string>__;
  lVar9 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar9 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar9 = *(long *)(lVar5 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01b81620();
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620();
  }
  uVar3 = StringLiteral_20421;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar10 = pIVar4->klass;
    uVar15 = **(undefined8 **)(lVar5 + 0xb8);
    uVar2._0_1_ = (pIVar10->_2).rank;
    uVar2._1_1_ = (pIVar10->_2).minimumAlignment;
    uVar11 = (ulong)uVar2;
    if (uVar11 != 0) {
      piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar6 = pIVar10->vtable + (*piVar12 + 0xc);
          goto LAB_03633da4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03633da4:
    pSVar7 = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar3,uVar15,pVVar6->method);
    if (__this != (NCJBDBGIPNF_o *)0x0) {
      (__this->fields).FDLJAOACNIP = pSVar7;
      thunk_FUN_01c20e04();
      (__this->fields).EEABODJFJMN = StringLiteral_17797;
      thunk_FUN_01c20e04();
      (__this->fields).PJKGDJHIDFA = StringLiteral_3640;
      thunk_FUN_01c20e04();
      ppSVar13 = &(__this->fields).JBHBKEOFPPA;
      *ppSVar13 = StringLiteral_1;
      thunk_FUN_01c20e04(ppSVar13);
      pSVar14 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).GCDPLFELIBF;
      pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      if (pSVar14 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (pSVar14,pIVar4,StringLiteral_20424,
                   Method_System_Collections_Generic_Dictionary<Func<string,_bool>,_string>_set_Item__
                  );
        pSVar14 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields).MLPDIICEKIO;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
        System_Func<object,_bool>___ctor();
        if (pSVar14 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object,_object>__set_Item
                    (pSVar14,pIVar4,StringLiteral_20424,
                     Method_System_Collections_Generic_Dictionary<Func<string,_bool>,_string>_set_Item__
                    );
          pSVar14 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (__this->fields).MLPDIICEKIO;
          pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
          System_Func<object,_bool>___ctor();
          if (pSVar14 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object,_object>__set_Item
                      (pSVar14,pIVar4,StringLiteral_20422,
                       Method_System_Collections_Generic_Dictionary<Func<string,_bool>,_string>_set_Item__
                      );
            pSVar14 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this->fields).MLPDIICEKIO;
            pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
            System_Func<object,_bool>___ctor();
            if (pSVar14 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary<object,_object>__set_Item
                        (pSVar14,pIVar4,StringLiteral_20422,
                         Method_System_Collections_Generic_Dictionary<Func<string,_bool>,_string>_set_Item__
                        );
              pNVar8 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)
                       GCIFMNHADDF__ACDDKABEBAP(0x46,(Il2CppObject *)__this,(MethodInfo *)0x0);
              if (pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0) {
                bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_TypeInfo->_2).naturalAligment;
                if ((pNVar8->klass->_2).naturalAligment < bVar1) {
                  pNVar8 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0;
                }
                else if ((pNVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                         (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_InputDialog_TypeInfo) {
                  pNVar8 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0;
                }
              }
              return pNVar8;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

