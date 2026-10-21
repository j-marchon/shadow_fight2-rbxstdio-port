// Nekki.SF2.GUI.Dialogs.WebViewDialog$$IGNPLEMOFKA @ RVA 0x333B57C

void Nekki_SF2_GUI_Dialogs_WebViewDialog__IGNPLEMOFKA
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,UniWebView_o *OGCBKKDCJGJ,
               UniWebViewMessage_o *NONPLOOOOAG,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  GOLIJCLCCBA_o *pGVar3;
  System_Collections_Generic_IList_string__c *pSVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_Generic_IList_string__o *pSVar7;
  System_String_o *pSVar8;
  undefined1 auVar9 [16];
  
  auVar9._8_8_ = OGCBKKDCJGJ;
  auVar9._0_8_ = __this;
  if ((DAT_0456796e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    auVar9 = FUN_01bab630(&System_Collections_Generic_ICollection<string>_TypeInfo);
    DAT_0456796e = 1;
  }
  pGVar3 = (__this->fields).PAAIEEFEBKK;
  if (pGVar3 == (GOLIJCLCCBA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar9._0_8_,auVar9._8_8_);
  }
  pSVar7 = (pGVar3->fields).PPOHBBJFABG;
  if (pSVar7 != (System_Collections_Generic_IList_string__o *)0x0) {
    pSVar4 = pSVar7->klass;
    pSVar8 = (NONPLOOOOAG->fields)._Scheme_k__BackingField;
    uVar1._0_1_ = (pSVar4->_2).rank;
    uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pSVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_ICollection<string>_TypeInfo) {
          pVVar2 = pSVar4->vtable + (*piVar6 + 4);
          goto LAB_0343b624;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)
             FUN_01b81914(pSVar7,System_Collections_Generic_ICollection<string>_TypeInfo,4);
LAB_0343b624:
    uVar5 = (*pVVar2->methodPtr)(pSVar7,pSVar8,pVVar2->method);
    if ((uVar5 & 1) != 0) {
      pSVar8 = (NONPLOOOOAG->fields)._RawMessage_k__BackingField;
      if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Application__OpenURL(pSVar8,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}

