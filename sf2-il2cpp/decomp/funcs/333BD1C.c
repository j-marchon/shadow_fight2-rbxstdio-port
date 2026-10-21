// Nekki.SF2.GUI.Dialogs.WebViewDialog$$DGGOJPBDGJC @ RVA 0x333BD1C

/* WARNING: Removing unreachable block (ram,0x0343c030) */
/* WARNING: Removing unreachable block (ram,0x0343c060) */
/* WARNING: Removing unreachable block (ram,0x0343c07c) */

void Nekki_SF2_GUI_Dialogs_WebViewDialog__DGGOJPBDGJC
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UniWebView_ShouldCloseDelegate_o *value;
  UniWebView_MessageReceivedDelegate_o *value_00;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_String_o *scheme;
  MethodInfo *extraout_x1;
  GOLIJCLCCBA_o *pGVar6;
  System_Collections_Generic_IList_string__c *pSVar7;
  long lVar8;
  ulong uVar9;
  int32_t *piVar10;
  int *piVar11;
  UniWebView_o **ppUVar12;
  System_Collections_Generic_IList_string__o *pSVar13;
  UniWebView_o *pUVar14;
  
  if ((DAT_04567970 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<string>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&UniWebView_MessageReceivedDelegate_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UniWebView_ShouldCloseDelegate_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_WebViewDialog_IGNPLEMOFKA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_WebViewDialog_LJBOEFKHPCC__);
    DAT_04567970 = 1;
    method = extraout_x1;
  }
  ppUVar12 = &(__this->fields).APELOJBHPPJ;
  pUVar14 = *ppUVar12;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar14,(MethodInfo *)0x0);
  if (!bVar2) goto LAB_0343c044;
  pUVar14 = (__this->fields).APELOJBHPPJ;
  value = (UniWebView_ShouldCloseDelegate_o *)
          thunk_FUN_01bda818(UniWebView_ShouldCloseDelegate_TypeInfo);
  UniWebView_ShouldCloseDelegate___ctor();
  if (pUVar14 == (UniWebView_o *)0x0) {
LAB_0343c074:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  UniWebView__remove_OnShouldClose(pUVar14,value,(MethodInfo *)0x0);
  pUVar14 = (__this->fields).APELOJBHPPJ;
  value_00 = (UniWebView_MessageReceivedDelegate_o *)
             thunk_FUN_01bda818(UniWebView_MessageReceivedDelegate_TypeInfo);
  UniWebView_MessageReceivedDelegate___ctor();
  if (pUVar14 == (UniWebView_o *)0x0) goto LAB_0343c074;
  UniWebView__remove_OnMessageReceived(pUVar14,value_00,(MethodInfo *)0x0);
  pGVar6 = (__this->fields).PAAIEEFEBKK;
  if (pGVar6 == (GOLIJCLCCBA_o *)0x0) goto LAB_0343c074;
  pSVar13 = (pGVar6->fields).PPOHBBJFABG;
  if (pSVar13 != (System_Collections_Generic_IList_string__o *)0x0) {
    pSVar7 = pSVar13->klass;
    uVar1._0_1_ = (pSVar7->_2).rank;
    uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerable<string>_TypeInfo) {
          pVVar3 = pSVar7->vtable + *piVar10;
          goto LAB_0343bec8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar3 = (VirtualInvokeData *)
             FUN_01b81914(pSVar13,System_Collections_Generic_IEnumerable<string>_TypeInfo,0);
LAB_0343bec8:
    plVar4 = (long *)(*pVVar3->methodPtr)(pSVar13,pVVar3->method);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0343bf38;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0343bf38:
      uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar4 == (long *)0x0) break;
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 == 0) goto LAB_0343bffc;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_0343bfe4;
      }
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_string__c **)(piVar11 + -2) ==
              System_Collections_Generic_IEnumerator<string>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0343bf94;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01b81914(plVar4,System_Collections_Generic_IEnumerator<string>_TypeInfo,0);
LAB_0343bf94:
      scheme = (System_String_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (*ppUVar12 == (UniWebView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UniWebView__RemoveUrlScheme(*ppUVar12,scheme,(MethodInfo *)0x0);
    } while( true );
  }
  goto LAB_0343c034;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_0343bfe4:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0343c018;
    }
  }
LAB_0343bffc:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0343c018:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_0343c034:
  Util__JODGPLBHHIA((UnityEngine_Component_o *)*ppUVar12,false,(MethodInfo *)0x0);
LAB_0343c044:
  *ppUVar12 = (UniWebView_o *)0x0;
  thunk_FUN_01c20e04(ppUVar12,0);
  return;
}

