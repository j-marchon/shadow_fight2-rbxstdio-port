// Nekki.SF2.GUI.Shop.InfoPanelContent$$BPODLFGBCDE @ RVA 0x3005DDC

System_String_o *
Nekki_SF2_GUI_Shop_InfoPanelContent__BPODLFGBCDE
          (System_String_o *DGGHNFBCNGI,int64_t OIHNACKJOJG,int64_t NBHHBBOJJME,int32_t HEBCBHHLHHH,
          MethodInfo *method)

{
  ushort uVar1;
  System_Object_array *args;
  long lVar2;
  System_String_o *pSVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  undefined8 uVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  int32_t local_4c;
  undefined8 local_48;
  
  local_4c = HEBCBHHLHHH;
  if ((DAT_04565b4b & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_2449);
    FUN_01bab630(&StringLiteral_12031);
    DAT_04565b4b = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,5);
  if (args == (System_Object_array *)0x0) {
LAB_0310618c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((DGGHNFBCNGI != (System_String_o *)0x0) &&
     (lVar2 = thunk_FUN_01bda71c(DGGHNFBCNGI,(((args->obj).klass)->_1).element_class), lVar2 == 0))
  goto LAB_03106180;
  if ((int)args->max_length == 0) goto LAB_0310617c;
  args->m_Items[0] = (Il2CppObject *)DGGHNFBCNGI;
  thunk_FUN_01c20e04(args->m_Items,DGGHNFBCNGI);
  if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = BJFCCEEPHOF__POMAAOILGAL(NBHHBBOJJME,(MethodInfo *)0x0);
  if ((pSVar3 != (System_String_o *)0x0) &&
     (lVar2 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar2 == 0))
  goto LAB_03106180;
  if ((uint)args->max_length < 2) goto LAB_0310617c;
  args->m_Items[1] = (Il2CppObject *)pSVar3;
  thunk_FUN_01c20e04(args->m_Items + 1,pSVar3);
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0310618c;
  pIVar7 = pIVar4->klass;
  uVar1._0_1_ = (pIVar7->_2).rank;
  uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
        pVVar5 = pIVar7->vtable + (*piVar9 + 9);
        goto LAB_03105f80;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,DFLJPJMIMHI_TypeInfo,9);
LAB_03105f80:
  fVar10 = (float)(*pVVar5->methodPtr)(pIVar4,pVVar5->method);
  if (DAT_04561501 == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04561501 = '\x01';
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  dVar12 = (double)(fVar10 * 70.0);
  dVar11 = modf(dVar12,(double *)&local_48);
  if (0.0 <= fVar10 * 70.0) {
    if (dVar11 == 0.5) {
      dVar11 = 1.0;
      goto LAB_03106020;
    }
    dVar12 = (double)(long)(dVar12 + 0.5);
  }
  else if (dVar11 == -0.5) {
    dVar11 = -1.0;
LAB_03106020:
    dVar12 = (double)CONCAT44(local_48._4_4_,(int)local_48);
    if (((long)dVar12 & 1U) != 0) {
      dVar12 = dVar12 + dVar11;
    }
  }
  else {
    dVar12 = (double)(long)(dVar12 + -0.5);
  }
  local_48._0_4_ = -0x80000000;
  if (dVar12 != INFINITY) {
    local_48._0_4_ = (int)dVar12;
  }
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_48);
  if ((pIVar4 != (Il2CppObject *)0x0) &&
     (lVar2 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
LAB_03106180:
    uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar6,0);
  }
  if (2 < (uint)args->max_length) {
    args->m_Items[2] = pIVar4;
    thunk_FUN_01c20e04(args->m_Items + 2,pIVar4);
    pSVar3 = BJFCCEEPHOF__POMAAOILGAL(OIHNACKJOJG,(MethodInfo *)0x0);
    if ((pSVar3 != (System_String_o *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar2 == 0))
    goto LAB_03106180;
    if (3 < (uint)args->max_length) {
      args->m_Items[3] = (Il2CppObject *)pSVar3;
      thunk_FUN_01c20e04(args->m_Items + 3,pSVar3);
      pSVar3 = System_Int32__ToString((int32_t)&local_4c,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat(StringLiteral_12031,pSVar3,(MethodInfo *)0x0);
      if ((pSVar3 != (System_String_o *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar2 == 0))
      goto LAB_03106180;
      if (4 < (uint)args->max_length) {
        args->m_Items[4] = (Il2CppObject *)pSVar3;
        thunk_FUN_01c20e04(args->m_Items + 4,pSVar3);
        pSVar3 = System_String__Format(StringLiteral_2449,args,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
  }
LAB_0310617c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

