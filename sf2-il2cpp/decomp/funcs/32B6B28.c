// Nekki.SF2.GUI.Map.ProgressBricksPanel$$LBOHIOPPJOF @ RVA 0x32B6B28

void Nekki_SF2_GUI_Map_ProgressBricksPanel__LBOHIOPPJOF
               (Nekki_SF2_GUI_Map_ProgressBricksPanel_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               int32_t JPMOAIDONML,int32_t EDGFNGCAKGI,bool CAIIMHHPGMA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  System_String_array *values;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *str2;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  long lVar8;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_48;
  int32_t local_44;
  
  local_44 = JPMOAIDONML;
  if ((DAT_0456745a & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22506);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_16947);
    FUN_01bab630(&StringLiteral_16739);
    FUN_01bab630(&StringLiteral_21187);
    DAT_0456745a = 1;
  }
  local_48 = 0;
  if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) goto LAB_033b6f60;
  uVar3 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
  if (uVar3 < 0x16) {
    uVar3 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar3 & 0x12021a) == 0) {
      if ((uVar3 & 0x200404) == 0) {
        return;
      }
      __this_00 = (__this->fields)._lblTour;
      pSVar4 = StringLiteral_16739;
      if (!CAIIMHHPGMA) {
        pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar6 = Method_System_Array_Empty<string>__;
        pSVar4 = (BANHBMINMMP->fields).ICPECIILDFJ;
        lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
        if (lVar8 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<string>__);
          lVar8 = *(long *)(lVar6 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01b81620();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01b81620();
        }
        if (pIVar5 != (Il2CppObject *)0x0) {
          pIVar9 = pIVar5->klass;
          uVar12 = **(undefined8 **)(lVar6 + 0xb8);
          uVar1._0_1_ = (pIVar9->_2).rank;
          uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar1;
          if (uVar10 != 0) {
            piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar7 = pIVar9->vtable + (*piVar11 + 0xc);
                goto LAB_033b6e34;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033b6e34:
          pSVar4 = (System_String_o *)(*pVVar7->methodPtr)(pIVar5,pSVar4,uVar12,pVVar7->method);
          pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          lVar6 = Method_System_Array_Empty<string>__;
          lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
          if (lVar8 == 0) {
            FUN_01b8167c(Method_System_Array_Empty<string>__);
            lVar8 = *(long *)(lVar6 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01b81620();
          }
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01b81620();
          }
          uVar12 = StringLiteral_16947;
          if (pIVar5 != (Il2CppObject *)0x0) {
            pIVar9 = pIVar5->klass;
            uVar13 = **(undefined8 **)(lVar6 + 0xb8);
            uVar2._0_1_ = (pIVar9->_2).rank;
            uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
            uVar10 = (ulong)uVar2;
            if (uVar10 != 0) {
              piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                  pVVar7 = pIVar9->vtable + (*piVar11 + 0xc);
                  goto LAB_033b6f0c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033b6f0c:
            str2 = (System_String_o *)(*pVVar7->methodPtr)(pIVar5,uVar12,uVar13,pVVar7->method);
            pSVar4 = System_String__Concat(pSVar4,StringLiteral_167,str2,(MethodInfo *)0x0);
            if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                        (__this_00,pSVar4,(__this_00->klass->vtable)._75_set_text.method);
              return;
            }
          }
        }
        goto LAB_033b6f60;
      }
    }
    else {
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
      if (values == (System_String_array *)0x0) goto LAB_033b6f60;
      if ((int)values->max_length == 0) {
LAB_033b6f5c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[0] = StringLiteral_21187;
      thunk_FUN_01c20e04(values->m_Items);
      local_48 = EDGFNGCAKGI + 1;
      pSVar4 = System_Int32__ToString((int32_t)&local_48,(MethodInfo *)0x0);
      if ((uint)values->max_length < 2) goto LAB_033b6f5c;
      values->m_Items[1] = pSVar4;
      thunk_FUN_01c20e04(values->m_Items + 1,pSVar4);
      if ((uint)values->max_length < 3) goto LAB_033b6f5c;
      values->m_Items[2] = StringLiteral_22506;
      thunk_FUN_01c20e04(values->m_Items + 2);
      pSVar4 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
      if ((uint)values->max_length < 4) goto LAB_033b6f5c;
      values->m_Items[3] = pSVar4;
      thunk_FUN_01c20e04(values->m_Items + 3,pSVar4);
      if ((uint)values->max_length < 5) goto LAB_033b6f5c;
      values->m_Items[4] = StringLiteral_22500;
      thunk_FUN_01c20e04();
      pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._lblTour;
    }
    if (__this_00 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
LAB_033b6f60:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,pSVar4,(MethodInfo *)0x0);
  }
  return;
}

