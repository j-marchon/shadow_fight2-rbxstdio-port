// KDPDBGNOFEN$$ILHNLFNMPCN @ RVA 0x34AD164

void KDPDBGNOFEN__ILHNLFNMPCN
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *JPLEIGKMFDA,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  char *pcVar6;
  Sfs2X_SmartFox_o *__this_00;
  MOEEMFAHGPL_PEDENGEGDNI__o *__this_01;
  int32_t ICLHKEAILDM;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Hashtable_c *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_Hashtable_o *pSVar10;
  
  method_00 = (MethodInfo *)JPLEIGKMFDA;
  if ((DAT_0456853c & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&System_Collections_IDictionary_TypeInfo);
    FUN_01bab630(&Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
    FUN_01bab630(&StringLiteral_21305);
    FUN_01bab630(&StringLiteral_11555);
    DAT_0456853c = 1;
    method_00 = extraout_x1;
  }
  KDPDBGNOFEN__IMLDFGHHMND(__this,method_00);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11555,BBBLOLJAMJP,(MethodInfo *)0x0);
    uVar2 = StringLiteral_21305;
    if ((JPLEIGKMFDA != (Sfs2X_Core_BaseEvent_o *)0x0) &&
       (pSVar10 = (JPLEIGKMFDA->fields).arguments, pSVar10 != (System_Collections_Hashtable_o *)0x0)
       ) {
      pSVar7 = pSVar10->klass;
      uVar1._0_1_ = (pSVar7->_2).rank;
      uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IDictionary_TypeInfo) {
            pVVar4 = &(pSVar7->vtable)._0_Equals + *piVar9;
            goto LAB_035ad288;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pSVar10,System_Collections_IDictionary_TypeInfo,0);
LAB_035ad288:
      plVar5 = (long *)(*pVVar4->methodPtr)(pSVar10,uVar2,pVVar4->method);
      if (plVar5 != (long *)0x0) {
        if (*(Il2CppClass **)(*plVar5 + 0x40) != (bool_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        pcVar6 = (char *)thunk_FUN_01bda96c();
        if (((*pcVar6 == '\0') ||
            (__this_00 = (__this->fields).EBJCMEOKKOK, __this_00 == (Sfs2X_SmartFox_o *)0x0)) ||
           (bVar3 = Sfs2X_SmartFox__get_IsConnected(__this_00,(MethodInfo *)0x0), !bVar3)) {
          __this_01 = (__this->fields).DDBFMMHDCBK;
          (__this->fields)._MGGBEPKMPCF_k__BackingField = false;
          if (__this_01 == (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) goto LAB_035ad324;
          ICLHKEAILDM = 1;
        }
        else {
          __this_01 = (__this->fields).DDBFMMHDCBK;
          (__this->fields)._MGGBEPKMPCF_k__BackingField = true;
          if (__this_01 == (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) goto LAB_035ad324;
          ICLHKEAILDM = 0;
        }
        JGGEJJLPMNL<object,_Int32Enum>__FLOAPDCEIDB
                  ((JGGEJJLPMNL_TArgs__TEventType__o *)__this_01,ICLHKEAILDM,(Il2CppObject *)0x0,
                   Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
        return;
      }
    }
  }
LAB_035ad324:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

