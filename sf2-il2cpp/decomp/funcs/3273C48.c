// AJMOIOIBPGP$$HKILPHEEBJA @ RVA 0x3273C48

void AJMOIOIBPGP__HKILPHEEBJA
               (AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,System_String_o *CNIELFLIKJB,
               int32_t *IPJBDMAEMBF,bool MONPPIMBEPG,MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *pSVar6;
  VirtualInvokeData *pVVar7;
  ACHLOMELAJE_o *__this_00;
  System_Object_array *args;
  long lVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__c *pSVar11;
  ulong uVar12;
  int32_t *piVar13;
  Il2CppObject *pIVar14;
  AJDHCLBLGMI_o *pAVar15;
  undefined4 local_68;
  int32_t local_64;
  
  if ((DAT_04567238 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IReadOnlyCollection<POGBKGFBOLC>_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_20463);
    FUN_01bab630(&StringLiteral_4303);
    FUN_01bab630(&StringLiteral_16398);
    FUN_01bab630(&StringLiteral_22394);
    DAT_04567238 = 1;
  }
  iVar2 = *IPJBDMAEMBF;
  *IPJBDMAEMBF = iVar2 + 1;
  if (NLFMDIGKNGP == (OPNMPAJKDMI_o *)0x0) {
LAB_03374018:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pAVar15 = (NLFMDIGKNGP->fields)._FBNKBJAJBJF_k__BackingField;
  pSVar6 = OPNMPAJKDMI__HOBICLIEIIJ(NLFMDIGKNGP,(MethodInfo *)0x0);
  if (pSVar6 == (System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *)0x0) goto LAB_03374018;
  pSVar11 = pSVar6->klass;
  uVar3._0_1_ = (pSVar11->_2).rank;
  uVar3._1_1_ = (pSVar11->_2).minimumAlignment;
  uVar12 = (ulong)uVar3;
  if (uVar12 != 0) {
    piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IReadOnlyCollection<POGBKGFBOLC>_TypeInfo) {
        pVVar7 = pSVar11->vtable + *piVar13;
        goto LAB_03373d5c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  pVVar7 = (VirtualInvokeData *)
           FUN_01b81914(pSVar6,System_Collections_Generic_IReadOnlyCollection<POGBKGFBOLC>_TypeInfo,
                        0);
LAB_03373d5c:
  iVar5 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
  if (pAVar15 == (AJDHCLBLGMI_o *)0x0) goto LAB_03374018;
  (pAVar15->fields).HNLMCGFEAJB = iVar2 + 1 == iVar5;
  pAVar15 = (NLFMDIGKNGP->fields)._FBNKBJAJBJF_k__BackingField;
  if (pAVar15 == (AJDHCLBLGMI_o *)0x0) goto LAB_03374018;
  if ((pAVar15->fields).HNLMCGFEAJB != false) {
    __this_00 = (__this->fields).OKNKKHGBECG;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_03374018;
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,6);
  if (args == (System_Object_array *)0x0) goto LAB_03374018;
  if (StringLiteral_4303 == (Il2CppObject *)0x0) {
    pIVar14 = (Il2CppObject *)0x0;
  }
  else {
    lVar8 = thunk_FUN_01bda71c(StringLiteral_4303,(((args->obj).klass)->_1).element_class);
    pIVar14 = StringLiteral_4303;
    if (lVar8 == 0) goto LAB_03374020;
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar14;
    thunk_FUN_01c20e04();
    pSVar9 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
    if ((pSVar9 != (System_String_o *)0x0) &&
       (lVar8 = thunk_FUN_01bda71c(pSVar9,(((args->obj).klass)->_1).element_class), lVar8 == 0)) {
LAB_03374020:
      uVar10 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar10,0);
    }
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)pSVar9;
      thunk_FUN_01c20e04(args->m_Items + 1,pSVar9);
      pSVar9 = StringLiteral_22394;
      puVar1 = &StringLiteral_20463;
      if (!MONPPIMBEPG) {
        puVar1 = &StringLiteral_16398;
      }
      pIVar14 = (Il2CppObject *)*puVar1;
      if ((pIVar14 != (Il2CppObject *)0x0) &&
         (lVar8 = thunk_FUN_01bda71c(pIVar14,(((args->obj).klass)->_1).element_class), lVar8 == 0))
      goto LAB_03374020;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar14;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar14);
        if ((CNIELFLIKJB != (System_String_o *)0x0) &&
           (lVar8 = thunk_FUN_01bda71c(CNIELFLIKJB,(((args->obj).klass)->_1).element_class),
           lVar8 == 0)) goto LAB_03374020;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = (Il2CppObject *)CNIELFLIKJB;
          thunk_FUN_01c20e04(args->m_Items + 3,CNIELFLIKJB);
          local_64 = *IPJBDMAEMBF;
          pIVar14 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
          if ((pIVar14 != (Il2CppObject *)0x0) &&
             (lVar8 = thunk_FUN_01bda71c(pIVar14,(((args->obj).klass)->_1).element_class),
             lVar8 == 0)) goto LAB_03374020;
          if (4 < (uint)args->max_length) {
            args->m_Items[4] = pIVar14;
            thunk_FUN_01c20e04(args->m_Items + 4,pIVar14);
            pSVar6 = OPNMPAJKDMI__HOBICLIEIIJ(NLFMDIGKNGP,(MethodInfo *)0x0);
            if (pSVar6 == (System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *)0x0)
            goto LAB_03374018;
            pSVar11 = pSVar6->klass;
            uVar4._0_1_ = (pSVar11->_2).rank;
            uVar4._1_1_ = (pSVar11->_2).minimumAlignment;
            uVar12 = (ulong)uVar4;
            if (uVar12 != 0) {
              piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                    (Il2CppClass *)
                    System_Collections_Generic_IReadOnlyCollection<POGBKGFBOLC>_TypeInfo) {
                  pVVar7 = pSVar11->vtable + *piVar13;
                  goto LAB_03373f80;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            pVVar7 = (VirtualInvokeData *)
                     FUN_01b81914(pSVar6,
                                  System_Collections_Generic_IReadOnlyCollection<POGBKGFBOLC>_TypeInfo
                                  ,0);
LAB_03373f80:
            local_68 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
            pIVar14 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_68);
            if ((pIVar14 != (Il2CppObject *)0x0) &&
               (lVar8 = thunk_FUN_01bda71c(pIVar14,(((args->obj).klass)->_1).element_class),
               lVar8 == 0)) goto LAB_03374020;
            if (5 < (uint)args->max_length) {
              args->m_Items[5] = pIVar14;
              thunk_FUN_01c20e04(args->m_Items + 5,pIVar14);
              pSVar9 = System_String__Format(pSVar9,args,(MethodInfo *)0x0);
              KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar9,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

