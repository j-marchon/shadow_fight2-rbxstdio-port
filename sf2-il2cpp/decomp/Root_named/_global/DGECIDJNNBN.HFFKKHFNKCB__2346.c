// TypeDefIndex 2346
// Namespace: 
// [CompilerGenerated]
// private sealed class DGECIDJNNBN.HFFKKHFNKCB
// Fields:
//   public KPKMEEIPCJA consentHandler; // 0x10

// ===== internal void EDOHLAJOIPE()  [RVA 0x3323CCC]
// DGECIDJNNBN.HFFKKHFNKCB$$EDOHLAJOIPE @ RVA 0x3323CCC

void DGECIDJNNBN_HFFKKHFNKCB__EDOHLAJOIPE(DGECIDJNNBN_HFFKKHFNKCB_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  VirtualInvokeData *pVVar3;
  Il2CppObject *arg0;
  KPKMEEIPCJA_c *pKVar4;
  ulong uVar5;
  int32_t *piVar6;
  KPKMEEIPCJA_o *pKVar7;
  undefined4 local_34;
  
  if ((DAT_04567862 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4572);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4573);
    FUN_01bab630(&BCPBDJHCIFM_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&KPKMEEIPCJA_TypeInfo);
    DAT_04567862 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4572,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4573,(MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  pKVar7 = (__this->fields).consentHandler;
  if (pKVar7 == (KPKMEEIPCJA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pKVar4 = pKVar7->klass;
  uVar1._0_1_ = (pKVar4->_2).rank;
  uVar1._1_1_ = (pKVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pKVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)KPKMEEIPCJA_TypeInfo) {
        pVVar3 = pKVar4->vtable + (*piVar6 + 1);
        goto LAB_03423e10;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pKVar7,KPKMEEIPCJA_TypeInfo,1);
LAB_03423e10:
  local_34 = (*pVVar3->methodPtr)(pKVar7,pVVar3->method);
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(BCPBDJHCIFM_TypeInfo,&local_34);
  pSVar2 = System_String__Format(pSVar2,arg0,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
  }
  Nekki_SF2_GUI_DebugModules_ConsoleUI__Log(pSVar2,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x3323CC4]
// DGECIDJNNBN.HFFKKHFNKCB$$.ctor @ RVA 0x3323CC4

void DGECIDJNNBN_HFFKKHFNKCB___ctor(DGECIDJNNBN_HFFKKHFNKCB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

